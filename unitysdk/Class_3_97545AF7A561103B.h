#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_97545AF7A561103B_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1B6288A0)
#define CLASS_3_97545AF7A561103B_METHOD_3_A6F54A9E721BB5D2_OFFSET UNITYSDK_OFFSET(0x1B6288E0)
#define CLASS_3_97545AF7A561103B__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6288D0)

inline static constexpr unsigned int Class_3_97545AF7A561103B_TypeDefinitionIndex = 20201;

class Class_3_97545AF7A561103B : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_3; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97545AF7A561103B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_97545AF7A561103B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_97545AF7A561103B*&))((::PBYTE)hIl2Cpp + CLASS_3_97545AF7A561103B_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6F54A9E721BB5D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_97545AF7A561103B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_97545AF7A561103B*))((::PBYTE)hIl2Cpp + CLASS_3_97545AF7A561103B_METHOD_3_A6F54A9E721BB5D2_OFFSET))(a1, a2);
	}
};
