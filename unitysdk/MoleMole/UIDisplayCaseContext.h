#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_57F7F2BF8C55D6B6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDISPLAYCASECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFFA60)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseContext_TypeDefinitionIndex = 48477;

	class UIDisplayCaseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_57F7F2BF8C55D6B6* FriendInfo; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* FriendIds; // 0x30
		::System::Int32 TargetSection; // 0x38
		::System::Int32 CurFriendIdx; // 0x3C
		::System::Boolean IsFriend; // 0x40
		::System::Boolean IsFemale; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
