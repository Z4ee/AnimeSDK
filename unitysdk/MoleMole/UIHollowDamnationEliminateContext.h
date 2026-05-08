#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B76E0F70078A67D5_1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2EF69FD7F867E7F6;
class Class_2_416175823F05B577;
class Class_3_F1B880F8D92A47C7;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWDAMNATIONELIMINATECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x168A8340)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDamnationEliminateContext_TypeDefinitionIndex = 39352;

	class UIHollowDamnationEliminateContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_1<::System::String*>* titleFunc; // 0x28
		::Class_3_F1B880F8D92A47C7* curseInfo; // 0x30
		::System::Action* callback; // 0x38
		::System::Collections::Generic::List_1<::Class_2_416175823F05B577*>* curseIDs; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* AdditiveCurseIDs; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_B76E0F70078A67D5_1>* curseState; // 0x50
		::Class_1_2EF69FD7F867E7F6* context; // 0x58
		::System::Boolean forbidSpecial; // 0x60
		::System::Boolean PlaySpecialFade; // 0x61
		::System::Boolean ShowBg; // 0x62
		::System::Boolean showRemove; // 0x63
		::System::Boolean isbless; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONELIMINATECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
