#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_METHOD_3_1174D4B1EF443029_OFFSET UNITYSDK_OFFSET(0x17044710)
#define RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_METHOD_3_F989A063CF5F633A_OFFSET UNITYSDK_OFFSET(0x17046630)
#define RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT__CTOR_OFFSET UNITYSDK_OFFSET(0x170446F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionFieldTransportLastCat_TypeDefinitionIndex = 16838;

	class CakeRaceActionFieldTransportLastCat : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 TriggerOnMaxCatDistanceZ; // 0x10
		::System::UInt32 TransportZ; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F989A063CF5F633A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_METHOD_3_F989A063CF5F633A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1174D4B1EF443029(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONFIELDTRANSPORTLASTCAT_METHOD_3_1174D4B1EF443029_OFFSET))(a1, a2);
		}
	};
}
