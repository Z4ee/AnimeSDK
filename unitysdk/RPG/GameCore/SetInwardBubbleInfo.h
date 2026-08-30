#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/InwardBubbleTalkType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETINWARDBUBBLEINFO_METHOD_3_03D3F53A6FE74D85_OFFSET UNITYSDK_OFFSET(0x1E0829A0)
#define RPG_GAMECORE_SETINWARDBUBBLEINFO_METHOD_3_E8644714A49E2A38_OFFSET UNITYSDK_OFFSET(0x1E082960)
#define RPG_GAMECORE_SETINWARDBUBBLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E082990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetInwardBubbleInfo_TypeDefinitionIndex = 21367;

	class SetInwardBubbleInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityType TargetEntityType; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::RPG::GameCore::InwardBubbleTalkType Type; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETINWARDBUBBLEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8644714A49E2A38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetInwardBubbleInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetInwardBubbleInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETINWARDBUBBLEINFO_METHOD_3_E8644714A49E2A38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_03D3F53A6FE74D85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetInwardBubbleInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetInwardBubbleInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETINWARDBUBBLEINFO_METHOD_3_03D3F53A6FE74D85_OFFSET))(a1, a2);
		}
	};
}
