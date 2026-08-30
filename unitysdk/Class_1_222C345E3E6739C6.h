#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;

#define CLASS_1_222C345E3E6739C6_METHOD_1_9051DF3D41EF1ED1_OFFSET UNITYSDK_OFFSET(0x16389360)
#define CLASS_1_222C345E3E6739C6_METHOD_1_9933B9388EF460AD_OFFSET UNITYSDK_OFFSET(0x16389170)
#define CLASS_1_222C345E3E6739C6_METHOD_1_C2358F3140C8CA86_OFFSET UNITYSDK_OFFSET(0x16389230)
#define CLASS_1_222C345E3E6739C6__CTOR_OFFSET UNITYSDK_OFFSET(0x163893D0)

inline static constexpr unsigned int Class_1_222C345E3E6739C6_TypeDefinitionIndex = 65160;

class Class_1_222C345E3E6739C6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_222C345E3E6739C6__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_758* Method_1_9933B9388EF460AD(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_222C345E3E6739C6_METHOD_1_9933B9388EF460AD_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_758* Method_1_C2358F3140C8CA86(::RPG::GameCore::FixPoint a1)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_222C345E3E6739C6_METHOD_1_C2358F3140C8CA86_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_758* Method_1_9051DF3D41EF1ED1(::RPG::GameCore::FixPoint a1)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_222C345E3E6739C6_METHOD_1_9051DF3D41EF1ED1_OFFSET))(a1);
	}
};
