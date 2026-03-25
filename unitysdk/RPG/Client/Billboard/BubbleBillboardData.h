#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x91F05D0)
#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_GET_SPEAKER_OFFSET UNITYSDK_OFFSET(0x91F0580)
#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x91F0590)
#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91EE970)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int BubbleBillboardData_TypeDefinitionIndex = 61540;

	class BubbleBillboardData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _Speaker_k__BackingField; // 0x10

		::System::Void _ctor(::UnityEngine::GameObject* speaker)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA__CTOR_OFFSET))(this, speaker);
		}

		::UnityEngine::GameObject* get_Speaker()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_GET_SPEAKER_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_CLONE_OFFSET))(this);
		}
	};
}
