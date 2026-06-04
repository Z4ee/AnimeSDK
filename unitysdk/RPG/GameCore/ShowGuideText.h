#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GuideTextPC; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWGUIDETEXT_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x19C7DA00)
#define RPG_GAMECORE_SHOWGUIDETEXT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C7D920)
#define RPG_GAMECORE_SHOWGUIDETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7D9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGuideText_TypeDefinitionIndex = 23006;

	class ShowGuideText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ID; // 0x18
		::System::Int32 GuideResID; // 0x1C
		::System::String* Path; // 0x20
		::System::String* NodeID; // 0x28
		::System::Boolean Show; // 0x30
		::System::String* TextPath; // 0x38
		::System::String* Text; // 0x40
		::System::String* ActionName; // 0x48
		::System::Boolean CopyAnchorAndSale; // 0x50
		::System::Boolean Follow; // 0x51
		::System::Boolean Is3DObject; // 0x52
		::System::Boolean PlayFadeOut; // 0x53
		::System::Single OffsetX; // 0x54
		::System::Single OffsetY; // 0x58
		::RPG::GameCore::GuideTextPC* PCGuide; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETEXT_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETEXT_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
