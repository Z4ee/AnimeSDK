#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2D5788B16E028A11.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D52D4C3F14D3FD6A_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC43F2C0)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_464AA4A03ADE696E_OFFSET UNITYSDK_OFFSET(0xC43E930)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0xC43F200)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_85F1BBDD911176D9_OFFSET UNITYSDK_OFFSET(0xC43E380)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC43E8C0)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_DD4A44352957FDD8_OFFSET UNITYSDK_OFFSET(0xC43E9F0)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_FF639A4CF295D530_OFFSET UNITYSDK_OFFSET(0xC43EC00)
#define CLASS_1_D52D4C3F14D3FD6A_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC43F2D0)
#define CLASS_1_D52D4C3F14D3FD6A__CTOR_OFFSET UNITYSDK_OFFSET(0xC43F2E0)

inline static constexpr unsigned int Class_1_D52D4C3F14D3FD6A_TypeDefinitionIndex = 53293;

class Class_1_D52D4C3F14D3FD6A : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::RPG::GameCore::GameEntity* Field_1_2; // 0x10
	::RPG::GameCore::GameEntity* Field_1_3; // 0x18
	::UnityEngine::Transform* Field_1_4; // 0x20
	::UnityEngine::Transform* Field_1_5; // 0x28
	::System::Single Field_1_6; // 0x30
	::System::Single Field_1_7; // 0x34
	::System::Single Field_1_8; // 0x38
	::System::Single Field_1_9; // 0x3C
	::System::Boolean _IsActive_k__BackingField; // 0x40
	::System::Single Field_1_11; // 0x44
	::System::Single Field_1_12; // 0x48
	::System::Single Field_1_13; // 0x4C
	::System::Single Field_1_14; // 0x50
	::System::Single Field_1_15; // 0x54
	::System::Single Field_1_16; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_85F1BBDD911176D9(::Struct_2_2D5788B16E028A11 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2D5788B16E028A11))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_85F1BBDD911176D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_FF639A4CF295D530(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_FF639A4CF295D530_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DD4A44352957FDD8(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_DD4A44352957FDD8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Single Method_1_464AA4A03ADE696E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_464AA4A03ADE696E_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_SET_ISACTIVE_OFFSET))(this, a1);
	}
};
