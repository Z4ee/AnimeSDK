#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MusicRhythmPropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86_METHOD_1_23286C4E1BC884C6_OFFSET UNITYSDK_OFFSET(0x1288BFF0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1288B940)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86__CTOR_OFFSET UNITYSDK_OFFSET(0x1288BC30)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86_TypeDefinitionIndex = 55511;

class Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86 : public ::System::Object
{
public:
	::RPG::GameCore::TransformComponent* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::UnityEngine::Animator* Field_1_3; // 0x20
	::RPG::GameCore::GameEntity* Field_1_1; // 0x28
	::System::UInt32 Field_1_6; // 0x30
	::System::Boolean Field_1_10; // 0x34
	::UnityEngine::Vector3 Field_1_4; // 0x38
	::System::UInt32 Field_1_8; // 0x44
	::System::UInt32 Field_1_9; // 0x48
	::RPG::Client::Prop::MusicRhythmPropType Field_1_5; // 0x4C
	::System::Single Field_1_11; // 0x50
	::System::UInt32 Field_1_7; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_23286C4E1BC884C6(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86_METHOD_1_23286C4E1BC884C6_OFFSET))(this, a1);
	}
};
