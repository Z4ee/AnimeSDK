#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_METHOD_1_0FDE67E8BCF7203D_OFFSET UNITYSDK_OFFSET(0xC9EA6D0)
#define RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_METHOD_1_4ACC2F8684BE1D57_1_OFFSET UNITYSDK_OFFSET(0xC9EA860)
#define RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_METHOD_1_4ACC2F8684BE1D57_OFFSET UNITYSDK_OFFSET(0xC9EA7A0)
#define RPG_CLIENT_CAMERASOMATODYNAMICOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EA920)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraSomatoDynamicOffset_TypeDefinitionIndex = 69691;

	class CameraSomatoDynamicOffset : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterSomatoType SomatoType; // 0x10
		::System::Single SomatoHeightMin; // 0x14
		::System::Single SomatoHeightMax; // 0x18
		::UnityEngine::Vector3 AnchorOffsetMax; // 0x1C
		::UnityEngine::Vector3 AimOffsetMax; // 0x28
		::UnityEngine::Vector3 SelectDarkOffset; // 0x34
		::UnityEngine::Vector3 SelectDarkAimOffsetMax; // 0x40
		::UnityEngine::AnimationCurve* AnchorOffsetRatioCurve; // 0x50
		::UnityEngine::AnimationCurve* AimOffsetRatioCurve; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERASOMATODYNAMICOFFSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_0FDE67E8BCF7203D(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_METHOD_1_0FDE67E8BCF7203D_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_4ACC2F8684BE1D57(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_METHOD_1_4ACC2F8684BE1D57_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_4ACC2F8684BE1D57_1(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_METHOD_1_4ACC2F8684BE1D57_1_OFFSET))(this, a1);
		}
	};
}
