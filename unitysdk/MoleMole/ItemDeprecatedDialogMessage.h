#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_3_10F339609BE79763;

#define MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x129AAE40)
#define MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x129AAE80)
#define MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x129AAE50)

namespace MoleMole
{
	inline static constexpr unsigned int ItemDeprecatedDialogMessage_TypeDefinitionIndex = 62259;

	class ItemDeprecatedDialogMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_3_10F339609BE79763* _newItem; // 0x28
		::Class_3_10F339609BE79763* _oldItem; // 0x30

		::System::Void _ctor(::Class_3_10F339609BE79763* oldItem, ::Class_3_10F339609BE79763* newItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_10F339609BE79763*, ::Class_3_10F339609BE79763*))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE__CTOR_OFFSET))(this, oldItem, newItem);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
