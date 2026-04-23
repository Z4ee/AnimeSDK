#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HLODExpandType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STREAMINGITEMHLODEXPANDCONDITION_METHOD_2_F26432F3E32C1DC0_OFFSET UNITYSDK_OFFSET(0x18EA7D30)
#define RPG_GAMECORE_STREAMINGITEMHLODEXPANDCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA7E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingItemHLODExpandCondition_TypeDefinitionIndex = 18128;

	class StreamingItemHLODExpandCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HLODExpandType ExpandType; // 0x10
		::System::String* LodConfigKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGITEMHLODEXPANDCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F26432F3E32C1DC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingItemHLODExpandCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingItemHLODExpandCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGITEMHLODEXPANDCONDITION_METHOD_2_F26432F3E32C1DC0_OFFSET))(a1, a2);
		}
	};
}
