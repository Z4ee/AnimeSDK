#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPG::GameCore { class AdventureCharacterFloatingConfig; }
namespace System { class String; }

#define CLASS_3_5BC81A09635C2756_METHOD_3_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x15AEA100)
#define CLASS_3_5BC81A09635C2756_METHOD_3_DD097FF280AB68FC_OFFSET UNITYSDK_OFFSET(0x15AEA040)
#define CLASS_3_5BC81A09635C2756__CTOR_OFFSET UNITYSDK_OFFSET(0x15AEA1A0)

inline static constexpr unsigned int Class_3_5BC81A09635C2756_TypeDefinitionIndex = 46177;

class Class_3_5BC81A09635C2756 : public ::RPGTools::Timeline::CustomEventBehaviour
{
public:
	::RPG::GameCore::AdventureCharacterFloatingConfig* Field_3_0; // 0x20
	::System::String* Field_3_1; // 0x28
	::System::String* Field_3_2; // 0x30
	::System::Boolean Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BC81A09635C2756__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AdventureCharacterFloatingConfig* Method_3_DD097FF280AB68FC()
	{
		return ((::RPG::GameCore::AdventureCharacterFloatingConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BC81A09635C2756_METHOD_3_DD097FF280AB68FC_OFFSET))(this);
	}

	::System::Void Method_3_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BC81A09635C2756_METHOD_3_06A2B758FCB8A24E_OFFSET))(this);
	}
};
