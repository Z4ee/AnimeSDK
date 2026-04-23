#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2D5788B16E028A11.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_07596D96EDE271F3_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x12AEEF20)
#define CLASS_1_07596D96EDE271F3_METHOD_1_1921A4ED7E47FEB6_OFFSET UNITYSDK_OFFSET(0x12AEE5A0)
#define CLASS_1_07596D96EDE271F3_METHOD_1_464AA4A03ADE696E_OFFSET UNITYSDK_OFFSET(0x12AEE4E0)
#define CLASS_1_07596D96EDE271F3_METHOD_1_5D9921C59C46B45F_OFFSET UNITYSDK_OFFSET(0x12AEE860)
#define CLASS_1_07596D96EDE271F3_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x12AEEE60)
#define CLASS_1_07596D96EDE271F3_METHOD_1_9C6221085838BD79_OFFSET UNITYSDK_OFFSET(0x12AEDE70)
#define CLASS_1_07596D96EDE271F3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AEE470)
#define CLASS_1_07596D96EDE271F3_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x12AEEF30)
#define CLASS_1_07596D96EDE271F3__CTOR_OFFSET UNITYSDK_OFFSET(0x12AEEF40)

inline static constexpr unsigned int Class_1_07596D96EDE271F3_TypeDefinitionIndex = 52593;

class Class_1_07596D96EDE271F3 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_15; // 0x0
	// static const ::System::Single Field_1_16; // 0x0
	::UnityEngine::Transform* Field_1_4; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::System::Single Field_1_5; // 0x30
	::System::Single Field_1_8; // 0x34
	::System::Single Field_1_14; // 0x38
	::System::Single Field_1_13; // 0x3C
	::System::Boolean _IsActive_k__BackingField; // 0x40
	::System::Single Field_1_9; // 0x44
	::System::Single Field_1_10; // 0x48
	::System::Single Field_1_6; // 0x4C
	::System::Single Field_1_7; // 0x50
	::System::Single Field_1_12; // 0x54
	::System::Single Field_1_11; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07596D96EDE271F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9C6221085838BD79(::Struct_2_2D5788B16E028A11 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2D5788B16E028A11))((::PBYTE)hIl2Cpp + CLASS_1_07596D96EDE271F3_METHOD_1_9C6221085838BD79_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07596D96EDE271F3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_5D9921C59C46B45F(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_07596D96EDE271F3_METHOD_1_5D9921C59C46B45F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1921A4ED7E47FEB6(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_07596D96EDE271F3_METHOD_1_1921A4ED7E47FEB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_07596D96EDE271F3_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Single Method_1_464AA4A03ADE696E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_07596D96EDE271F3_METHOD_1_464AA4A03ADE696E_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07596D96EDE271F3_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07596D96EDE271F3_SET_ISACTIVE_OFFSET))(this, value);
	}
};
