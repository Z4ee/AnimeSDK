#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_451D2644CC36530F;

#define CLASS_1_0A57601A2887BDDF_3_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EDD440)
#define CLASS_1_0A57601A2887BDDF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17EDD4C0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_3_TypeDefinitionIndex = 39116;

class Class_1_0A57601A2887BDDF_3 : public ::System::Object
{
public:
	::Class_1_451D2644CC36530F* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_3_CLEAR_OFFSET))(this);
	}
};
