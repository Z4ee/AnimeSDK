#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_494;
class Class_1_208F86C6FC69A766;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRICKTUTORIALDIALONGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13414160)

namespace MoleMole
{
	inline static constexpr unsigned int UITrickTutorialDialongContext_TypeDefinitionIndex = 80814;

	class UITrickTutorialDialongContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* avatarList; // 0x28
		::Class_0_16E4307DCC419505_494* TutorialGetter; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_208F86C6FC69A766*>* skills; // 0x38
		::System::Int32 InitGroupID; // 0x40
		::System::Boolean HideRole; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKTUTORIALDIALONGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
