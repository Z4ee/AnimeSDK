#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F88B28E90BD371ED;

#define CLASS_1_0A57601A2887BDDF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BAAF190)
#define CLASS_1_0A57601A2887BDDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAF1F0)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_TypeDefinitionIndex = 41730;

class Class_1_0A57601A2887BDDF : public ::System::Object
{
public:
	::Class_1_F88B28E90BD371ED* GJBOKLDCKEG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_CLEAR_OFFSET))(this);
	}
};
