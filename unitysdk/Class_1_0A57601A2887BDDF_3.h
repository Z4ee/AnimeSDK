#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_088B9305470FC41F;

#define CLASS_1_0A57601A2887BDDF_3_CLEAR_OFFSET UNITYSDK_OFFSET(0x180DCD40)
#define CLASS_1_0A57601A2887BDDF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x180DCDA0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_3_TypeDefinitionIndex = 40731;

class Class_1_0A57601A2887BDDF_3 : public ::System::Object
{
public:
	::Class_1_088B9305470FC41F* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_3_CLEAR_OFFSET))(this);
	}
};
