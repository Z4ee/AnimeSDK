#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SimpleGameplayTagRow.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole { class SimpleGameplayTagSpace; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DEB540)
#define MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DEB590)
#define MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE_REGISTERROWTOSPACE_OFFSET UNITYSDK_OFFSET(0x17DEAA30)
#define MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE_SETSPACE_OFFSET UNITYSDK_OFFSET(0x17DEB0D0)
#define MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE_UNREGISTERROWFROMSPACE_OFFSET UNITYSDK_OFFSET(0x17DEADA0)
#define MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17DEB5E0)
#define MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DEB640)
#define MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DEB650)

namespace MoleMole
{
	inline static constexpr unsigned int SimpleGameplayTagTable_TypeDefinitionIndex = 60664;

	class SimpleGameplayTagTable : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::MoleMole::SimpleGameplayTagSpace* TableSpace; // 0x58
		::MoleMole::SimpleGameplayTagSpace* curGameplayTagSpace; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::SimpleGameplayTagRow>* Tags; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterRowToSpace(::MoleMole::SimpleGameplayTagRow row)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SimpleGameplayTagRow))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE_REGISTERROWTOSPACE_OFFSET))(this, row);
		}

		::System::Void UnRegisterRowFromSpace(::MoleMole::SimpleGameplayTagRow row)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SimpleGameplayTagRow))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE_UNREGISTERROWFROMSPACE_OFFSET))(this, row);
		}

		::System::Void SetSpace(::MoleMole::SimpleGameplayTagSpace* space)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SimpleGameplayTagSpace*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE_SETSPACE_OFFSET))(this, space);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMPLEGAMEPLAYTAGTABLE___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
