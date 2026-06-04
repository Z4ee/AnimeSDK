#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_068CB340B20E1A9A;

#define CLASS_1_0A57601A2887BDDF_3_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C79000)
#define CLASS_1_0A57601A2887BDDF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18C79060)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_3_TypeDefinitionIndex = 39902;

class Class_1_0A57601A2887BDDF_3 : public ::System::Object
{
public:
	::Class_1_068CB340B20E1A9A* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_3_CLEAR_OFFSET))(this);
	}
};
