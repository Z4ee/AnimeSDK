#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_E1B199B3D0FB256E_1;
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C5358D446CAAB1EC_METHOD_1_7F1648CEE616B7D1_OFFSET UNITYSDK_OFFSET(0xB2AA2F0)
#define CLASS_1_C5358D446CAAB1EC_METHOD_1_F2FA58D34A49C4E3_OFFSET UNITYSDK_OFFSET(0xB2AA2A0)
#define CLASS_1_C5358D446CAAB1EC_METHOD_1_F75EEFBF39397F44_OFFSET UNITYSDK_OFFSET(0xB2AAD30)

inline static constexpr unsigned int Class_1_C5358D446CAAB1EC_TypeDefinitionIndex = 63784;

class Class_1_C5358D446CAAB1EC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* Method_1_F2FA58D34A49C4E3(::Class_1_E1B199B3D0FB256E_1* a1, ::RPG::GameCore::GenderType a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::Class_1_E1B199B3D0FB256E_1*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_C5358D446CAAB1EC_METHOD_1_F2FA58D34A49C4E3_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* Method_1_F75EEFBF39397F44()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C5358D446CAAB1EC_METHOD_1_F75EEFBF39397F44_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* Method_1_7F1648CEE616B7D1(::Class_1_E1B199B3D0FB256E_1* a1, ::RPG::GameCore::GenderType a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::Class_1_E1B199B3D0FB256E_1*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_C5358D446CAAB1EC_METHOD_1_7F1648CEE616B7D1_OFFSET))(a1, a2);
	}
};
