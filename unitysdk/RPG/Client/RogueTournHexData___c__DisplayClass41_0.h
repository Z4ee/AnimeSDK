#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournHexData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ROGUETOURNHEXDATA___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C34A60)
#define RPG_CLIENT_ROGUETOURNHEXDATA___C__DISPLAYCLASS41_0__GETALLDATAS_B__1_OFFSET UNITYSDK_OFFSET(0x19C35060)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHexData___c__DisplayClass41_0_TypeDefinitionIndex = 64675;

	class RogueTournHexData___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::Client::RogueTournHexData*>* predicate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllDatas_b__1(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA___C__DISPLAYCLASS41_0__GETALLDATAS_B__1_OFFSET))(this, a1);
		}
	};
}
