#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/InputSignalType.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_2_31D39E0B0ADFB12E;
class Class_3_912CC478F2B21832;

#define CLASS_1_9E393C123EBA1519_METHOD_1_6A36F32DD22457F8_1_OFFSET UNITYSDK_OFFSET(0xBE905D0)
#define CLASS_1_9E393C123EBA1519_METHOD_1_6A36F32DD22457F8_OFFSET UNITYSDK_OFFSET(0xBE904A0)
#define CLASS_1_9E393C123EBA1519__CTOR_OFFSET UNITYSDK_OFFSET(0xBE90490)

inline static constexpr unsigned int Class_1_9E393C123EBA1519_TypeDefinitionIndex = 76264;

class Class_1_9E393C123EBA1519 : public ::System::Object
{
public:
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x10
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x18
	::Class_2_31D39E0B0ADFB12E* JAJOGJKHAJP; // 0x20

	::System::Void _ctor(::Class_3_912CC478F2B21832* a1, ::Class_1_2CDF619C23140440* a2, ::Class_2_31D39E0B0ADFB12E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_912CC478F2B21832*, ::Class_1_2CDF619C23140440*, ::Class_2_31D39E0B0ADFB12E*))((::PBYTE)hIl2Cpp + CLASS_1_9E393C123EBA1519__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_6A36F32DD22457F8(::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType))((::PBYTE)hIl2Cpp + CLASS_1_9E393C123EBA1519_METHOD_1_6A36F32DD22457F8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6A36F32DD22457F8_1(::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType))((::PBYTE)hIl2Cpp + CLASS_1_9E393C123EBA1519_METHOD_1_6A36F32DD22457F8_1_OFFSET))(this, a1);
	}
};
