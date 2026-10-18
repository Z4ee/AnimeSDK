#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftExamItemState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_B6BE44583A9235C2;
namespace RPG::Client::MechCraft::View { class MechCraftExamItemControlBinder; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD639FC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_GET_ISWAITTOSHOWANIM_OFFSET UNITYSDK_OFFSET(0xD63A430)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_METHOD_5_3561C7233AD71981_OFFSET UNITYSDK_OFFSET(0xD63A5B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_METHOD_5_E1513374C600EBEC_OFFSET UNITYSDK_OFFSET(0xD63A060)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD63A000)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SET_ISWAITTOSHOWANIM_OFFSET UNITYSDK_OFFSET(0xD63A440)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SHOWANIM_OFFSET UNITYSDK_OFFSET(0xD63A620)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD63A760)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamItemControl_TypeDefinitionIndex = 79961;

	class MechCraftExamItemControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _StateUnknown; // 0x18
		::System::String* _StateCurrent; // 0x20
		::System::String* _StateFinish; // 0x28
		::Class_1_B6BE44583A9235C2* LFGMLJCCPCH; // 0x30
		::System::Boolean _IsWaitToShowAnim_k__BackingField; // 0x38
		::RPG::Client::MechCraft::View::MechCraftExamItemControlBinder* _Binder; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_B6BE44583A9235C2* get_Content()
		{
			return ((::Class_1_B6BE44583A9235C2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_B6BE44583A9235C2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B6BE44583A9235C2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitToShowAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_GET_ISWAITTOSHOWANIM_OFFSET))(this);
		}

		::System::Void set_IsWaitToShowAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SET_ISWAITTOSHOWANIM_OFFSET))(this, a1);
		}

		::System::Void Method_5_E1513374C600EBEC(::Class_1_B6BE44583A9235C2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B6BE44583A9235C2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_METHOD_5_E1513374C600EBEC_OFFSET))(this, a1);
		}

		::System::String* Method_5_3561C7233AD71981(::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_METHOD_5_3561C7233AD71981_OFFSET))(this, a1);
		}

		::System::Void ShowAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROL_SHOWANIM_OFFSET))(this);
		}
	};
}
