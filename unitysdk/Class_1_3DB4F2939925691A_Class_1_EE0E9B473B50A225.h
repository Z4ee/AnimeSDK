#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraModuleConfigBase; }

#define CLASS_1_3DB4F2939925691A_CLASS_1_EE0E9B473B50A225_CLEAR_OFFSET UNITYSDK_OFFSET(0x165D9BB0)
#define CLASS_1_3DB4F2939925691A_CLASS_1_EE0E9B473B50A225__CTOR_OFFSET UNITYSDK_OFFSET(0x165D9C10)

inline static constexpr unsigned int Class_1_3DB4F2939925691A_Class_1_EE0E9B473B50A225_TypeDefinitionIndex = 69636;

class Class_1_3DB4F2939925691A_Class_1_EE0E9B473B50A225 : public ::System::Object
{
public:
	::RPG::Client::CameraModuleConfigBase* EABKOHGCHFP; // 0x10
	::System::Boolean IFMOPDPKAPE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DB4F2939925691A_CLASS_1_EE0E9B473B50A225__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DB4F2939925691A_CLASS_1_EE0E9B473B50A225_CLEAR_OFFSET))(this);
	}
};
