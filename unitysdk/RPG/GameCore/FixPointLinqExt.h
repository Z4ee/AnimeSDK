#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_GAMECORE_FIXPOINTLINQEXT_AVERAGEFP_1_OFFSET UNITYSDK_OFFSET(0x179D6090)
#define RPG_GAMECORE_FIXPOINTLINQEXT_AVERAGEFP_OFFSET UNITYSDK_OFFSET(0x179D5BD0)
#define RPG_GAMECORE_FIXPOINTLINQEXT_SUMFP_1_OFFSET UNITYSDK_OFFSET(0x179D5830)
#define RPG_GAMECORE_FIXPOINTLINQEXT_SUMFP_OFFSET UNITYSDK_OFFSET(0x179D54C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixPointLinqExt_TypeDefinitionIndex = 9396;

	class FixPointLinqExt : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint SumFp(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* source)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTLINQEXT_SUMFP_OFFSET))(source);
		}

		static ::RPG::GameCore::FixPoint SumFp_1(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>* source)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTLINQEXT_SUMFP_1_OFFSET))(source);
		}

		static ::RPG::GameCore::FixPoint AverageFp(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* source)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTLINQEXT_AVERAGEFP_OFFSET))(source);
		}

		static ::System::Nullable_1<::RPG::GameCore::FixPoint> AverageFp_1(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>* source)
		{
			return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTLINQEXT_AVERAGEFP_1_OFFSET))(source);
		}
	};
}
