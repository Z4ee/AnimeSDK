#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSHOWTOASTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9994D50)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingShowToastData_TypeDefinitionIndex = 63291;

	class ChenLingShowToastData : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Anchor; // 0x10
		::RPG::Client::TextID Text; // 0x18
		::System::Single Param; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSHOWTOASTDATA__CTOR_OFFSET))(this);
		}
	};
}
