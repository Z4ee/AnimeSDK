#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1B56CF20)
#define RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1B56CF60)
#define RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B56CEE0)
#define RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56CFA0)

namespace RPGTools::Timeline::Discussion
{
	inline static constexpr unsigned int SwitchAnchorData_TypeDefinitionIndex = 49235;

	class SwitchAnchorData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* AnchorName; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 AnchorID; // 0x24
		::System::Boolean StickToGround; // 0x28
		::System::Boolean _isCaptureNpc; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}
	};
}
