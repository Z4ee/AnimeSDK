#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F08A88160B0E2D6;
namespace RPG::GameCore { class FiveDimEntityVarConfig; }

#define CLASS_1_F61038BFC9CBCF4A_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EC5220)
#define CLASS_1_F61038BFC9CBCF4A__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC5280)

inline static constexpr unsigned int Class_1_F61038BFC9CBCF4A_TypeDefinitionIndex = 39164;

class Class_1_F61038BFC9CBCF4A : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimEntityVarConfig* Field_1_0; // 0x10
	::Class_1_5F08A88160B0E2D6* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61038BFC9CBCF4A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61038BFC9CBCF4A_CLEAR_OFFSET))(this);
	}
};
