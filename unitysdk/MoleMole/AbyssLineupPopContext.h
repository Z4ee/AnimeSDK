#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_80565EDC4420BFE0.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_1824EF69C8E376A3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ABYSSLINEUPPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x122CFE80)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssLineupPopContext_TypeDefinitionIndex = 49584;

	class AbyssLineupPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AvatarList; // 0x28
		::System::Collections::Generic::List_1<::Enum_3_80565EDC4420BFE0>* BuildTypeList; // 0x30
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* AvatarItemList; // 0x38
		::System::Int32 FocusedAvatar; // 0x40
		::System::Boolean ShowReward; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSLINEUPPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
