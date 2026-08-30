#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client { class QuaternionRotationControlBehavior; }
namespace RPG::Client { class QuaternionRotationControlBehavior_SingleRotation; }
namespace System { class String; }

#define RPG_CLIENT_QUATERNIONROTATIONCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xDDC0A20)
#define RPG_CLIENT_QUATERNIONROTATIONCONTROLMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xDDC0A70)

namespace RPG::Client
{
	inline static constexpr unsigned int QuaternionRotationControlMonoPlugin_TypeDefinitionIndex = 70721;

	class QuaternionRotationControlMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::QuaternionRotationControlBehavior*>
	{
	public:
		::System::Boolean IfSingleRotation; // 0x30
		::UnityEngine::Quaternion Quaternion; // 0x34
		::System::Boolean IfTwoRotationLerp; // 0x44
		::System::Single LerpValue; // 0x48
		::RPG::Client::QuaternionRotationControlBehavior_SingleRotation* Rotation1; // 0x50
		::RPG::Client::QuaternionRotationControlBehavior_SingleRotation* Rotation2; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUATERNIONROTATIONCONTROLMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUATERNIONROTATIONCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
