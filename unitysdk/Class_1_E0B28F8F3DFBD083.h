#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BCDC191CF05491FA;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define CLASS_1_E0B28F8F3DFBD083__CTOR_OFFSET UNITYSDK_OFFSET(0x18F72A30)

inline static constexpr unsigned int Class_1_E0B28F8F3DFBD083_TypeDefinitionIndex = 55578;

class Class_1_E0B28F8F3DFBD083 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* NGBAPOEDIOJ; // 0x10
	::System::String* BOGKOCFEIBL; // 0x18
	::System::String* JCCECKDNGKH; // 0x20
	::System::String* MPKMGIEAFCO; // 0x28
	::Class_1_BCDC191CF05491FA* MIPCILCJBMP; // 0x30
	::System::Boolean KLOCJMNLBOP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0B28F8F3DFBD083__CTOR_OFFSET))(this);
	}
};
