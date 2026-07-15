#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_1391ECF981A6D17E_METHOD_3_3AD4360E2346F7A3_OFFSET UNITYSDK_OFFSET(0x1ACC3C50)
#define CLASS_3_1391ECF981A6D17E_METHOD_3_A2326BE0630DF75E_OFFSET UNITYSDK_OFFSET(0x1ACC3C10)
#define CLASS_3_1391ECF981A6D17E__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC3C40)

inline static constexpr unsigned int Class_3_1391ECF981A6D17E_TypeDefinitionIndex = 9940;

class Class_3_1391ECF981A6D17E : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x20
	::System::UInt32 Field_3_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1391ECF981A6D17E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A2326BE0630DF75E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1391ECF981A6D17E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1391ECF981A6D17E*&))((::PBYTE)hIl2Cpp + CLASS_3_1391ECF981A6D17E_METHOD_3_A2326BE0630DF75E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3AD4360E2346F7A3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1391ECF981A6D17E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1391ECF981A6D17E*))((::PBYTE)hIl2Cpp + CLASS_3_1391ECF981A6D17E_METHOD_3_3AD4360E2346F7A3_OFFSET))(a1, a2);
	}
};
