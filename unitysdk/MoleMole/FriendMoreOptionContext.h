#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441_2.h"
#include "unitysdk/Enum_3_F79A436E91A3822C.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_FRIENDMOREOPTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B4800)

namespace MoleMole
{
	inline static constexpr unsigned int FriendMoreOptionContext_TypeDefinitionIndex = 54438;

	class FriendMoreOptionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>* extraReportTypes; // 0x28
		::Class_1_BE6BF7909AD9D940* info; // 0x30
		::UnityEngine::Events::UnityAction* overrideReportBtnAction; // 0x38
		::Enum_3_F79A436E91A3822C DisplayType; // 0x40
		::System::Boolean isRealPlayer; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRIENDMOREOPTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
