#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_9481342303901AA1_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1BE918F0)
#define CLASS_3_9481342303901AA1_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1BE91930)
#define CLASS_3_9481342303901AA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE91920)

inline static constexpr unsigned int Class_3_9481342303901AA1_TypeDefinitionIndex = 20680;

class Class_3_9481342303901AA1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::System::UInt32 Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9481342303901AA1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9481342303901AA1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9481342303901AA1*&))((::PBYTE)hIl2Cpp + CLASS_3_9481342303901AA1_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9481342303901AA1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9481342303901AA1*))((::PBYTE)hIl2Cpp + CLASS_3_9481342303901AA1_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
