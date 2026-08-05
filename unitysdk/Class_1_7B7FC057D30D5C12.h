#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_28FD69F98B9C81E2.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/Enum_3_70DCAC76E792CECD.h"
#include "unitysdk/Enum_3_C460945F1F3C12F5.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/Struct_2_BBA9BFFCB5AD7C3C.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_7B7FC057D30D5C12_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F6B1610)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_0901A93980379391_OFFSET UNITYSDK_OFFSET(0x1F6B2290)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_0A9A1A141C060A6E_1_OFFSET UNITYSDK_OFFSET(0x1F6B2F50)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_0A9A1A141C060A6E_OFFSET UNITYSDK_OFFSET(0x1F6B2EA0)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_0CCC2EEE6471B774_OFFSET UNITYSDK_OFFSET(0x1F6B1F90)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1F6B2970)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_295387C658F01BF9_OFFSET UNITYSDK_OFFSET(0x1F6B1DD0)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x1F6B1B60)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_4C728367D15A1646_1_OFFSET UNITYSDK_OFFSET(0x1F6B3000)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_4C728367D15A1646_OFFSET UNITYSDK_OFFSET(0x1F6B1FA0)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1F6B1B50)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x1F6B1B30)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0x1F6ACF60)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1F6B1B40)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_6C26675A4836F050_OFFSET UNITYSDK_OFFSET(0x1F6AB420)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1F6B1B80)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x1F6AC210)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_BD26E554FBEE39EC_OFFSET UNITYSDK_OFFSET(0x1F6B1B90)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_C3CFDA7116D4119A_1_OFFSET UNITYSDK_OFFSET(0x1F6B2870)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_C3CFDA7116D4119A_OFFSET UNITYSDK_OFFSET(0x1F6B1E90)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_C836268BEBB9DBE1_OFFSET UNITYSDK_OFFSET(0x1F6B29B0)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET UNITYSDK_OFFSET(0x1F6B27D0)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1F6B2660)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_E6619E1B9612CB0B_1_OFFSET UNITYSDK_OFFSET(0x1F6B2700)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_E6619E1B9612CB0B_OFFSET UNITYSDK_OFFSET(0x1F6B21C0)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_E7843E5CA317035C_OFFSET UNITYSDK_OFFSET(0x1F6B1D70)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_E80DA9A26A8F0F92_1_OFFSET UNITYSDK_OFFSET(0x1F6B2B30)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_E80DA9A26A8F0F92_OFFSET UNITYSDK_OFFSET(0x1F6B22F0)
#define CLASS_1_7B7FC057D30D5C12_METHOD_1_E8F70BB16F7A6774_OFFSET UNITYSDK_OFFSET(0x1F6B20C0)
#define CLASS_1_7B7FC057D30D5C12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6B16B0)
#define CLASS_1_7B7FC057D30D5C12__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B1600)

inline static constexpr unsigned int Class_1_7B7FC057D30D5C12_TypeDefinitionIndex = 18829;

class Class_1_7B7FC057D30D5C12 : public ::System::Object
{
public:
	::Foundation::IEntity* Field_1_9; // 0x10
	::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* Field_1_1; // 0x18
	::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* Field_1_4; // 0x20
	::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* Field_1_0; // 0x28
	::System::Collections::Generic::IEnumerable_1<::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*>* Field_1_11; // 0x30
	::System::Collections::Generic::IEnumerable_1<::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*>* Field_1_5; // 0x38
	::System::Action_2<::Class_1_7B7FC057D30D5C12*, ::System::Single>* Field_1_7; // 0x40
	::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* Field_1_6; // 0x48
	::Struct_2_BBA9BFFCB5AD7C3C Field_1_10; // 0x50
	::Enum_3_2C704E2262533CBD Field_1_2; // 0x68
	::Enum_3_CE80FD07999C5845 Field_1_3; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_TOSTRING_OFFSET))(this);
	}

	::Struct_2_BBA9BFFCB5AD7C3C Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_BBA9BFFCB5AD7C3C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::Enum_3_28FD69F98B9C81E2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_28FD69F98B9C81E2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	static ::Class_1_7B7FC057D30D5C12* Method_1_BD26E554FBEE39EC(::Enum_3_CE80FD07999C5845 a1, ::Enum_3_2C704E2262533CBD a2, ::System::Single a3, ::Enum_3_28FD69F98B9C81E2 a4, ::Enum_3_70DCAC76E792CECD a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::Class_1_7B7FC057D30D5C12*(*)(::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Single, ::Enum_3_28FD69F98B9C81E2, ::Enum_3_70DCAC76E792CECD, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_BD26E554FBEE39EC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_C3CFDA7116D4119A(::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_C3CFDA7116D4119A_OFFSET))(this, a1);
	}

	::Foundation::IEntity* Method_1_0CCC2EEE6471B774()
	{
		return ((::Foundation::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_0CCC2EEE6471B774_OFFSET))(this);
	}

	::System::Void Method_1_6C26675A4836F050(::Foundation::IEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_6C26675A4836F050_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C728367D15A1646(::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_4C728367D15A1646_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E8F70BB16F7A6774(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_E8F70BB16F7A6774_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6619E1B9612CB0B(::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_E6619E1B9612CB0B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0901A93980379391(::Enum_3_C460945F1F3C12F5 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_C460945F1F3C12F5))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_0901A93980379391_OFFSET))(this, a1);
	}

	::System::Single Method_1_E80DA9A26A8F0F92(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_E80DA9A26A8F0F92_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6619E1B9612CB0B_1(::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_E6619E1B9612CB0B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3CFDA7116D4119A_1(::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_C3CFDA7116D4119A_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::Class_1_7B7FC057D30D5C12* Method_1_E7843E5CA317035C(::Enum_3_CE80FD07999C5845 a1, ::Enum_3_2C704E2262533CBD a2)
	{
		return ((::Class_1_7B7FC057D30D5C12*(*)(::PVOID, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_E7843E5CA317035C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C836268BEBB9DBE1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_C836268BEBB9DBE1_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::Class_1_7B7FC057D30D5C12* Method_1_295387C658F01BF9(::System::Single a1, ::Enum_3_28FD69F98B9C81E2 a2, ::Enum_3_70DCAC76E792CECD a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::Class_1_7B7FC057D30D5C12*(*)(::PVOID, ::System::Single, ::Enum_3_28FD69F98B9C81E2, ::Enum_3_70DCAC76E792CECD, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_295387C658F01BF9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0A9A1A141C060A6E(::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_0A9A1A141C060A6E_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}

	::System::Void Method_1_0A9A1A141C060A6E_1(::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_0A9A1A141C060A6E_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_E80DA9A26A8F0F92_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_E80DA9A26A8F0F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C728367D15A1646_1(::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_7B7FC057D30D5C12_METHOD_1_4C728367D15A1646_1_OFFSET))(this, a1);
	}
};
