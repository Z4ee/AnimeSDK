#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendCardContext.h"

class Class_2_E23E4CB2769CC93F;

#define MOLEMOLE_UISOCIALCIRCLERECRUITFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D55670)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleRecruitFriendCardContext_TypeDefinitionIndex = 42920;

	class UISocialCircleRecruitFriendCardContext : public ::MoleMole::UIFriendCardContext
	{
	public:
		::Class_2_E23E4CB2769CC93F* CircleData; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
