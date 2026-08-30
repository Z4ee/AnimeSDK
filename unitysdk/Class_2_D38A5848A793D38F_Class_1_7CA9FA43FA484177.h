#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D38A5848A793D38F_Struct_2_25C3AB38B656D6F4.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
class FiveDimRenderingItem;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_2DA628BB60C2248C_OFFSET UNITYSDK_OFFSET(0x153C1560)
#define CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x153B8AD0)
#define CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_3DD4D1DE715B4775_OFFSET UNITYSDK_OFFSET(0x153B9B40)
#define CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_4142DFFEB002DD11_OFFSET UNITYSDK_OFFSET(0x153C2E50)
#define CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_4E5624F3C257E817_OFFSET UNITYSDK_OFFSET(0x153C2D40)
#define CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_63A4E64BCCD4A5FD_OFFSET UNITYSDK_OFFSET(0x153C4ED0)
#define CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_977A5C8234F34C98_OFFSET UNITYSDK_OFFSET(0x153C4EE0)
#define CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_B858C31D109FA79F_OFFSET UNITYSDK_OFFSET(0x153B9930)
#define CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_F796417CAEAB8CB5_OFFSET UNITYSDK_OFFSET(0x153BD6C0)
#define CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177__CTOR_OFFSET UNITYSDK_OFFSET(0x153B8060)

inline static constexpr unsigned int Class_2_D38A5848A793D38F_Class_1_7CA9FA43FA484177_TypeDefinitionIndex = 76248;

class Class_2_D38A5848A793D38F_Class_1_7CA9FA43FA484177 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_B8E38BF47138A2E5*>* OHINGGBOLDF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FiveDimRenderingItem*>*>* NHEKGPPBLGF; // 0x18
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::Class_2_D38A5848A793D38F_Struct_2_25C3AB38B656D6F4>* IEJGIDNBGGH; // 0x20
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::Class_2_B8E38BF47138A2E5*>* JCOOCEHAMKB; // 0x28
	::System::Collections::Generic::List_1<::Class_2_B8E38BF47138A2E5*>* HBCGAKPGGAI; // 0x30
	::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* JGFGIFGPMEG; // 0x38
	::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>* LBDAEKMCPDB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* Method_1_63A4E64BCCD4A5FD()
	{
		return ((::System::Collections::Generic::List_1<::FiveDimRenderingItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_63A4E64BCCD4A5FD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_B8E38BF47138A2E5*>* Method_1_977A5C8234F34C98()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B8E38BF47138A2E5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_977A5C8234F34C98_OFFSET))(this);
	}

	::System::Boolean Method_1_F796417CAEAB8CB5(::Class_2_B8E38BF47138A2E5* a1, ::FiveDimRenderingItem* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_F796417CAEAB8CB5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B858C31D109FA79F(::System::Int32 a1, ::System::Collections::Generic::List_1<::FiveDimRenderingItem*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::FiveDimRenderingItem*>*&))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_B858C31D109FA79F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5624F3C257E817(::FiveDimRenderingItem* a1, ::Class_2_B8E38BF47138A2E5*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*, ::Class_2_B8E38BF47138A2E5*&))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_4E5624F3C257E817_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3DD4D1DE715B4775(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_3DD4D1DE715B4775_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Boolean Method_1_2DA628BB60C2248C(::FiveDimRenderingItem* a1, ::Class_2_D38A5848A793D38F_Struct_2_25C3AB38B656D6F4& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*, ::Class_2_D38A5848A793D38F_Struct_2_25C3AB38B656D6F4&))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_2DA628BB60C2248C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4142DFFEB002DD11(::FiveDimRenderingItem* a1, ::Class_2_D38A5848A793D38F_Struct_2_25C3AB38B656D6F4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*, ::Class_2_D38A5848A793D38F_Struct_2_25C3AB38B656D6F4))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_CLASS_1_7CA9FA43FA484177_METHOD_1_4142DFFEB002DD11_OFFSET))(this, a1, a2);
	}
};
