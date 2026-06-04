#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPG::GameCore { class AdventureCharacterFloatingConfig; }
namespace System { class String; }

#define CLASS_3_5BC81A09635C2756_METHOD_3_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x14248B10)
#define CLASS_3_5BC81A09635C2756_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14248BC0)
#define CLASS_3_5BC81A09635C2756_METHOD_3_DD097FF280AB68FC_OFFSET UNITYSDK_OFFSET(0x14248A50)
#define CLASS_3_5BC81A09635C2756__CTOR_OFFSET UNITYSDK_OFFSET(0x14248BB0)

inline static constexpr unsigned int Class_3_5BC81A09635C2756_TypeDefinitionIndex = 45253;

class Class_3_5BC81A09635C2756 : public ::RPGTools::Timeline::CustomEventBehaviour
{
public:
	::System::String* Field_3_0; // 0x20
	::System::String* Field_3_1; // 0x28
	::RPG::GameCore::AdventureCharacterFloatingConfig* Field_3_2; // 0x30
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

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BC81A09635C2756_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
