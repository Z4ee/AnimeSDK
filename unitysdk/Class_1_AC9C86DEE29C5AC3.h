#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_35;
namespace RPG::GameCore { class FiveDimWindowControllerComponentConfig; }

#define CLASS_1_AC9C86DEE29C5AC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA14110)

inline static constexpr unsigned int Class_1_AC9C86DEE29C5AC3_TypeDefinitionIndex = 43571;

class Class_1_AC9C86DEE29C5AC3 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimWindowControllerComponentConfig* EABKOHGCHFP; // 0x10
	::Class_1_43BD383C98B4C0C5_35* MEPFOEEGBEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9C86DEE29C5AC3__CTOR_OFFSET))(this);
	}
};
