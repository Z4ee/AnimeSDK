#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

class Class_1_38CD02622A43811A;

#define CLASS_1_9DB6F6BB628BF86A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C3C9470)
#define CLASS_1_9DB6F6BB628BF86A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C94D0)

inline static constexpr unsigned int Class_1_9DB6F6BB628BF86A_TypeDefinitionIndex = 41429;

class Class_1_9DB6F6BB628BF86A : public ::System::Object
{
public:
	::Class_1_38CD02622A43811A* IHGFNHHFFPM; // 0x10
	::Class_1_38CD02622A43811A* OCCGAEOOMCL; // 0x18
	::RPG::MVector2 ACGINICEHML; // 0x20
	::System::Int32 LINGKAJDNCH; // 0x28
	::System::Single MMGHPIFEBJF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DB6F6BB628BF86A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DB6F6BB628BF86A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
