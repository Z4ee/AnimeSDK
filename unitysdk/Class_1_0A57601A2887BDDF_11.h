#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8992A56A4F8BEC26;

#define CLASS_1_0A57601A2887BDDF_11_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EF95A0)
#define CLASS_1_0A57601A2887BDDF_11__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF9600)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_11_TypeDefinitionIndex = 39160;

class Class_1_0A57601A2887BDDF_11 : public ::System::Object
{
public:
	::Class_1_8992A56A4F8BEC26* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_11__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_11_CLEAR_OFFSET))(this);
	}
};
