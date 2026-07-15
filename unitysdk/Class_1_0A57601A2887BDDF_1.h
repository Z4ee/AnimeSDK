#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DCC4A220F5A3F1EE;

#define CLASS_1_0A57601A2887BDDF_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AE44B50)
#define CLASS_1_0A57601A2887BDDF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE44BB0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_1_TypeDefinitionIndex = 40894;

class Class_1_0A57601A2887BDDF_1 : public ::System::Object
{
public:
	::Class_1_DCC4A220F5A3F1EE* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_1_CLEAR_OFFSET))(this);
	}
};
