#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"

class Class_2_37D832480CB327E1;
namespace RPG::Client::Prop { class BoxmanPuzzleItem; }
namespace RPG::GameCore { class PropComponent; }

#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_GET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x189BBBA0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_METHOD_1_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0x189B9B80)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x189BBB20)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_METHOD_1_93DFDE03653CA351_OFFSET UNITYSDK_OFFSET(0x189B9580)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_SET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x189BBBB0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x189BBBC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleItemBindProp_TypeDefinitionIndex = 78374;

	class BoxmanPuzzleItemBindProp : public ::System::Object
	{
	public:
		::System::Boolean _CanInteract_k__BackingField; // 0x10
		::RPG::GameCore::PropState ActivePropState; // 0x14
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 PropID; // 0x1C
		::RPG::Client::Prop::BoxmanPuzzleItem* _BoxmanItem; // 0x20
		::RPG::GameCore::PropComponent* _BindPropEntity; // 0x28
		::Class_2_37D832480CB327E1* _BindPropMovement; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_93DFDE03653CA351(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_METHOD_1_93DFDE03653CA351_OFFSET))(this, a1);
		}

		::System::Void Method_1_361C06486F56B4E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_METHOD_1_361C06486F56B4E7_OFFSET))(this);
		}

		::System::Void Method_1_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Boolean get_CanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_GET_CANINTERACT_OFFSET))(this);
		}

		::System::Void set_CanInteract(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEMBINDPROP_SET_CANINTERACT_OFFSET))(this, a1);
		}
	};
}
