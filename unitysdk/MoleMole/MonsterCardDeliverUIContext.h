#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_86AA8F306FA75018;
namespace MoleMole { class PopMonsterCardDeliverShow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONSTERCARDDELIVERUICONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19171820)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterCardDeliverUIContext_TypeDefinitionIndex = 41447;

	class MonsterCardDeliverUIContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_86AA8F306FA75018*>* CardList; // 0x28
		::MoleMole::PopMonsterCardDeliverShow* showObj; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERCARDDELIVERUICONTEXT__CTOR_OFFSET))(this);
		}
	};
}
