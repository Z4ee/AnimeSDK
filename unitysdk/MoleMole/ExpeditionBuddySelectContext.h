#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_83DE381565FB61D2;
class Class_2_F962337DE21CB9BC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EXPEDITIONBUDDYSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12606B80)

namespace MoleMole
{
	inline static constexpr unsigned int ExpeditionBuddySelectContext_TypeDefinitionIndex = 52478;

	class ExpeditionBuddySelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_F962337DE21CB9BC*>* MemberSlots; // 0x28
		::Class_1_83DE381565FB61D2* LayerData; // 0x30
		::System::Int32 selectIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONBUDDYSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
