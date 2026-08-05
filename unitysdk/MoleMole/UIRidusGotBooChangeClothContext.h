#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_409;
class Class_2_208CC9941471731A_714;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3EA10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooChangeClothContext_TypeDefinitionIndex = 43048;

	class UIRidusGotBooChangeClothContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_714*>* selectedPassiveSkills; // 0x28
		::Class_2_208CC9941471731A_409* levelCfg; // 0x30
		::System::Action* OnCloseAction; // 0x38
		::System::Int32 redusGotBooQuestID; // 0x40
		::System::Boolean OnlyShowClothing; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
