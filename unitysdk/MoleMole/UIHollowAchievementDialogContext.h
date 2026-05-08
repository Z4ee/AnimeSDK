#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14EFD1B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowAchievementDialogContext_TypeDefinitionIndex = 46933;

	class UIHollowAchievementDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* blessList; // 0x28
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* cardList; // 0x30
		::System::Int32 startIndex; // 0x38
		::System::Boolean isInHollow; // 0x3C
		::System::Boolean isArpeggio; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
