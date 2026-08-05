#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGFLOWCANVASLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF13AC10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFlowCanvasLevelData_TypeDefinitionIndex = 41382;

	class ConfigFlowCanvasLevelData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* m_monsterIDList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* m_monsterID2CountMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWCANVASLEVELDATA__CTOR_OFFSET))(this);
		}
	};
}
