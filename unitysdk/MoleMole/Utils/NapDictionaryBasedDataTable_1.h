#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/NapCameraSequenceDataTable.h"

namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapDictionaryBasedDataTable_1_TypeDefinitionIndex = 61091;

	template <typename T>
	class NapDictionaryBasedDataTable_1 : public ::MoleMole::Utils::NapCameraSequenceDataTable
	{
	public:
		static ::System::Type** StaticGet_EntryType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(NapDictionaryBasedDataTable_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, T>* dataTable; // 0x0
	};
}
