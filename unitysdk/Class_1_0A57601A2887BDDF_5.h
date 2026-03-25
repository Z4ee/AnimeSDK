#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_068CB340B20E1A9A;

#define CLASS_1_0A57601A2887BDDF_5_CLEAR_OFFSET UNITYSDK_OFFSET(0x16897170)
#define CLASS_1_0A57601A2887BDDF_5__CTOR_OFFSET UNITYSDK_OFFSET(0x168971D0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_5_TypeDefinitionIndex = 33344;

class Class_1_0A57601A2887BDDF_5 : public ::System::Object
{
public:
	::Class_1_068CB340B20E1A9A* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_5_CLEAR_OFFSET))(this);
	}
};
