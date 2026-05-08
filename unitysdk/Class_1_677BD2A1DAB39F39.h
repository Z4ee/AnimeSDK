#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_677BD2A1DAB39F39_Enum_3_78AAC5285CF1C408.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_336;
class Class_1_0C374BF7FA51CDE4;
class Class_1_677BD2A1DAB39F39_Class_1_87BAA6E5D9FF7C75;
class Class_1_6E640EA44E657B61;
class Class_2_208CC9941471731A_524;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_677BD2A1DAB39F39_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1226E540)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_0D7F0C9DBEFD8449_OFFSET UNITYSDK_OFFSET(0x1226E5A0)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x1226EC10)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x1226E910)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_6AB856D0D4FDB800_OFFSET UNITYSDK_OFFSET(0x1226EBB0)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1226ED50)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_8C945585B4A8C17B_OFFSET UNITYSDK_OFFSET(0x1226E830)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1226E010)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_94B4767BA2F39F44_OFFSET UNITYSDK_OFFSET(0x1226DB50)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1226EE10)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1226EA70)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1226EB00)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_9F2C232D65290484_OFFSET UNITYSDK_OFFSET(0x1226DE30)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_AA616269F7D7198B_OFFSET UNITYSDK_OFFSET(0x1226E100)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_BB1AEBB44806B3B8_OFFSET UNITYSDK_OFFSET(0x1226DD70)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x1226DA60)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_BF5C23198CB958C5_OFFSET UNITYSDK_OFFSET(0x1226E160)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x1226D9D0)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1226EA60)
#define CLASS_1_677BD2A1DAB39F39_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1226E590)
#define CLASS_1_677BD2A1DAB39F39__CTOR_OFFSET UNITYSDK_OFFSET(0x1226D940)

inline static constexpr unsigned int Class_1_677BD2A1DAB39F39_TypeDefinitionIndex = 67475;

class Class_1_677BD2A1DAB39F39 : public ::System::Object
{
public:
	::Class_1_0C374BF7FA51CDE4* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_336* Field_1_0; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::Class_1_677BD2A1DAB39F39_Class_1_87BAA6E5D9FF7C75*>* Field_1_3; // 0x28
	::Class_1_6E640EA44E657B61* Field_1_5; // 0x30
	::System::Func_1<::Class_0_16E4307DCC419505_336*>* Field_1_1; // 0x38
	::Class_1_677BD2A1DAB39F39_Enum_3_78AAC5285CF1C408 Field_1_4; // 0x40

	::System::Void _ctor(::System::Func_1<::Class_0_16E4307DCC419505_336*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::Class_0_16E4307DCC419505_336*>*))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Void Method_1_94B4767BA2F39F44(::System::Int32 a1, ::System::Action* a2, ::System::Boolean a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_94B4767BA2F39F44_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Boolean Method_1_AA616269F7D7198B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_AA616269F7D7198B_OFFSET))(this);
	}

	::System::Void Method_1_BF5C23198CB958C5(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_BF5C23198CB958C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_0D7F0C9DBEFD8449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_0D7F0C9DBEFD8449_OFFSET))(this);
	}

	::System::Void Method_1_8C945585B4A8C17B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_8C945585B4A8C17B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_BB1AEBB44806B3B8(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_524*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_524*>*&))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_BB1AEBB44806B3B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Single Method_1_6AB856D0D4FDB800()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_6AB856D0D4FDB800_OFFSET))(this);
	}

	::System::Void Method_1_9F2C232D65290484(::Class_1_6E640EA44E657B61* a1, ::System::Action* a2, ::System::Boolean a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E640EA44E657B61*, ::System::Action*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_9F2C232D65290484_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_677BD2A1DAB39F39_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}
};
