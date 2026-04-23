#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournHexData; }
namespace RPG::GameCore { class RogueTournHexRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNHEXDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0D15D0)
#define RPG_CLIENT_ROGUETOURNHEXDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D1610)
#define RPG_CLIENT_ROGUETOURNHEXDATA___C__GETALLDATAS_B__41_0_OFFSET UNITYSDK_OFFSET(0xB0D1620)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHexData___c_TypeDefinitionIndex = 62374;

	class RogueTournHexData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::RogueTournHexRow*, ::RPG::Client::RogueTournHexData*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::GameCore::RogueTournHexRow*, ::RPG::Client::RogueTournHexData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexData___c_TypeDefinitionIndex)->GetStaticField(0x1A0B0);
		}
		static ::RPG::Client::RogueTournHexData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournHexData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexData___c_TypeDefinitionIndex)->GetStaticField(0x1A0B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournHexData* _GetAllDatas_b__41_0(::RPG::GameCore::RogueTournHexRow* row)
		{
			return ((::RPG::Client::RogueTournHexData*(*)(::PVOID, ::RPG::GameCore::RogueTournHexRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA___C__GETALLDATAS_B__41_0_OFFSET))(this, row);
		}
	};
}
