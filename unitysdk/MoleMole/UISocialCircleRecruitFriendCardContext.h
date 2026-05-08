#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendCardContext.h"

class Class_2_DF2C726EEEEC912D;

#define MOLEMOLE_UISOCIALCIRCLERECRUITFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1273F8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleRecruitFriendCardContext_TypeDefinitionIndex = 40581;

	class UISocialCircleRecruitFriendCardContext : public ::MoleMole::UIFriendCardContext
	{
	public:
		::Class_2_DF2C726EEEEC912D* CircleData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
