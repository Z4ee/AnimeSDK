#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_BF4A8309B20500B2_METHOD_3_A6F54A9E721BB5D2_OFFSET UNITYSDK_OFFSET(0x1DC8F520)
#define CLASS_3_BF4A8309B20500B2_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1DC8F4D0)
#define CLASS_3_BF4A8309B20500B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8F510)

inline static constexpr unsigned int Class_3_BF4A8309B20500B2_TypeDefinitionIndex = 21731;

class Class_3_BF4A8309B20500B2 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* JIJCAMIBONC; // 0x18
	::Il2CppArray<::System::UInt32>* DLAIEOKGOIH; // 0x20
	::System::UInt32 FDMIEICBBNB; // 0x28
	::System::UInt32 ALDHGDKEMNL; // 0x2C
	::System::UInt32 ICGACGKHFEO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF4A8309B20500B2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BF4A8309B20500B2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BF4A8309B20500B2*&))((::PBYTE)hIl2Cpp + CLASS_3_BF4A8309B20500B2_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6F54A9E721BB5D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BF4A8309B20500B2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BF4A8309B20500B2*))((::PBYTE)hIl2Cpp + CLASS_3_BF4A8309B20500B2_METHOD_3_A6F54A9E721BB5D2_OFFSET))(a1, a2);
	}
};
