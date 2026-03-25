#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_980894BED8163CEE_METHOD_1_239127A8B01A1A3F_OFFSET UNITYSDK_OFFSET(0x16B7FE80)
#define CLASS_1_980894BED8163CEE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7FF80)

inline static constexpr unsigned int Class_1_980894BED8163CEE_TypeDefinitionIndex = 14150;

class Class_1_980894BED8163CEE : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::RPG::GameCore::AvatarPropertyType Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_980894BED8163CEE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_239127A8B01A1A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_980894BED8163CEE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_980894BED8163CEE*&))((::PBYTE)hIl2Cpp + CLASS_1_980894BED8163CEE_METHOD_1_239127A8B01A1A3F_OFFSET))(a1, a2);
	}
};
