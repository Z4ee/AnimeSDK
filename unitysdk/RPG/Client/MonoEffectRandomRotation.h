#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffectRandomRotationContorlBehaviorlBehavior; }
namespace System { class String; }

#define RPG_CLIENT_MONOEFFECTRANDOMROTATION_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xC0F5DF0)
#define RPG_CLIENT_MONOEFFECTRANDOMROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F5E40)
#define RPG_CLIENT_MONOEFFECTRANDOMROTATION___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xC0F5E60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectRandomRotation_TypeDefinitionIndex = 64166;

	class MonoEffectRandomRotation : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::MonoEffectRandomRotationContorlBehaviorlBehavior*>
	{
	public:
		::UnityEngine::Vector3 Field_7_0; // 0x30
		::System::Single Field_7_1; // 0x3C
		::System::Single Field_7_2; // 0x40
		::System::Single Field_7_3; // 0x44
		::UnityEngine::Vector3 Field_7_4; // 0x48
		::UnityEngine::Vector3 Field_7_5; // 0x54
		::UnityEngine::Vector3 Field_7_6; // 0x60
		::System::Boolean use3AxisRotation; // 0x6C
		::System::Single RotSpeedX; // 0x70
		::System::Single RotSpeedY; // 0x74
		::System::Single RotSpeedZ; // 0x78
		::System::Single RotSpeedMin; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTRANDOMROTATION__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTRANDOMROTATION_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTRANDOMROTATION___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
