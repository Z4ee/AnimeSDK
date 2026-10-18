#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MusicRhythmPropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86_METHOD_1_23286C4E1BC884C6_OFFSET UNITYSDK_OFFSET(0xB2A3FB0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB2A3830)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A3B20)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86_TypeDefinitionIndex = 60182;

class Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86 : public ::System::Object
{
public:
	::UnityEngine::Animator* FOPCFKFAGPM; // 0x10
	::RPG::GameCore::TransformComponent* BKLBJFJHOLF; // 0x18
	::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x20
	::System::String* OENAMINOLLF; // 0x28
	::System::UInt32 DJHILJPDNPP; // 0x30
	::System::UInt32 AMMPNOLLCIN; // 0x34
	::System::UInt32 DOLFIMKHDPI; // 0x38
	::System::Boolean CAGCHKJHMPD; // 0x3C
	::UnityEngine::Vector3 EDLHLKAFDFA; // 0x40
	::RPG::Client::Prop::MusicRhythmPropType GMPGDEINODK; // 0x4C
	::System::UInt32 EMNLCPDHLFF; // 0x50
	::System::Single EBDMPMAPMOB; // 0x54

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
