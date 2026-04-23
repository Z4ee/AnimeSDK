#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/Struct_2_CD1E75D6195024B4.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_979;
class Class_0_16E4307DCC419505_981;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A89F7B4DA276C0D3_CLEAR_OFFSET UNITYSDK_OFFSET(0x12B3A810)
#define CLASS_1_A89F7B4DA276C0D3_GET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0x12B3B120)
#define CLASS_1_A89F7B4DA276C0D3_GET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x12B3B000)
#define CLASS_1_A89F7B4DA276C0D3_METHOD_1_0402CB66ABC854EF_OFFSET UNITYSDK_OFFSET(0x12B3A960)
#define CLASS_1_A89F7B4DA276C0D3_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x12B3ACA0)
#define CLASS_1_A89F7B4DA276C0D3_METHOD_1_6AECDE8D55A52B83_OFFSET UNITYSDK_OFFSET(0x12B3B020)
#define CLASS_1_A89F7B4DA276C0D3_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x12B3ACF0)
#define CLASS_1_A89F7B4DA276C0D3_METHOD_1_6C9F6034898E90A6_OFFSET UNITYSDK_OFFSET(0x12B3AA50)
#define CLASS_1_A89F7B4DA276C0D3_METHOD_1_E9D89E37393D6CD0_OFFSET UNITYSDK_OFFSET(0x12B3AB70)
#define CLASS_1_A89F7B4DA276C0D3_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x12B3A880)
#define CLASS_1_A89F7B4DA276C0D3_SET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0x12B3B130)
#define CLASS_1_A89F7B4DA276C0D3_SET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x12B3B010)
#define CLASS_1_A89F7B4DA276C0D3__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B3B180)
#define CLASS_1_A89F7B4DA276C0D3__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3B140)

inline static constexpr unsigned int Class_1_A89F7B4DA276C0D3_TypeDefinitionIndex = 66509;

class Class_1_A89F7B4DA276C0D3 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ElationTimeAtmosphereType, ::Class_0_16E4307DCC419505_981*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ElationTimeAtmosphereType, ::Class_0_16E4307DCC419505_981*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A89F7B4DA276C0D3_TypeDefinitionIndex)->GetStaticField(0x4D2D0);
	}
	static ::Class_0_16E4307DCC419505_981** StaticGet_Field_1_3()
	{
		return (::Class_0_16E4307DCC419505_981**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A89F7B4DA276C0D3_TypeDefinitionIndex)->GetStaticField(0x4D2D8);
	}
	::Class_0_16E4307DCC419505_979* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_981* _AtmosphereConfig_k__BackingField; // 0x18
	::System::Boolean _ShowEffect_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3__CCTOR_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_0402CB66ABC854EF(::Struct_2_CD1E75D6195024B4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CD1E75D6195024B4))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_METHOD_1_0402CB66ABC854EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_6C9F6034898E90A6(::Struct_2_CD1E75D6195024B4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CD1E75D6195024B4))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_METHOD_1_6C9F6034898E90A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_981* Method_1_E9D89E37393D6CD0(::RPG::GameCore::ElationTimeAtmosphereType a1)
	{
		return ((::Class_0_16E4307DCC419505_981*(*)(::PVOID, ::RPG::GameCore::ElationTimeAtmosphereType))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_METHOD_1_E9D89E37393D6CD0_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	::System::Boolean get_ShowEffect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_GET_SHOWEFFECT_OFFSET))(this);
	}

	::System::Void set_ShowEffect(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_SET_SHOWEFFECT_OFFSET))(this, value);
	}

	::System::Int32 Method_1_6AECDE8D55A52B83()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_METHOD_1_6AECDE8D55A52B83_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_981* get_AtmosphereConfig()
	{
		return ((::Class_0_16E4307DCC419505_981*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_GET_ATMOSPHERECONFIG_OFFSET))(this);
	}

	::System::Void set_AtmosphereConfig(::Class_0_16E4307DCC419505_981* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_981*))((::PBYTE)hIl2Cpp + CLASS_1_A89F7B4DA276C0D3_SET_ATMOSPHERECONFIG_OFFSET))(this, value);
	}
};
