#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_57F7F2BF8C55D6B6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDISPLAYCASECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D41030)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseContext_TypeDefinitionIndex = 63100;

	class UIDisplayCaseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FriendIds; // 0x28
		::Class_1_57F7F2BF8C55D6B6* FriendInfo; // 0x30
		::System::Boolean IsFemale; // 0x38
		::System::Boolean IsFriend; // 0x39
		::System::Int32 TargetSection; // 0x3C
		::System::Int32 CurFriendIdx; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
