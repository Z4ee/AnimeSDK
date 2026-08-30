#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::Introduce { class IntroduceViewModel; }

#define RPG_CLIENT_INTRODUCE_INTRODUCETEXTSCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x19850190)
#define RPG_CLIENT_INTRODUCE_INTRODUCETEXTSCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x198501D0)
#define RPG_CLIENT_INTRODUCE_INTRODUCETEXTSCONTROL_TRYSETCONTENTBYINTROID_OFFSET UNITYSDK_OFFSET(0x19850370)
#define RPG_CLIENT_INTRODUCE_INTRODUCETEXTSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19850630)
#define RPG_CLIENT_INTRODUCE_INTRODUCETEXTSCONTROL__REFRESH_OFFSET UNITYSDK_OFFSET(0x19850230)

namespace RPG::Client::Introduce
{
	inline static constexpr unsigned int IntroduceTextsControl_TypeDefinitionIndex = 79156;

	class IntroduceTextsControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Introduce::IntroduceViewModel* _Content; // 0x18
		::RPG::Client::LocalizedText* _TextTitle; // 0x20
		::RPG::Client::LocalizedText* _TextDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCETEXTSCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Introduce::IntroduceViewModel* get_Content()
		{
			return ((::RPG::Client::Introduce::IntroduceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCETEXTSCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::Introduce::IntroduceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Introduce::IntroduceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCETEXTSCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Boolean TrySetContentByIntroID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCETEXTSCONTROL_TRYSETCONTENTBYINTROID_OFFSET))(this, a1);
		}

		::System::Void _Refresh(::RPG::Client::Introduce::IntroduceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Introduce::IntroduceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCETEXTSCONTROL__REFRESH_OFFSET))(this, a1);
		}
	};
}
