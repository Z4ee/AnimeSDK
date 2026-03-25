#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F08A88160B0E2D6;
namespace RPG::GameCore { class FiveDimEntityVarConfig; }

#define CLASS_1_F61038BFC9CBCF4A_CLEAR_OFFSET UNITYSDK_OFFSET(0x16775870)
#define CLASS_1_F61038BFC9CBCF4A__CTOR_OFFSET UNITYSDK_OFFSET(0x167758D0)

inline static constexpr unsigned int Class_1_F61038BFC9CBCF4A_TypeDefinitionIndex = 33373;

class Class_1_F61038BFC9CBCF4A : public ::System::Object
{
public:
	::Class_1_5F08A88160B0E2D6* Field_1_1; // 0x10
	::RPG::GameCore::FiveDimEntityVarConfig* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61038BFC9CBCF4A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61038BFC9CBCF4A_CLEAR_OFFSET))(this);
	}
};
