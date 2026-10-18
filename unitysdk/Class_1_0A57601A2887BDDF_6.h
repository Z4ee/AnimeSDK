#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9B436617F93D1E3D;

#define CLASS_1_0A57601A2887BDDF_6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA336E0)
#define CLASS_1_0A57601A2887BDDF_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA33740)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_6_TypeDefinitionIndex = 43338;

class Class_1_0A57601A2887BDDF_6 : public ::System::Object
{
public:
	::Class_1_9B436617F93D1E3D* PNPCFAJNGLH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_6_CLEAR_OFFSET))(this);
	}
};
