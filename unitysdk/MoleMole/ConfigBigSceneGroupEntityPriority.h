#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGBIGSCENEGROUPENTITYPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF7C80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBigSceneGroupEntityPriority_TypeDefinitionIndex = 67116;

	class ConfigBigSceneGroupEntityPriority : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GroupEntityPriority; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBIGSCENEGROUPENTITYPRIORITY__CTOR_OFFSET))(this);
		}
	};
}
