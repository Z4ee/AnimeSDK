#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D40D0068F1C59DD9_METHOD_1_14E1525B04DB30D5_OFFSET UNITYSDK_OFFSET(0xC4815B0)
#define CLASS_1_D40D0068F1C59DD9__CTOR_OFFSET UNITYSDK_OFFSET(0xC481670)

inline static constexpr unsigned int Class_1_D40D0068F1C59DD9_TypeDefinitionIndex = 62737;

class Class_1_D40D0068F1C59DD9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40D0068F1C59DD9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GenderType Method_1_14E1525B04DB30D5()
	{
		return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40D0068F1C59DD9_METHOD_1_14E1525B04DB30D5_OFFSET))(this);
	}
};
