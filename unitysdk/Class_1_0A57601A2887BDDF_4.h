#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2456165B3B01051F;

#define CLASS_1_0A57601A2887BDDF_4_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9951A0)
#define CLASS_1_0A57601A2887BDDF_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C995200)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_4_TypeDefinitionIndex = 43308;

class Class_1_0A57601A2887BDDF_4 : public ::System::Object
{
public:
	::Class_1_2456165B3B01051F* DOGJABNGIJK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_4_CLEAR_OFFSET))(this);
	}
};
