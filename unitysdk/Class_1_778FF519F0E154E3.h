#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_269711125C25EF66;
namespace RPG::GameCore { class ChessSkillConfig; }
namespace System { class String; }

#define CLASS_1_778FF519F0E154E3__CTOR_OFFSET UNITYSDK_OFFSET(0x10B16510)

inline static constexpr unsigned int Class_1_778FF519F0E154E3_TypeDefinitionIndex = 45246;

class Class_1_778FF519F0E154E3 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_2_269711125C25EF66* Field_1_3; // 0x18
	::RPG::GameCore::ChessSkillConfig* Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_778FF519F0E154E3__CTOR_OFFSET))(this);
	}
};
