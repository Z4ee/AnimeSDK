#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_980894BED8163CEE_METHOD_1_239127A8B01A1A3F_OFFSET UNITYSDK_OFFSET(0x1CA79C20)
#define CLASS_1_980894BED8163CEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA79D20)

inline static constexpr unsigned int Class_1_980894BED8163CEE_TypeDefinitionIndex = 15235;

class Class_1_980894BED8163CEE : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType FODBMMCKAEN; // 0x10
	::System::UInt32 EAFFHGKLALP; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_980894BED8163CEE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_239127A8B01A1A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_980894BED8163CEE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_980894BED8163CEE*&))((::PBYTE)hIl2Cpp + CLASS_1_980894BED8163CEE_METHOD_1_239127A8B01A1A3F_OFFSET))(a1, a2);
	}
};
