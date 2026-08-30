#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_963E317C37FB5E9A_28;
namespace RPG::GameCore { class CakeRacePickupItemConfig; }

#define CLASS_1_7F2F768DC85F0AF5_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x1C0B4850)
#define CLASS_1_7F2F768DC85F0AF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B4900)

inline static constexpr unsigned int Class_1_7F2F768DC85F0AF5_TypeDefinitionIndex = 36569;

class Class_1_7F2F768DC85F0AF5 : public ::System::Object
{
public:
	::RPG::GameCore::CakeRacePickupItemConfig* EABKOHGCHFP; // 0x10
	::System::Int32 EBJKJAGJGPK; // 0x18
	::System::UInt64 KAMOPEEBOHJ; // 0x20
	::System::UInt32 GOCFOJJIAHL; // 0x28
	::System::UInt32 KNAFKCLNNAH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F2F768DC85F0AF5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_963E317C37FB5E9A_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_28*))((::PBYTE)hIl2Cpp + CLASS_1_7F2F768DC85F0AF5_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}
};
