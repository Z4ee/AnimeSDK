#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_33;
namespace RPG::GameCore { class FiveDimWindowControllerComponentConfig; }

#define CLASS_1_AC9C86DEE29C5AC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A3EB0)

inline static constexpr unsigned int Class_1_AC9C86DEE29C5AC3_TypeDefinitionIndex = 41929;

class Class_1_AC9C86DEE29C5AC3 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_33* MEPFOEEGBEA; // 0x10
	::RPG::GameCore::FiveDimWindowControllerComponentConfig* EABKOHGCHFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9C86DEE29C5AC3__CTOR_OFFSET))(this);
	}
};
