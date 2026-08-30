#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MusicRhythmPropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86_METHOD_1_23286C4E1BC884C6_OFFSET UNITYSDK_OFFSET(0x163BD420)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x163BCCA0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_48C90F3FD8FAFE86__CTOR_OFFSET UNITYSDK_OFFSET(0x163BCF90)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86_TypeDefinitionIndex = 60318;

class Class_1_5713C98DC6CE30C7_Class_1_48C90F3FD8FAFE86 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x10
	::System::String* OENAMINOLLF; // 0x18
	::RPG::GameCore::TransformComponent* BKLBJFJHOLF; // 0x20
	::UnityEngine::Animator* FOPCFKFAGPM; // 0x28
	::System::Boolean CAGCHKJHMPD; // 0x30
	::System::UInt32 EMNLCPDHLFF; // 0x34
	::UnityEngine::Vector3 EDLHLKAFDFA; // 0x38
	::RPG::Client::Prop::MusicRhythmPropType GMPGDEINODK; // 0x44
	::System::UInt32 DOLFIMKHDPI; // 0x48
	::System::Single EBDMPMAPMOB; // 0x4C
	::System::UInt32 AMMPNOLLCIN; // 0x50
	::System::UInt32 DJHILJPDNPP; // 0x54

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
