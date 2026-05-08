#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class PerformConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_INITCHARACTERPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x13838C00)

namespace MoleMole
{
	inline static constexpr unsigned int InitCharacterPerform_TypeDefinitionIndex = 56034;

	class InitCharacterPerform : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>* performConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INITCHARACTERPERFORM__CTOR_OFFSET))(this);
		}
	};
}
