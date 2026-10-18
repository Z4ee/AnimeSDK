#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F7DEA1B9C573501;

#define CLASS_1_0A57601A2887BDDF_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C92A7E0)
#define CLASS_1_0A57601A2887BDDF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C92A840)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_1_TypeDefinitionIndex = 43502;

class Class_1_0A57601A2887BDDF_1 : public ::System::Object
{
public:
	::Class_1_1F7DEA1B9C573501* BPAPBAFOMCH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_1_CLEAR_OFFSET))(this);
	}
};
