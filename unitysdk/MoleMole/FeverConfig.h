#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/MoleMole/Config/FeverSoundType.h"

namespace MoleMole::Config { class ConfigInspireZoneOperation; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FEVERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170BC3B0)

namespace MoleMole
{
	inline static constexpr unsigned int FeverConfig_TypeDefinitionIndex = 76222;

	class FeverConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::InspireZoneOperationType, ::MoleMole::Config::ConfigInspireZoneOperation*>* OperationDict; // 0x58
		::System::Collections::Generic::List_1<::System::Single>* FeverGradeList; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>* FeverSoundDict; // 0x68
		::System::Single SplitRatio; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
