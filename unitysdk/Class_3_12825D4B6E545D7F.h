#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }

#define CLASS_3_12825D4B6E545D7F_METHOD_3_00A92F7113D927DF_OFFSET UNITYSDK_OFFSET(0x1B522520)
#define CLASS_3_12825D4B6E545D7F_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x1B522560)
#define CLASS_3_12825D4B6E545D7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B522550)

inline static constexpr unsigned int Class_3_12825D4B6E545D7F_TypeDefinitionIndex = 23297;

class Class_3_12825D4B6E545D7F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::JsonEnum* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12825D4B6E545D7F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_00A92F7113D927DF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_12825D4B6E545D7F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_12825D4B6E545D7F*&))((::PBYTE)hIl2Cpp + CLASS_3_12825D4B6E545D7F_METHOD_3_00A92F7113D927DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_12825D4B6E545D7F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_12825D4B6E545D7F*))((::PBYTE)hIl2Cpp + CLASS_3_12825D4B6E545D7F_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
