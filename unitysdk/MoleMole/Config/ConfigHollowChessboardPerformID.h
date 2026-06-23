#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPERFORMID__CTOR_OFFSET UNITYSDK_OFFSET(0x1929DA20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardPerformID_TypeDefinitionIndex = 63210;

	class ConfigHollowChessboardPerformID : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* GridEventIdRandomConfirmSet; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPERFORMID__CTOR_OFFSET))(this);
		}
	};
}
