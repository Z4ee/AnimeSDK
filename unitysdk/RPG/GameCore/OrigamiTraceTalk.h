#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PlayAndWaitSimpleTalk; }

#define RPG_GAMECORE_ORIGAMITRACETALK_METHOD_2_4F5DA967AC79642A_OFFSET UNITYSDK_OFFSET(0x199DCAF0)
#define RPG_GAMECORE_ORIGAMITRACETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x199DCC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OrigamiTraceTalk_TypeDefinitionIndex = 20648;

	class OrigamiTraceTalk : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::PlayAndWaitSimpleTalk* TalkInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ORIGAMITRACETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4F5DA967AC79642A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OrigamiTraceTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OrigamiTraceTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ORIGAMITRACETALK_METHOD_2_4F5DA967AC79642A_OFFSET))(a1, a2);
		}
	};
}
