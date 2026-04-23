#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_666;

#define CLASS_1_FFEA7D897860337C_METHOD_1_C6CC8A19B55A224E_1_OFFSET UNITYSDK_OFFSET(0x128EB3B0)
#define CLASS_1_FFEA7D897860337C_METHOD_1_C6CC8A19B55A224E_OFFSET UNITYSDK_OFFSET(0x128EB350)
#define CLASS_1_FFEA7D897860337C__CTOR_OFFSET UNITYSDK_OFFSET(0x128EB410)

inline static constexpr unsigned int Class_1_FFEA7D897860337C_TypeDefinitionIndex = 57696;

class Class_1_FFEA7D897860337C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFEA7D897860337C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_C6CC8A19B55A224E(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_666* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_FFEA7D897860337C_METHOD_1_C6CC8A19B55A224E_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_C6CC8A19B55A224E_1(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_666* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_FFEA7D897860337C_METHOD_1_C6CC8A19B55A224E_1_OFFSET))(this, a1, a2);
	}
};
