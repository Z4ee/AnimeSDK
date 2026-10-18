#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_923C1AF2DBD806BC_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC2EC690)

inline static constexpr unsigned int Class_1_923C1AF2DBD806BC_1_TypeDefinitionIndex = 56892;

class Class_1_923C1AF2DBD806BC_1 : public ::System::Object
{
public:
	::System::UInt32 BJDONEJOCGM; // 0x10
	::System::UInt32 MHBKJFOCPFA; // 0x14
	::RPG::GameCore::FixPoint EJOAPDDPFLJ; // 0x18
	::RPG::GameCore::FixPoint KHINDEAJJHD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_923C1AF2DBD806BC_1__CTOR_OFFSET))(this);
	}
};
