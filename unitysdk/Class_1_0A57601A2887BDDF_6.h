#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C5A7FFA83DA2ECD6;

#define CLASS_1_0A57601A2887BDDF_6_CLEAR_OFFSET UNITYSDK_OFFSET(0x18035190)
#define CLASS_1_0A57601A2887BDDF_6__CTOR_OFFSET UNITYSDK_OFFSET(0x180351F0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_6_TypeDefinitionIndex = 39150;

class Class_1_0A57601A2887BDDF_6 : public ::System::Object
{
public:
	::Class_1_C5A7FFA83DA2ECD6* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_6_CLEAR_OFFSET))(this);
	}
};
