#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_57F7F2BF8C55D6B6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDISPLAYCASECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15664B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseContext_TypeDefinitionIndex = 64618;

	class UIDisplayCaseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_57F7F2BF8C55D6B6* FriendInfo; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* FriendIds; // 0x30
		::System::Boolean IsFriend; // 0x38
		::System::Boolean IsFemale; // 0x39
		::System::Int32 CurFriendIdx; // 0x3C
		::System::Int32 TargetSection; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
