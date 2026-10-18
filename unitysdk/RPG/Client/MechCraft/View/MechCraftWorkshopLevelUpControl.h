#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_061585F9B8C87A36;
namespace RPG::Client::MechCraft::View { class MechCraftWorkshopLevelUpControlBinder; }
namespace RPG::Client::MechCraft::View { class MechCraftWorkshopStarControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD66B880)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_METHOD_5_3CE3888623737EB0_OFFSET UNITYSDK_OFFSET(0xD66B920)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD66B8C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD66C750)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftWorkshopLevelUpControl_TypeDefinitionIndex = 80075;

	class MechCraftWorkshopLevelUpControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_061585F9B8C87A36* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftWorkshopLevelUpControlBinder* _Binder; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftWorkshopStarControl*>* _StarControls; // 0x28
		::System::String* _AnimEventSwitch; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_061585F9B8C87A36* get_Content()
		{
			return ((::Class_1_061585F9B8C87A36*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_061585F9B8C87A36* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_061585F9B8C87A36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_3CE3888623737EB0(::Class_1_061585F9B8C87A36* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_061585F9B8C87A36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_METHOD_5_3CE3888623737EB0_OFFSET))(this, a1);
		}
	};
}
