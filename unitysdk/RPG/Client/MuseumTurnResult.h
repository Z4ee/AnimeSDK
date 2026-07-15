#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumPropertyData; }

#define RPG_CLIENT_MUSEUMTURNRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x190A6560)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumTurnResult_TypeDefinitionIndex = 63395;

	class MuseumTurnResult : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AreasRenewPoints; // 0x10
		::RPG::Client::MuseumPropertyData* ResultPropertyData; // 0x18
		::Il2CppArray<::System::UInt32>* AreasFunds; // 0x20
		::System::UInt32 Level; // 0x28
		::System::UInt32 BuffFunds; // 0x2C
		::System::UInt32 TotalFunds; // 0x30
		::System::UInt32 TotalAreaFunds; // 0x34
		::System::UInt32 ExhibitSkillFunds; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTURNRESULT__CTOR_OFFSET))(this);
		}
	};
}
