#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_CREATEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xBE0CE80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xBE0CD00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBE0CD40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xBE0CE10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBE0D0B0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimUnscaledEmptyView_TypeDefinitionIndex = 71717;

	class FiveDimUnscaledEmptyView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::Class_2_F47F7A3F5E97970D* Field_6_0; // 0x20
		::Class_3_1E4F9B0ED3BF21DE* Field_6_1; // 0x28
		::Class_2_B9E8C2EEAA5C96EC* Field_6_2; // 0x30

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
