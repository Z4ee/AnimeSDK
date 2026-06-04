#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournHexData; }
namespace RPG::GameCore { class RogueTournHexRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNHEXDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC821B90)
#define RPG_CLIENT_ROGUETOURNHEXDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC821BD0)
#define RPG_CLIENT_ROGUETOURNHEXDATA___C__GETALLDATAS_B__41_0_OFFSET UNITYSDK_OFFSET(0xC821BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHexData___c_TypeDefinitionIndex = 63307;

	class RogueTournHexData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::RogueTournHexRow*, ::RPG::Client::RogueTournHexData*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::GameCore::RogueTournHexRow*, ::RPG::Client::RogueTournHexData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexData___c_TypeDefinitionIndex)->GetStaticField(0x3D940);
		}
		static ::RPG::Client::RogueTournHexData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournHexData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexData___c_TypeDefinitionIndex)->GetStaticField(0x3D948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournHexData* _GetAllDatas_b__41_0(::RPG::GameCore::RogueTournHexRow* a1)
		{
			return ((::RPG::Client::RogueTournHexData*(*)(::PVOID, ::RPG::GameCore::RogueTournHexRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA___C__GETALLDATAS_B__41_0_OFFSET))(this, a1);
		}
	};
}
