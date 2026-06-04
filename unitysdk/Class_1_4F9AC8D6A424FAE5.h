#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1202;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraAbilityProgressBase; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_4F9AC8D6A424FAE5_METHOD_1_028B629D6AAAC442_OFFSET UNITYSDK_OFFSET(0x136A3D10)
#define CLASS_1_4F9AC8D6A424FAE5_METHOD_1_99B96CB7F9BE0D86_OFFSET UNITYSDK_OFFSET(0x136A37A0)
#define CLASS_1_4F9AC8D6A424FAE5_METHOD_1_CCD428AB5E4DD313_OFFSET UNITYSDK_OFFSET(0x136A3850)

inline static constexpr unsigned int Class_1_4F9AC8D6A424FAE5_TypeDefinitionIndex = 72913;

class Class_1_4F9AC8D6A424FAE5 : public ::System::Object
{
public:
	static ::RPG::Client::Promises::IPromise* Method_1_99B96CB7F9BE0D86(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4, ::System::Action* a5)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4F9AC8D6A424FAE5_METHOD_1_99B96CB7F9BE0D86_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::Promises::IPromise* Method_1_CCD428AB5E4DD313(::RPG::GameCore::ChimeraAbilityProgressBase* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4, ::System::Action* a5)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::RPG::GameCore::ChimeraAbilityProgressBase*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4F9AC8D6A424FAE5_METHOD_1_CCD428AB5E4DD313_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_0_16E4307DCC419505_1202* Method_1_028B629D6AAAC442(::RPG::GameCore::ChimeraAbilityProgressBase* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
	{
		return ((::Class_0_16E4307DCC419505_1202*(*)(::RPG::GameCore::ChimeraAbilityProgressBase*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_4F9AC8D6A424FAE5_METHOD_1_028B629D6AAAC442_OFFSET))(a1, a2, a3, a4);
	}
};
