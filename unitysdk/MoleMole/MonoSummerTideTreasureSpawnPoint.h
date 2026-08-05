#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_64E681E70DA96DB7.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT_METHOD_5_91CA09932B2C6D27_1_OFFSET UNITYSDK_OFFSET(0x14A13910)
#define MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT_METHOD_5_91CA09932B2C6D27_OFFSET UNITYSDK_OFFSET(0x14A138B0)
#define MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x14A13800)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSummerTideTreasureSpawnPoint_TypeDefinitionIndex = 85349;

	class MonoSummerTideTreasureSpawnPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_64E681E70DA96DB7 BornType; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* ContainMonsters; // 0x20
		::System::Int32 ContainAreaID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerable* Method_5_91CA09932B2C6D27()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT_METHOD_5_91CA09932B2C6D27_OFFSET))();
		}

		static ::System::Collections::IEnumerable* Method_5_91CA09932B2C6D27_1()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT_METHOD_5_91CA09932B2C6D27_1_OFFSET))();
		}
	};
}
