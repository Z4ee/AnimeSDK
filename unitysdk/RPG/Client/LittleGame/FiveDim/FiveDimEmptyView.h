#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView_AttachPointInfo.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xBDF2FE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBDF3020)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xBDF30F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CREATEDYNAMICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xBDF33C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CREATESTATICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xBDF3160)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDF34F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW___IFIXBASEPROXY__CREATEDYNAMICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xBDF3520)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW___IFIXBASEPROXY__CREATESTATICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xBDF3510)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimEmptyView_TypeDefinitionIndex = 71701;

	class FiveDimEmptyView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::Class_2_F47F7A3F5E97970D* Field_6_0; // 0x20
		::Class_3_1E4F9B0ED3BF21DE* Field_6_1; // 0x28
		::Class_2_B9E8C2EEAA5C96EC* Field_6_2; // 0x30

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

		::System::Void __iFixBaseProxy__CreateStaticAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW___IFIXBASEPROXY__CREATESTATICATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__CreateDynamicAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW___IFIXBASEPROXY__CREATEDYNAMICATTACHPOINT_OFFSET))(this, a1);
		}
	};
}
