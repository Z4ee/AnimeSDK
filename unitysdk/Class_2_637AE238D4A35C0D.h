#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_217.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"

class Class_1_CE89E018B1132F67_1;

#define CLASS_2_637AE238D4A35C0D_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0xB4C9740)
#define CLASS_2_637AE238D4A35C0D__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C9750)

inline static constexpr unsigned int Class_2_637AE238D4A35C0D_TypeDefinitionIndex = 77582;

class Class_2_637AE238D4A35C0D : public ::Class_1_43BD383C98B4C0C5_217
{
public:
	::RPG::Client::LittleGameShare::MsgRetcode _Retcode_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_CE89E018B1132F67_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CE89E018B1132F67_1*))((::PBYTE)hIl2Cpp + CLASS_2_637AE238D4A35C0D__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::MsgRetcode get_Retcode()
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_637AE238D4A35C0D_GET_RETCODE_OFFSET))(this);
	}
};
