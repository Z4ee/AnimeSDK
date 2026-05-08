#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_343;
class Class_1_5DA2E7556103D5A3_344;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UTILS_MONSTERCARDUTILS_GETCARDCOST_OFFSET UNITYSDK_OFFSET(0xE865CE0)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS_GETMONSTERGROUPBYCARD_OFFSET UNITYSDK_OFFSET(0xE8650A0)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS_ISVALIDCARD_OFFSET UNITYSDK_OFFSET(0xE865B60)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS_SORTMONSTERCARD_OFFSET UNITYSDK_OFFSET(0xE865140)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int MonsterCardUtils_TypeDefinitionIndex = 76341;

	class MonsterCardUtils : public ::System::Object
	{
	public:
		// static const ::System::String* DefaultMonsterCardGroupName; // 0x0

		static ::Class_1_5DA2E7556103D5A3_343* GetMonsterGroupByCard(::System::Int32 cardId)
		{
			return ((::Class_1_5DA2E7556103D5A3_343*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS_GETMONSTERGROUPBYCARD_OFFSET))(cardId);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* SortMonsterCard(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* cardList, ::System::Func_2<::System::Int32, ::Class_1_5DA2E7556103D5A3_343*>* getMonsterGroupByCardFunc)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Func_2<::System::Int32, ::Class_1_5DA2E7556103D5A3_343*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS_SORTMONSTERCARD_OFFSET))(cardList, getMonsterGroupByCardFunc);
		}

		static ::System::Boolean IsValidCard(::System::Int32 cardId)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS_ISVALIDCARD_OFFSET))(cardId);
		}

		static ::System::Int32 GetCardCost(::Class_1_5DA2E7556103D5A3_344* template_)
		{
			return ((::System::Int32(*)(::Class_1_5DA2E7556103D5A3_344*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS_GETCARDCOST_OFFSET))(template_);
		}
	};
}
