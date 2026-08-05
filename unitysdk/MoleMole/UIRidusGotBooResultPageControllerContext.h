#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_569;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLERCONTEXT_BUILD_OFFSET UNITYSDK_OFFSET(0x160CB920)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x160CB800)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooResultPageControllerContext_TypeDefinitionIndex = 42875;

	class UIRidusGotBooResultPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* CurLevelTaskFinishedDict; // 0x28
		::System::String* NpcPotrait; // 0x30
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_569*>* Challenges; // 0x38
		::System::String* NpcName; // 0x40
		::System::Int32 NpcScore; // 0x48
		::MoleMole::Level::RatingType RatingType; // 0x4C
		::System::Int32 MyScore; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Build()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLERCONTEXT_BUILD_OFFSET))(this);
		}
	};
}
