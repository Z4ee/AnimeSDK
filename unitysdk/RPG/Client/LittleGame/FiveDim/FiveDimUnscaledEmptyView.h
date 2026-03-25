#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_CREATEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x9A11190)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0x9A11010)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9A11050)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x9A11120)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9A113C0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimUnscaledEmptyView_TypeDefinitionIndex = 62858;

	class FiveDimUnscaledEmptyView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::Class_2_F47F7A3F5E97970D* Field_6_0; // 0x20
		::Class_3_1A92845FAFA5EC77* Field_6_1; // 0x28
		::Class_2_9DD8A46984F1AFFD* Field_6_2; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW__CTOR_OFFSET))(this);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_GETENTITY_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void CreateAttachPoint(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_CREATEATTACHPOINT_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
