#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_562CFB3355018A26;

#define CLASS_1_0A57601A2887BDDF_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A4E090)
#define CLASS_1_0A57601A2887BDDF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16A4E0F0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_2_TypeDefinitionIndex = 33518;

class Class_1_0A57601A2887BDDF_2 : public ::System::Object
{
public:
	::Class_1_562CFB3355018A26* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_2_CLEAR_OFFSET))(this);
	}
};
