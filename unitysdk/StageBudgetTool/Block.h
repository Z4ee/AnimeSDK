#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define STAGEBUDGETTOOL_BLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xB94F290)

namespace StageBudgetTool
{
	inline static constexpr unsigned int Block_TypeDefinitionIndex = 44493;

	class Block : public ::System::Object
	{
	public:
		::System::String* Alias; // 0x10
		::System::Int32 Budget; // 0x18
		::System::String* ParentRoomAlias; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_BLOCK__CTOR_OFFSET))(this);
		}
	};
}
