#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_987;
class Class_0_16E4307DCC419505_988;
namespace RPG::Client { class IBookletView; }
namespace RPG::GameCore::Booklet { class ElementConfig; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BOOKLETPAGEVIEW_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9EA3BC0)
#define RPG_CLIENT_BOOKLETPAGEVIEW_DESTROY_OFFSET UNITYSDK_OFFSET(0x9EA32A0)
#define RPG_CLIENT_BOOKLETPAGEVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x9EA3250)
#define RPG_CLIENT_BOOKLETPAGEVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9EA3A90)
#define RPG_CLIENT_BOOKLETPAGEVIEW_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x9EA3CD0)
#define RPG_CLIENT_BOOKLETPAGEVIEW_UNLOAD_OFFSET UNITYSDK_OFFSET(0x9EA3B50)
#define RPG_CLIENT_BOOKLETPAGEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA3DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletPageView_TypeDefinitionIndex = 66694;

	class BookletPageView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Content; // 0x18
		::System::Boolean _IsLive; // 0x20
		::RPG::Client::IBookletView* _View; // 0x28
		::Class_0_16E4307DCC419505_987* _Element; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETPAGEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::IBookletView* view)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETPAGEVIEW_INIT_OFFSET))(this, view);
		}

		::System::Void Load(::RPG::GameCore::Booklet::ElementConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Booklet::ElementConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETPAGEVIEW_LOAD_OFFSET))(this, config);
		}

		::System::Void Accept(::Class_0_16E4307DCC419505_988* visitor)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_988*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETPAGEVIEW_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETPAGEVIEW_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETPAGEVIEW_UNLOAD_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETPAGEVIEW_DESTROY_OFFSET))(this);
		}
	};
}
