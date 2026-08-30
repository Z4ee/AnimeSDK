#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6DE8726ADEF173A7_1;
namespace RPG::GameCore { class FiveDimSuiyangConfig; }

#define CLASS_1_8786E1AEB6F6868C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A3180)

inline static constexpr unsigned int Class_1_8786E1AEB6F6868C_TypeDefinitionIndex = 41766;

class Class_1_8786E1AEB6F6868C : public ::System::Object
{
public:
	::Class_1_6DE8726ADEF173A7_1* MEPFOEEGBEA; // 0x10
	::RPG::GameCore::FiveDimSuiyangConfig* EABKOHGCHFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8786E1AEB6F6868C__CTOR_OFFSET))(this);
	}
};
