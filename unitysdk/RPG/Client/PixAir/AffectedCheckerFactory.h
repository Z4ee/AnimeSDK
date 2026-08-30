#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class IAffectedChecker; }
namespace RPG::Client::PixAir { class PixAirEquipData; }
namespace RPG::Client::PixAir { class PixAirEquipInstance; }

#define RPG_CLIENT_PIXAIR_AFFECTEDCHECKERFACTORY_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1C82AD70)
#define RPG_CLIENT_PIXAIR_AFFECTEDCHECKERFACTORY_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1C82AED0)
#define RPG_CLIENT_PIXAIR_AFFECTEDCHECKERFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1C82AC30)
#define RPG_CLIENT_PIXAIR_AFFECTEDCHECKERFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C82B040)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int AffectedCheckerFactory_TypeDefinitionIndex = 78825;

	class AffectedCheckerFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::IAffectedChecker** StaticGet_s_defaultChecker()
		{
			return (::RPG::Client::PixAir::IAffectedChecker**)Il2CppClass::FromTypeDefinitionIndex(AffectedCheckerFactory_TypeDefinitionIndex)->GetStaticField(0x5E2C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_AFFECTEDCHECKERFACTORY__CCTOR_OFFSET))();
		}

		static ::RPG::Client::PixAir::IAffectedChecker* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::IAffectedChecker*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_AFFECTEDCHECKERFACTORY_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PixAir::IAffectedChecker* Create_1(::RPG::Client::PixAir::PixAirEquipData* a1)
		{
			return ((::RPG::Client::PixAir::IAffectedChecker*(*)(::RPG::Client::PixAir::PixAirEquipData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_AFFECTEDCHECKERFACTORY_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::PixAir::IAffectedChecker* Create_2(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::RPG::Client::PixAir::IAffectedChecker*(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_AFFECTEDCHECKERFACTORY_CREATE_2_OFFSET))(a1);
		}
	};
}
