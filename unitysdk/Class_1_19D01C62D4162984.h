#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define CLASS_1_19D01C62D4162984_METHOD_1_ED0DB36404E5A689_OFFSET UNITYSDK_OFFSET(0x99DC910)
#define CLASS_1_19D01C62D4162984__CTOR_OFFSET UNITYSDK_OFFSET(0x99DC9C0)

inline static constexpr unsigned int Class_1_19D01C62D4162984_TypeDefinitionIndex = 44530;

class Class_1_19D01C62D4162984 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19D01C62D4162984__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_ED0DB36404E5A689(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_19D01C62D4162984_METHOD_1_ED0DB36404E5A689_OFFSET))(this, a1);
	}
};
