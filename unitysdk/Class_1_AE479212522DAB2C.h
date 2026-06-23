#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class IComparable; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_398;

#define CLASS_1_AE479212522DAB2C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11CD9B30)
#define CLASS_1_AE479212522DAB2C_METHOD_1_064A97F24265248C_1_OFFSET UNITYSDK_OFFSET(0x11CDAFA0)
#define CLASS_1_AE479212522DAB2C_METHOD_1_064A97F24265248C_2_OFFSET UNITYSDK_OFFSET(0x11CDB140)
#define CLASS_1_AE479212522DAB2C_METHOD_1_064A97F24265248C_OFFSET UNITYSDK_OFFSET(0x11CDAC10)
#define CLASS_1_AE479212522DAB2C_METHOD_1_070DCA4EDD075B73_OFFSET UNITYSDK_OFFSET(0x11CDA500)
#define CLASS_1_AE479212522DAB2C_METHOD_1_0AACD452E53A0B11_1_OFFSET UNITYSDK_OFFSET(0x11CDA0C0)
#define CLASS_1_AE479212522DAB2C_METHOD_1_0AACD452E53A0B11_2_OFFSET UNITYSDK_OFFSET(0x11CDA180)
#define CLASS_1_AE479212522DAB2C_METHOD_1_0AACD452E53A0B11_3_OFFSET UNITYSDK_OFFSET(0x11CDA3C0)
#define CLASS_1_AE479212522DAB2C_METHOD_1_0AACD452E53A0B11_OFFSET UNITYSDK_OFFSET(0x11CD9FF0)
#define CLASS_1_AE479212522DAB2C_METHOD_1_11C3F10DEDACB816_1_OFFSET UNITYSDK_OFFSET(0x11CDAAF0)
#define CLASS_1_AE479212522DAB2C_METHOD_1_11C3F10DEDACB816_2_OFFSET UNITYSDK_OFFSET(0x11CDAE80)
#define CLASS_1_AE479212522DAB2C_METHOD_1_11C3F10DEDACB816_OFFSET UNITYSDK_OFFSET(0x11CDA9D0)
#define CLASS_1_AE479212522DAB2C_METHOD_1_1CA63CD75D3F84D7_OFFSET UNITYSDK_OFFSET(0x11CDA480)
#define CLASS_1_AE479212522DAB2C_METHOD_1_3A2D39719D1D796F_OFFSET UNITYSDK_OFFSET(0x11CD9F20)
#define CLASS_1_AE479212522DAB2C_METHOD_1_3F48418C1CDDF1B4_OFFSET UNITYSDK_OFFSET(0x11CDA600)
#define CLASS_1_AE479212522DAB2C_METHOD_1_5D64E472DCD87FB3_OFFSET UNITYSDK_OFFSET(0x11CDA680)
#define CLASS_1_AE479212522DAB2C_METHOD_1_6015C243AAEE1FFC_1_OFFSET UNITYSDK_OFFSET(0x11CDADB0)
#define CLASS_1_AE479212522DAB2C_METHOD_1_6015C243AAEE1FFC_2_OFFSET UNITYSDK_OFFSET(0x11CDB070)
#define CLASS_1_AE479212522DAB2C_METHOD_1_6015C243AAEE1FFC_OFFSET UNITYSDK_OFFSET(0x11CDACE0)
#define CLASS_1_AE479212522DAB2C_METHOD_1_765EA9446D8F9DB2_OFFSET UNITYSDK_OFFSET(0x11CDA580)
#define CLASS_1_AE479212522DAB2C_METHOD_1_8CA3C8D09D08B67D_OFFSET UNITYSDK_OFFSET(0x11CD9CE0)
#define CLASS_1_AE479212522DAB2C_METHOD_1_8FADECFB574E7333_OFFSET UNITYSDK_OFFSET(0x11CD9E60)
#define CLASS_1_AE479212522DAB2C_METHOD_1_97C91294A7A01C81_1_OFFSET UNITYSDK_OFFSET(0x11CDA300)
#define CLASS_1_AE479212522DAB2C_METHOD_1_97C91294A7A01C81_OFFSET UNITYSDK_OFFSET(0x11CDA240)
#define CLASS_1_AE479212522DAB2C_METHOD_1_B5544847605075BD_OFFSET UNITYSDK_OFFSET(0x11CD9BF0)
#define CLASS_1_AE479212522DAB2C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11CD9BA0)
#define CLASS_1_AE479212522DAB2C__CTOR_2_OFFSET UNITYSDK_OFFSET(0x11CD9C40)
#define CLASS_1_AE479212522DAB2C__CTOR_OFFSET UNITYSDK_OFFSET(0x11CD9B20)

inline static constexpr unsigned int Class_1_AE479212522DAB2C_TypeDefinitionIndex = 47477;

class Class_1_AE479212522DAB2C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Func_2<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1, ::System::Collections::Generic::List_1<::System::Func_2<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::List_1<::System::Func_2<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C__CTOR_2_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Method_1_8CA3C8D09D08B67D(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_8CA3C8D09D08B67D_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_8FADECFB574E7333(::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_8FADECFB574E7333_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_0AACD452E53A0B11(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_0AACD452E53A0B11_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_0AACD452E53A0B11_1(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_0AACD452E53A0B11_1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_0AACD452E53A0B11_2(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_0AACD452E53A0B11_2_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_97C91294A7A01C81(::System::Func_2<::MoleMole::Battle::Entity*, ::System::IComparable*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Func_2<::MoleMole::Battle::Entity*, ::System::IComparable*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_97C91294A7A01C81_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_97C91294A7A01C81_1(::System::Func_2<::MoleMole::Battle::Entity*, ::System::IComparable*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Func_2<::MoleMole::Battle::Entity*, ::System::IComparable*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_97C91294A7A01C81_1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_0AACD452E53A0B11_3(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_0AACD452E53A0B11_3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_1_1CA63CD75D3F84D7()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_1CA63CD75D3F84D7_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_070DCA4EDD075B73()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_070DCA4EDD075B73_OFFSET))(this);
	}

	::System::Int32 Method_1_765EA9446D8F9DB2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_765EA9446D8F9DB2_OFFSET))(this);
	}

	::System::Boolean Method_1_3F48418C1CDDF1B4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_3F48418C1CDDF1B4_OFFSET))(this);
	}

	::System::Void Method_1_5D64E472DCD87FB3(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_5D64E472DCD87FB3_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_11C3F10DEDACB816(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_11C3F10DEDACB816_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_11C3F10DEDACB816_1(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_11C3F10DEDACB816_1_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_064A97F24265248C(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_064A97F24265248C_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_6015C243AAEE1FFC(::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_6015C243AAEE1FFC_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_6015C243AAEE1FFC_1(::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_6015C243AAEE1FFC_1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_11C3F10DEDACB816_2(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_11C3F10DEDACB816_2_OFFSET))(this, a1, a2);
	}

	::Class_1_AE479212522DAB2C* Method_1_3A2D39719D1D796F(::System::Func_2<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>* a1)
	{
		return ((::Class_1_AE479212522DAB2C*(*)(::PVOID, ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_3A2D39719D1D796F_OFFSET))(this, a1);
	}

	::Class_1_AE479212522DAB2C* Method_1_B5544847605075BD(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::Class_1_AE479212522DAB2C*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_B5544847605075BD_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_064A97F24265248C_1(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_064A97F24265248C_1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_6015C243AAEE1FFC_2(::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_6015C243AAEE1FFC_2_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>* Method_1_064A97F24265248C_2(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_398<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_METHOD_1_064A97F24265248C_2_OFFSET))(this, a1);
	}
};
