#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F88B28E90BD371ED;

#define CLASS_1_0A57601A2887BDDF_CLEAR_OFFSET UNITYSDK_OFFSET(0x180DC5E0)
#define CLASS_1_0A57601A2887BDDF__CTOR_OFFSET UNITYSDK_OFFSET(0x180DC640)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_TypeDefinitionIndex = 40776;

class Class_1_0A57601A2887BDDF : public ::System::Object
{
public:
	::Class_1_F88B28E90BD371ED* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_CLEAR_OFFSET))(this);
	}
};
