#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD8BE20)
#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_GET_SPEAKER_OFFSET UNITYSDK_OFFSET(0x1BD8BDD0)
#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BD8BDE0)
#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD89CF0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int BubbleBillboardData_TypeDefinitionIndex = 74692;

	class BubbleBillboardData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _Speaker_k__BackingField; // 0x10

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA__CTOR_OFFSET))(this, a1);
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
