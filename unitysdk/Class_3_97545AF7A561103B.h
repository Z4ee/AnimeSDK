#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_97545AF7A561103B_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1DDE3F80)
#define CLASS_3_97545AF7A561103B_METHOD_3_F045AD2368F02E87_OFFSET UNITYSDK_OFFSET(0x1DDE3FC0)
#define CLASS_3_97545AF7A561103B__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE3FB0)

inline static constexpr unsigned int Class_3_97545AF7A561103B_TypeDefinitionIndex = 20751;

class Class_3_97545AF7A561103B : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* LPGBHJJJKNC; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* GEOFCAEMDON; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* DOLKEDPHINJ; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* FBICKGEMBDK; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* EGOILBBICED; // 0x38
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* OEJBAEINKFK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97545AF7A561103B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_97545AF7A561103B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_97545AF7A561103B*&))((::PBYTE)hIl2Cpp + CLASS_3_97545AF7A561103B_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F045AD2368F02E87(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_97545AF7A561103B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_97545AF7A561103B*))((::PBYTE)hIl2Cpp + CLASS_3_97545AF7A561103B_METHOD_3_F045AD2368F02E87_OFFSET))(a1, a2);
	}
};
