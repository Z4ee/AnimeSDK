#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityChatPlayContext.h"
#include "unitysdk/Struct_2_57C422EDEAAA7766.h"

#define MOLEMOLE_UIINLEVELMULTICHATPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A11B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMultiChatPlayContext_TypeDefinitionIndex = 43097;

	class UIInLevelMultiChatPlayContext : public ::MoleMole::UIMainCityChatPlayContext
	{
	public:
		::Il2CppArray<::Struct_2_57C422EDEAAA7766>* chatEntities; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMULTICHATPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
