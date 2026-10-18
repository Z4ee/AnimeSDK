#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xC87A4F0)
#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_GET_SPEAKER_OFFSET UNITYSDK_OFFSET(0xC87A4A0)
#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xC87A4B0)
#define RPG_CLIENT_BILLBOARD_BUBBLEBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8783C0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int BubbleBillboardData_TypeDefinitionIndex = 74983;

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
