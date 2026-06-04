#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_923C1AF2DBD806BC__CTOR_OFFSET UNITYSDK_OFFSET(0x13C93950)

inline static constexpr unsigned int Class_1_923C1AF2DBD806BC_TypeDefinitionIndex = 53799;

class Class_1_923C1AF2DBD806BC : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::RPG::GameCore::FixPoint Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_923C1AF2DBD806BC__CTOR_OFFSET))(this);
	}
};
