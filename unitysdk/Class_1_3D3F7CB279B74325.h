#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8992A56A4F8BEC26;

#define CLASS_1_3D3F7CB279B74325_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA13420)
#define CLASS_1_3D3F7CB279B74325__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13480)

inline static constexpr unsigned int Class_1_3D3F7CB279B74325_TypeDefinitionIndex = 43336;

class Class_1_3D3F7CB279B74325 : public ::System::Object
{
public:
	::Class_1_8992A56A4F8BEC26* CIKPBGDIABO; // 0x10
	::System::Boolean PMCCPHLDMEE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D3F7CB279B74325__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D3F7CB279B74325_CLEAR_OFFSET))(this);
	}
};
