#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E4E556C7F46FB3A1_1;
namespace RPG::GameCore { class CakeRacePickupItemConfig; }

#define CLASS_1_7F2F768DC85F0AF5_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x17CDD490)
#define CLASS_1_7F2F768DC85F0AF5__CTOR_OFFSET UNITYSDK_OFFSET(0x17CDE330)

inline static constexpr unsigned int Class_1_7F2F768DC85F0AF5_TypeDefinitionIndex = 34643;

class Class_1_7F2F768DC85F0AF5 : public ::System::Object
{
public:
	::RPG::GameCore::CakeRacePickupItemConfig* Field_1_0; // 0x10
	::System::UInt64 Field_1_4; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::UInt32 Field_1_1; // 0x24
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F2F768DC85F0AF5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_E4E556C7F46FB3A1_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4E556C7F46FB3A1_1*))((::PBYTE)hIl2Cpp + CLASS_1_7F2F768DC85F0AF5_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}
};
