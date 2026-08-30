#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8992A56A4F8BEC26;

#define CLASS_1_0A57601A2887BDDF_7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C505E10)
#define CLASS_1_0A57601A2887BDDF_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C505E70)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_7_TypeDefinitionIndex = 41694;

class Class_1_0A57601A2887BDDF_7 : public ::System::Object
{
public:
	::Class_1_8992A56A4F8BEC26* CIKPBGDIABO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_7_CLEAR_OFFSET))(this);
	}
};
