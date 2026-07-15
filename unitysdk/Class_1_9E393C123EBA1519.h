#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/InputSignalType.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_2_566E5C710244EEC1;
class Class_3_001D9EA49F6215B6;

#define CLASS_1_9E393C123EBA1519_METHOD_1_6A36F32DD22457F8_OFFSET UNITYSDK_OFFSET(0x183800D0)
#define CLASS_1_9E393C123EBA1519_METHOD_1_D28389913553A848_OFFSET UNITYSDK_OFFSET(0x1837FFE0)
#define CLASS_1_9E393C123EBA1519__CTOR_OFFSET UNITYSDK_OFFSET(0x1837FFD0)

inline static constexpr unsigned int Class_1_9E393C123EBA1519_TypeDefinitionIndex = 72803;

class Class_1_9E393C123EBA1519 : public ::System::Object
{
public:
	::Class_3_001D9EA49F6215B6* Field_1_0; // 0x10
	::Class_1_2CDF619C23140440* Field_1_1; // 0x18
	::Class_2_566E5C710244EEC1* Field_1_2; // 0x20

	::System::Void _ctor(::Class_3_001D9EA49F6215B6* a1, ::Class_1_2CDF619C23140440* a2, ::Class_2_566E5C710244EEC1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_001D9EA49F6215B6*, ::Class_1_2CDF619C23140440*, ::Class_2_566E5C710244EEC1*))((::PBYTE)hIl2Cpp + CLASS_1_9E393C123EBA1519__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D28389913553A848(::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType))((::PBYTE)hIl2Cpp + CLASS_1_9E393C123EBA1519_METHOD_1_D28389913553A848_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6A36F32DD22457F8(::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType))((::PBYTE)hIl2Cpp + CLASS_1_9E393C123EBA1519_METHOD_1_6A36F32DD22457F8_OFFSET))(this, a1);
	}
};
