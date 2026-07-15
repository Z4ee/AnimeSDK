#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"

class Class_1_47EE63CB5C4DC8FC_5;
class FiveDimRenderingItem;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_GETDIALOGATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x19B95840)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_GETEFFECTROOT_OFFSET UNITYSDK_OFFSET(0x19B957E0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0x19B95740)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_GETROOT_OFFSET UNITYSDK_OFFSET(0x19B95780)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19B955F0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x19B956A0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B92D10)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesView_TypeDefinitionIndex = 73836;

	class ChenLingFesView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::FiveDimRenderingItem* RenderingItem; // 0x20
		::UnityEngine::Transform* Root; // 0x28
		::UnityEngine::Transform* EffectRoot; // 0x30
		::UnityEngine::Transform* DialogRoot; // 0x38
		::System::UInt32 ID; // 0x40
		::Entitas::IContext* Field_6_5; // 0x48
		::Entitas::IEntity* Field_6_6; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_RELEASE_OFFSET))(this, a1);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_GETENTITY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_GETROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetEffectRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_GETEFFECTROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetDialogAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESVIEW_GETDIALOGATTACHPOINT_OFFSET))(this);
		}
	};
}
