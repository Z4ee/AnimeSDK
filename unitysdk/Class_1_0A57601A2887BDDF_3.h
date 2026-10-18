#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_09AFF3E21D08A4EE;

#define CLASS_1_0A57601A2887BDDF_3_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C966FF0)
#define CLASS_1_0A57601A2887BDDF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C967070)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_3_TypeDefinitionIndex = 43290;

class Class_1_0A57601A2887BDDF_3 : public ::System::Object
{
public:
	::Class_1_09AFF3E21D08A4EE* CNLHCKELLBE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_3_CLEAR_OFFSET))(this);
	}
};
