#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18815110)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowAchievementDialogOpenCardContext_TypeDefinitionIndex = 40582;

	class UIHollowAchievementDialogOpenCardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* cardList; // 0x28
		::System::Int32 questID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
