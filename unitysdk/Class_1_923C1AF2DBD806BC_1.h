#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_923C1AF2DBD806BC_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAF93370)

inline static constexpr unsigned int Class_1_923C1AF2DBD806BC_1_TypeDefinitionIndex = 53126;

class Class_1_923C1AF2DBD806BC_1 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::RPG::GameCore::FixPoint Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_923C1AF2DBD806BC_1__CTOR_OFFSET))(this);
	}
};
