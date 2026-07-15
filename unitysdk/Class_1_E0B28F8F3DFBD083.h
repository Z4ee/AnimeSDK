#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BCDC191CF05491FA;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define CLASS_1_E0B28F8F3DFBD083__CTOR_OFFSET UNITYSDK_OFFSET(0x17C9F830)

inline static constexpr unsigned int Class_1_E0B28F8F3DFBD083_TypeDefinitionIndex = 52875;

class Class_1_E0B28F8F3DFBD083 : public ::System::Object
{
public:
	::Class_1_BCDC191CF05491FA* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0B28F8F3DFBD083__CTOR_OFFSET))(this);
	}
};
