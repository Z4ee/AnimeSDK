#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }

#define CLASS_1_92A626E1BDF2C50C_GET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xA412180)
#define CLASS_1_92A626E1BDF2C50C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA4120D0)
#define CLASS_1_92A626E1BDF2C50C_METHOD_1_89AE3FDE25BEC3FA_OFFSET UNITYSDK_OFFSET(0xA412130)
#define CLASS_1_92A626E1BDF2C50C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA412080)
#define CLASS_1_92A626E1BDF2C50C_METHOD_1_FC8EDFFD1B1EFDEF_OFFSET UNITYSDK_OFFSET(0xA411FE0)
#define CLASS_1_92A626E1BDF2C50C_SET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xA412190)
#define CLASS_1_92A626E1BDF2C50C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4121A0)

inline static constexpr unsigned int Class_1_92A626E1BDF2C50C_TypeDefinitionIndex = 56731;

class Class_1_92A626E1BDF2C50C : public ::System::Object
{
public:
	::System::Boolean _BlockNew_k__BackingField; // 0x10
	::System::Boolean Field_1_1; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92A626E1BDF2C50C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FC8EDFFD1B1EFDEF(::RPG::GameCore::LevelPerformanceInitialize* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPerformanceInitialize*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92A626E1BDF2C50C_METHOD_1_FC8EDFFD1B1EFDEF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92A626E1BDF2C50C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92A626E1BDF2C50C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_89AE3FDE25BEC3FA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_92A626E1BDF2C50C_METHOD_1_89AE3FDE25BEC3FA_OFFSET))(this, a1);
	}

	::System::Boolean get_BlockNew()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92A626E1BDF2C50C_GET_BLOCKNEW_OFFSET))(this);
	}

	::System::Void set_BlockNew(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92A626E1BDF2C50C_SET_BLOCKNEW_OFFSET))(this, a1);
	}
};
