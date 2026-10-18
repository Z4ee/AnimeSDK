#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6DE8726ADEF173A7;
namespace RPG::GameCore { class FiveDimSuiyangConfig; }

#define CLASS_1_8786E1AEB6F6868C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13490)

inline static constexpr unsigned int Class_1_8786E1AEB6F6868C_TypeDefinitionIndex = 43408;

class Class_1_8786E1AEB6F6868C : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimSuiyangConfig* EABKOHGCHFP; // 0x10
	::Class_1_6DE8726ADEF173A7* MEPFOEEGBEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8786E1AEB6F6868C__CTOR_OFFSET))(this);
	}
};
