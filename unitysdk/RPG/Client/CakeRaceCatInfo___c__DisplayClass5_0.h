#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceCatDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACECATINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AABF470)
#define RPG_CLIENT_CAKERACECATINFO___C__DISPLAYCLASS5_0__GETRANDOMCATDATAS_B__0_OFFSET UNITYSDK_OFFSET(0x1AABF480)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceCatInfo___c__DisplayClass5_0_TypeDefinitionIndex = 60237;

	class CakeRaceCatInfo___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* exclusiveCatIDList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRandomCatDatas_b__0(::RPG::Client::CakeRaceCatDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceCatDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO___C__DISPLAYCLASS5_0__GETRANDOMCATDATAS_B__0_OFFSET))(this, a1);
		}
	};
}
