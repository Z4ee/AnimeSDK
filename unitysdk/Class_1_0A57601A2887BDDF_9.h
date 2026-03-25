#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8992A56A4F8BEC26;

#define CLASS_1_0A57601A2887BDDF_9_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A19A20)
#define CLASS_1_0A57601A2887BDDF_9__CTOR_OFFSET UNITYSDK_OFFSET(0x16A19A80)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_9_TypeDefinitionIndex = 33369;

class Class_1_0A57601A2887BDDF_9 : public ::System::Object
{
public:
	::Class_1_8992A56A4F8BEC26* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_9__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_9_CLEAR_OFFSET))(this);
	}
};
