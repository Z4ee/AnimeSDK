#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateBuffSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_7A3F716CC3D7325F_METHOD_1_9A97CC9BA4751B18_OFFSET UNITYSDK_OFFSET(0x1B5C1FD0)
#define CLASS_1_7A3F716CC3D7325F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C21C0)

inline static constexpr unsigned int Class_1_7A3F716CC3D7325F_TypeDefinitionIndex = 11104;

class Class_1_7A3F716CC3D7325F : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::RPG::GameCore::FateBuffSlotType Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A3F716CC3D7325F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_9A97CC9BA4751B18(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_7A3F716CC3D7325F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_7A3F716CC3D7325F*&))((::PBYTE)hIl2Cpp + CLASS_1_7A3F716CC3D7325F_METHOD_1_9A97CC9BA4751B18_OFFSET))(a1, a2);
	}
};
