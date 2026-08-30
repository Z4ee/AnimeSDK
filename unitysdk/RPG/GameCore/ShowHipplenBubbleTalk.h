#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenGameTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWHIPPLENBUBBLETALK_METHOD_3_725079C75BFC73B3_OFFSET UNITYSDK_OFFSET(0x1D52C360)
#define RPG_GAMECORE_SHOWHIPPLENBUBBLETALK_METHOD_3_BBADCB6F8B8BACC4_OFFSET UNITYSDK_OFFSET(0x1D52C3B0)
#define RPG_GAMECORE_SHOWHIPPLENBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52C3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHipplenBubbleTalk_TypeDefinitionIndex = 21054;

	class ShowHipplenBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HipplenGameTargetType Target; // 0x18
		::System::String* Param; // 0x20
		::RPG::Client::TextID ContentTextID; // 0x28
		::RPG::GameCore::DynamicString* TextmapParam; // 0x38
		::System::Single Duration; // 0x40
		::System::Boolean WaitBubbleFinish; // 0x44
		::RPG::MVector3 Offset; // 0x48
		::System::Boolean InverseDirection; // 0x54
		::System::Boolean ArrowUp; // 0x55

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHIPPLENBUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_725079C75BFC73B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowHipplenBubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowHipplenBubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHIPPLENBUBBLETALK_METHOD_3_725079C75BFC73B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BBADCB6F8B8BACC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowHipplenBubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowHipplenBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHIPPLENBUBBLETALK_METHOD_3_BBADCB6F8B8BACC4_OFFSET))(a1, a2);
		}
	};
}
