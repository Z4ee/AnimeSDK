#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_2EC118B78FC4216B;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD62C2E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C__DISPLAYCLASS5_0__GETTARGETANCHORPOS_B__1_OFFSET UNITYSDK_OFFSET(0xD62C850)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrTargetControl___c__DisplayClass5_0_TypeDefinitionIndex = 79916;

	class MechCraftCraftProgressAttrTargetControl___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::MechCraftAttributeType target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTargetAnchorPos_b__1(::System::ValueTuple_2<::Class_1_2EC118B78FC4216B*, ::System::Int32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::Class_1_2EC118B78FC4216B*, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C__DISPLAYCLASS5_0__GETTARGETANCHORPOS_B__1_OFFSET))(this, a1);
		}
	};
}
