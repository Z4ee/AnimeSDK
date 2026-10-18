#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_ECF740E1BEC9395A;
namespace RPG::Client::MechCraft::View { class MechCraftExamItemControl; }
namespace RPG::Client::MechCraft::View { class MechCraftExamStartControlBinder; }
namespace Sofa { class ShortCutHintControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD6433D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_GET_SHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xD6443B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_METHOD_5_96175D6DCB6FF2B9_OFFSET UNITYSDK_OFFSET(0xD643470)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD643410)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD644970)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamStartControl_TypeDefinitionIndex = 79964;

	class MechCraftExamStartControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_ECF740E1BEC9395A* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftExamStartControlBinder* _Binder; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftExamItemControl*>* _Items; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_ECF740E1BEC9395A* get_Content()
		{
			return ((::Class_1_ECF740E1BEC9395A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_ECF740E1BEC9395A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECF740E1BEC9395A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::Sofa::ShortCutHintControl* get_ShortCutHint()
		{
			return ((::Sofa::ShortCutHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_GET_SHORTCUTHINT_OFFSET))(this);
		}

		::System::Void Method_5_96175D6DCB6FF2B9(::Class_1_ECF740E1BEC9395A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECF740E1BEC9395A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_METHOD_5_96175D6DCB6FF2B9_OFFSET))(this, a1);
		}
	};
}
