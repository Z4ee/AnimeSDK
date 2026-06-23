#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_553;
class Class_1_1910126201EC593B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRICKTUTORIALDIALONGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13999DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UITrickTutorialDialongContext_TypeDefinitionIndex = 57864;

	class UITrickTutorialDialongContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* avatarList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_1910126201EC593B*>* skills; // 0x30
		::Class_0_16E4307DCC419505_553* TutorialGetter; // 0x38
		::System::Int32 InitGroupID; // 0x40
		::System::Boolean HideRole; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKTUTORIALDIALONGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
