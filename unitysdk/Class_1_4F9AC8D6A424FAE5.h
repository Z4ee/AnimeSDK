#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1146;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraAbilityProgressBase; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_4F9AC8D6A424FAE5_METHOD_1_99B96CB7F9BE0D86_OFFSET UNITYSDK_OFFSET(0x9740740)
#define CLASS_1_4F9AC8D6A424FAE5_METHOD_1_BFEF2987E7DDF0F8_OFFSET UNITYSDK_OFFSET(0x97407F0)
#define CLASS_1_4F9AC8D6A424FAE5_METHOD_1_D65DA36225847743_OFFSET UNITYSDK_OFFSET(0x9740C80)

inline static constexpr unsigned int Class_1_4F9AC8D6A424FAE5_TypeDefinitionIndex = 71891;

class Class_1_4F9AC8D6A424FAE5 : public ::System::Object
{
public:
	static ::RPG::Client::Promises::IPromise* Method_1_99B96CB7F9BE0D86(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4, ::System::Action* a5)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4F9AC8D6A424FAE5_METHOD_1_99B96CB7F9BE0D86_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::Promises::IPromise* Method_1_BFEF2987E7DDF0F8(::RPG::GameCore::ChimeraAbilityProgressBase* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4, ::System::Action* a5)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::RPG::GameCore::ChimeraAbilityProgressBase*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4F9AC8D6A424FAE5_METHOD_1_BFEF2987E7DDF0F8_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_0_16E4307DCC419505_1146* Method_1_D65DA36225847743(::RPG::GameCore::ChimeraAbilityProgressBase* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
	{
		return ((::Class_0_16E4307DCC419505_1146*(*)(::RPG::GameCore::ChimeraAbilityProgressBase*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_4F9AC8D6A424FAE5_METHOD_1_D65DA36225847743_OFFSET))(a1, a2, a3, a4);
	}
};
