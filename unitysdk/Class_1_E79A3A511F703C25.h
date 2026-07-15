#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingFesBuff; }
namespace System { class String; }

#define CLASS_1_E79A3A511F703C25__CTOR_OFFSET UNITYSDK_OFFSET(0x177DCC90)

inline static constexpr unsigned int Class_1_E79A3A511F703C25_TypeDefinitionIndex = 73755;

class Class_1_E79A3A511F703C25 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::ChenLingFesBuff* Field_1_1; // 0x18
	::Il2CppArray<::System::Single>* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor(::RPG::GameCore::ChenLingFesBuff* a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_E79A3A511F703C25__CTOR_OFFSET))(this, a1, a2);
	}
};
