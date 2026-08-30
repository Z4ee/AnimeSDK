#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_METHOD_3_1174D4B1EF443029_OFFSET UNITYSDK_OFFSET(0x1CF6EC70)
#define RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_METHOD_3_70436C3DA3EF5BDA_OFFSET UNITYSDK_OFFSET(0x1CF6EC30)
#define RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF6EC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionFieldTransportLastCat_TypeDefinitionIndex = 18126;

	class CakeRaceActionFieldTransportLastCat : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 TriggerOnMaxCatDistanceZ; // 0x10
		::System::UInt32 TransportZ; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70436C3DA3EF5BDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_METHOD_3_70436C3DA3EF5BDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1174D4B1EF443029(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_METHOD_3_1174D4B1EF443029_OFFSET))(a1, a2);
		}
	};
}
