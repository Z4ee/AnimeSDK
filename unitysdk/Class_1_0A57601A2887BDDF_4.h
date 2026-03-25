#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_451D2644CC36530F;

#define CLASS_1_0A57601A2887BDDF_4_CLEAR_OFFSET UNITYSDK_OFFSET(0x16762820)
#define CLASS_1_0A57601A2887BDDF_4__CTOR_OFFSET UNITYSDK_OFFSET(0x167628A0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_4_TypeDefinitionIndex = 33327;

class Class_1_0A57601A2887BDDF_4 : public ::System::Object
{
public:
	::Class_1_451D2644CC36530F* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_4_CLEAR_OFFSET))(this);
	}
};
