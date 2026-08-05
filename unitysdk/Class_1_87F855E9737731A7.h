#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SceneObjectType.h"
#include "unitysdk/System/Object.h"

class Class_2_99753BCBD4BECE1D;
class MainCityObjectState_ScriptConfig;

#define CLASS_1_87F855E9737731A7_METHOD_1_1F4BF1DF3103D521_OFFSET UNITYSDK_OFFSET(0xE974190)
#define CLASS_1_87F855E9737731A7__CTOR_OFFSET UNITYSDK_OFFSET(0xE974180)

inline static constexpr unsigned int Class_1_87F855E9737731A7_TypeDefinitionIndex = 53341;

class Class_1_87F855E9737731A7 : public ::System::Object
{
public:
	::Class_2_99753BCBD4BECE1D* Field_1_0; // 0x10
	::MainCityObjectState_ScriptConfig* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87F855E9737731A7__CTOR_OFFSET))(this);
	}

	::SceneObjectType Method_1_1F4BF1DF3103D521()
	{
		return ((::SceneObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87F855E9737731A7_METHOD_1_1F4BF1DF3103D521_OFFSET))(this);
	}
};
