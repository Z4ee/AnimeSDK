#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_195.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"

class Class_1_9AD828BA811E7C7A_2;

#define CLASS_2_637AE238D4A35C0D_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0xA3F5A10)
#define CLASS_2_637AE238D4A35C0D__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F5A20)

inline static constexpr unsigned int Class_2_637AE238D4A35C0D_TypeDefinitionIndex = 72572;

class Class_2_637AE238D4A35C0D : public ::Class_1_43BD383C98B4C0C5_195
{
public:
	::RPG::Client::LittleGameShare::MsgRetcode _Retcode_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_2_637AE238D4A35C0D__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::MsgRetcode get_Retcode()
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_637AE238D4A35C0D_GET_RETCODE_OFFSET))(this);
	}
};
