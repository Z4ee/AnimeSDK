#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BD61DE0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD621D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_EditEvent_TypeDefinitionIndex = 64712;

	class GridFightGameFormationEditor_EditEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* PosIndexes; // 0x10
		::System::Int32 TargetEquipIndex; // 0x18
		::System::UInt32 TargetPosIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITEVENT_CLEAR_OFFSET))(this);
		}
	};
}
