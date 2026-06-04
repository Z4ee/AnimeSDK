#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class VolumeComponent; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define CLASS_1_DE3E9F720065E051_METHOD_1_044433CED676829C_1_OFFSET UNITYSDK_OFFSET(0x136304C0)
#define CLASS_1_DE3E9F720065E051_METHOD_1_044433CED676829C_OFFSET UNITYSDK_OFFSET(0x136301C0)
#define CLASS_1_DE3E9F720065E051_METHOD_1_2714A387163730BF_OFFSET UNITYSDK_OFFSET(0x136307C0)
#define CLASS_1_DE3E9F720065E051_METHOD_1_3CE6FA99C64EC3AC_OFFSET UNITYSDK_OFFSET(0x1362FBA0)
#define CLASS_1_DE3E9F720065E051_METHOD_1_5218F55178695EA2_OFFSET UNITYSDK_OFFSET(0x1362FA00)
#define CLASS_1_DE3E9F720065E051_METHOD_1_636B7BE91E57AB07_OFFSET UNITYSDK_OFFSET(0x1362FEC0)
#define CLASS_1_DE3E9F720065E051_METHOD_1_80D0C78BF4F70EC9_OFFSET UNITYSDK_OFFSET(0x13630C80)
#define CLASS_1_DE3E9F720065E051_METHOD_1_8CA68E572E24C9BA_OFFSET UNITYSDK_OFFSET(0x13630860)
#define CLASS_1_DE3E9F720065E051__CTOR_OFFSET UNITYSDK_OFFSET(0x1362FB90)

inline static constexpr unsigned int Class_1_DE3E9F720065E051_TypeDefinitionIndex = 44639;

class Class_1_DE3E9F720065E051 : public ::System::Object
{
public:
	static ::Class_1_DE3E9F720065E051** StaticGet_Field_1_0()
	{
		return (::Class_1_DE3E9F720065E051**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE3E9F720065E051_TypeDefinitionIndex)->GetStaticField(0x494B0);
	}
	::UnityEngine::Rendering::VolumeComponent* Field_1_1; // 0x10
	::UnityEngine::Rendering::VolumeProfile* Field_1_2; // 0x18
	::UnityEngine::Rendering::VolumeComponent* Field_1_3; // 0x20
	::UnityEngine::Rendering::VolumeComponent* Field_1_4; // 0x28
	::System::String* Field_1_5; // 0x30
	::UnityEngine::Rendering::VolumeProfile* Field_1_6; // 0x38
	::UnityEngine::Rendering::VolumeProfile* Field_1_7; // 0x40
	::UnityEngine::Rendering::VolumeProfile* Field_1_8; // 0x48
	::UnityEngine::Rendering::VolumeComponent* Field_1_9; // 0x50
	::UnityEngine::Rendering::VolumeProfile* Field_1_10; // 0x58
	::System::Single Field_1_11; // 0x60
	::System::Single Field_1_12; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE3E9F720065E051__CTOR_OFFSET))(this);
	}

	static ::Class_1_DE3E9F720065E051* Method_1_5218F55178695EA2()
	{
		return ((::Class_1_DE3E9F720065E051*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE3E9F720065E051_METHOD_1_5218F55178695EA2_OFFSET))();
	}

	::System::Void Method_1_3CE6FA99C64EC3AC(::UnityEngine::Rendering::VolumeProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*))((::PBYTE)hIl2Cpp + CLASS_1_DE3E9F720065E051_METHOD_1_3CE6FA99C64EC3AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_636B7BE91E57AB07(::UnityEngine::Rendering::VolumeProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*))((::PBYTE)hIl2Cpp + CLASS_1_DE3E9F720065E051_METHOD_1_636B7BE91E57AB07_OFFSET))(this, a1);
	}

	::System::Void Method_1_044433CED676829C(::UnityEngine::Rendering::VolumeProfile* a1, ::UnityEngine::Rendering::VolumeProfile* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*, ::UnityEngine::Rendering::VolumeProfile*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DE3E9F720065E051_METHOD_1_044433CED676829C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_044433CED676829C_1(::UnityEngine::Rendering::VolumeProfile* a1, ::UnityEngine::Rendering::VolumeProfile* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*, ::UnityEngine::Rendering::VolumeProfile*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DE3E9F720065E051_METHOD_1_044433CED676829C_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2714A387163730BF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DE3E9F720065E051_METHOD_1_2714A387163730BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CA68E572E24C9BA(::UnityEngine::Rendering::VolumeProfile* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DE3E9F720065E051_METHOD_1_8CA68E572E24C9BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_80D0C78BF4F70EC9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DE3E9F720065E051_METHOD_1_80D0C78BF4F70EC9_OFFSET))(this, a1);
	}
};
