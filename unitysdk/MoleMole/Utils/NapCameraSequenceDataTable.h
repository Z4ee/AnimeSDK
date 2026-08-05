#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace System { class String; }
namespace System { class Type; }

#define MOLEMOLE_UTILS_NAPCAMERASEQUENCEDATATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B267A0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapCameraSequenceDataTable_TypeDefinitionIndex = 77101;

	class NapCameraSequenceDataTable : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCEDATATABLE__CTOR_OFFSET))(this);
		}
	};
}
