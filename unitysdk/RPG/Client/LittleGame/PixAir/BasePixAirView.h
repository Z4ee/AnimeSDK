#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_D15D83CB948FC3A0;
class Class_2_68CB91321C3E76A7;
namespace Entitas { class IEntity; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_ADD_DESTROYED_OFFSET UNITYSDK_OFFSET(0xBE36BC0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_BINDMESSAGE_OFFSET UNITYSDK_OFFSET(0xBE36DF0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_BIND_OFFSET UNITYSDK_OFFSET(0xBE36E40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_DESTROYVIEWONLY_OFFSET UNITYSDK_OFFSET(0xBE36E80)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_GETROOT_OFFSET UNITYSDK_OFFSET(0xBE36CC0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBE36D10)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBE36DB0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBE36F00)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_REMOVE_DESTROYED_OFFSET UNITYSDK_OFFSET(0xBE36C40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBE36F60)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int BasePixAirView_TypeDefinitionIndex = 71841;

	class BasePixAirView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>* Destroyed; // 0x18
		::Class_2_68CB91321C3E76A7* Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x28
		::Class_1_D15D83CB948FC3A0* Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW__CTOR_OFFSET))(this);
		}

		::System::Void add_Destroyed(::System::Action_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_ADD_DESTROYED_OFFSET))(this, a1);
		}

		::System::Void remove_Destroyed(::System::Action_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_REMOVE_DESTROYED_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_GETROOT_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void BindMessage(::Class_1_D15D83CB948FC3A0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D15D83CB948FC3A0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_BINDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_BIND_OFFSET))(this);
		}

		::System::Void DestroyViewOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_DESTROYVIEWONLY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_ONDESTROY_OFFSET))(this);
		}
	};
}
