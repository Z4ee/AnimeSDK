#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_09AFF3E21D08A4EE;

#define CLASS_1_0A57601A2887BDDF_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C79120)
#define CLASS_1_0A57601A2887BDDF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18C791A0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_1_TypeDefinitionIndex = 39885;

class Class_1_0A57601A2887BDDF_1 : public ::System::Object
{
public:
	::Class_1_09AFF3E21D08A4EE* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_1_CLEAR_OFFSET))(this);
	}
};
