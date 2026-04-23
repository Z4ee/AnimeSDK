#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_90F9EAEFE24AE3FC_METHOD_3_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x1832AB00)
#define CLASS_3_90F9EAEFE24AE3FC_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1832AB80)
#define CLASS_3_90F9EAEFE24AE3FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1832AB50)

inline static constexpr unsigned int Class_3_90F9EAEFE24AE3FC_TypeDefinitionIndex = 23179;

class Class_3_90F9EAEFE24AE3FC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::AttackType Field_3_0; // 0x18
	::RPG::GameCore::AttackType Field_3_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90F9EAEFE24AE3FC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DFC332AF3EA3B47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_90F9EAEFE24AE3FC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_90F9EAEFE24AE3FC*&))((::PBYTE)hIl2Cpp + CLASS_3_90F9EAEFE24AE3FC_METHOD_3_2DFC332AF3EA3B47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_90F9EAEFE24AE3FC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_90F9EAEFE24AE3FC*))((::PBYTE)hIl2Cpp + CLASS_3_90F9EAEFE24AE3FC_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
