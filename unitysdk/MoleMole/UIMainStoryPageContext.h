#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_D6F9B792012303A1;

#define MOLEMOLE_UIMAINSTORYPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x174512F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageContext_TypeDefinitionIndex = 50651;

	class UIMainStoryPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D6F9B792012303A1* PageTaskCompletionSource; // 0x28
		::System::Int32 FromLevelEnd; // 0x30
		::System::Int32 FromEndPerform; // 0x34
		::System::Int32 BattleMission; // 0x38
		::System::Int32 ArchiveFileID; // 0x3C
		::System::Int32 EndOvaContextID; // 0x40
		::System::Boolean IsAfkOva; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
