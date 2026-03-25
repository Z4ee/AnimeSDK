#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView_AttachPointInfo.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0x99AFAA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x99AFAE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x99AFBB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CREATEDYNAMICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x99AFE20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CREATESTATICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x99AFC20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x99AFEF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW___IFIXBASEPROXY__CREATEDYNAMICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x99AFF20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW___IFIXBASEPROXY__CREATESTATICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x99AFF10)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimEmptyView_TypeDefinitionIndex = 62842;

	class FiveDimEmptyView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::Class_2_F47F7A3F5E97970D* Field_6_0; // 0x20
		::Class_3_1A92845FAFA5EC77* Field_6_1; // 0x28
		::Class_2_9DD8A46984F1AFFD* Field_6_2; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CTOR_OFFSET))(this);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_GETENTITY_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void _CreateStaticAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CREATESTATICATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Void _CreateDynamicAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CREATEDYNAMICATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__CreateStaticAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo& P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW___IFIXBASEPROXY__CREATESTATICATTACHPOINT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__CreateDynamicAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo& P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW___IFIXBASEPROXY__CREATEDYNAMICATTACHPOINT_OFFSET))(this, P0);
		}
	};
}
