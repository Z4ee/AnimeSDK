#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_A57EDD0666353753;
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EEA8E039636195EB_METHOD_1_8AD62F814406EFC1_OFFSET UNITYSDK_OFFSET(0x15E0B550)
#define CLASS_1_EEA8E039636195EB_METHOD_1_BFBAA02198D6DD08_OFFSET UNITYSDK_OFFSET(0x15E0B5A0)
#define CLASS_1_EEA8E039636195EB_METHOD_1_F75EEFBF39397F44_OFFSET UNITYSDK_OFFSET(0x15E0C380)

inline static constexpr unsigned int Class_1_EEA8E039636195EB_TypeDefinitionIndex = 68160;

class Class_1_EEA8E039636195EB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* Method_1_8AD62F814406EFC1(::Class_1_A57EDD0666353753* a1, ::RPG::GameCore::GenderType a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::Class_1_A57EDD0666353753*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_EEA8E039636195EB_METHOD_1_8AD62F814406EFC1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* Method_1_F75EEFBF39397F44()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EEA8E039636195EB_METHOD_1_F75EEFBF39397F44_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* Method_1_BFBAA02198D6DD08(::Class_1_A57EDD0666353753* a1, ::RPG::GameCore::GenderType a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::Class_1_A57EDD0666353753*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_EEA8E039636195EB_METHOD_1_BFBAA02198D6DD08_OFFSET))(a1, a2);
	}
};
