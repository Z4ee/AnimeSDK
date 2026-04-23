#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_068CB340B20E1A9A;

#define CLASS_1_0A57601A2887BDDF_7_CLEAR_OFFSET UNITYSDK_OFFSET(0x18058490)
#define CLASS_1_0A57601A2887BDDF_7__CTOR_OFFSET UNITYSDK_OFFSET(0x180584F0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_7_TypeDefinitionIndex = 39133;

class Class_1_0A57601A2887BDDF_7 : public ::System::Object
{
public:
	::Class_1_068CB340B20E1A9A* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_7_CLEAR_OFFSET))(this);
	}
};
