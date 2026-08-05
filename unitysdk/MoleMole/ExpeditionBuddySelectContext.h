#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_45C1DDE65CB117DE;
class Class_2_F962337DE21CB9BC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EXPEDITIONBUDDYSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x149D3980)

namespace MoleMole
{
	inline static constexpr unsigned int ExpeditionBuddySelectContext_TypeDefinitionIndex = 76806;

	class ExpeditionBuddySelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_F962337DE21CB9BC*>* MemberSlots; // 0x28
		::Class_1_45C1DDE65CB117DE* LayerData; // 0x30
		::System::Int32 selectIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONBUDDYSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
