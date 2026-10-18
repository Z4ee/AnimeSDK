#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D3359DF62696519E;
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressAttrTargetControlBinder; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_GETTARGETANCHORPOS_OFFSET UNITYSDK_OFFSET(0xD6227B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD623270)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_METHOD_5_B85F667AE369605C_OFFSET UNITYSDK_OFFSET(0xD6232B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD621D50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD6238B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___REFRESH_B__6_0_OFFSET UNITYSDK_OFFSET(0xD6238C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrTargetControl_TypeDefinitionIndex = 79913;

	class MechCraftCraftProgressAttrTargetControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_D3359DF62696519E* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftCraftProgressAttrTargetControlBinder* _Binder; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_D3359DF62696519E* get_Content()
		{
			return ((::Class_1_D3359DF62696519E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_D3359DF62696519E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D3359DF62696519E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetTargetAnchorPos(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_GETTARGETANCHORPOS_OFFSET))(this, a1);
		}

		::System::Void Method_5_B85F667AE369605C(::Class_1_D3359DF62696519E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D3359DF62696519E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL_METHOD_5_B85F667AE369605C_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* __Refresh_b__6_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___REFRESH_B__6_0_OFFSET))(this);
		}
	};
}
