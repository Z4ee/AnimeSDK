#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::GameCore { class MapEntranceUnlockRow; }

#define CLASS_1_BDE6C85312507530_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0xC50BA70)
#define CLASS_1_BDE6C85312507530_METHOD_1_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xC50BA20)
#define CLASS_1_BDE6C85312507530_METHOD_1_8365AFBD2843808C_OFFSET UNITYSDK_OFFSET(0xC50B980)
#define CLASS_1_BDE6C85312507530__CTOR_OFFSET UNITYSDK_OFFSET(0xC50B9F0)

inline static constexpr unsigned int Class_1_BDE6C85312507530_TypeDefinitionIndex = 68166;

class Class_1_BDE6C85312507530 : public ::System::Object
{
public:
	::RPG::Client::ConditionChecker* OLNFAODGPMD; // 0x10

	::System::Void _ctor(::RPG::GameCore::MapEntranceUnlockRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapEntranceUnlockRow*))((::PBYTE)hIl2Cpp + CLASS_1_BDE6C85312507530__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_BDE6C85312507530* Method_1_8365AFBD2843808C(::RPG::GameCore::MapEntranceUnlockRow* a1)
	{
		return ((::Class_1_BDE6C85312507530*(*)(::RPG::GameCore::MapEntranceUnlockRow*))((::PBYTE)hIl2Cpp + CLASS_1_BDE6C85312507530_METHOD_1_8365AFBD2843808C_OFFSET))(a1);
	}

	::System::Void Method_1_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE6C85312507530_METHOD_1_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE6C85312507530_METHOD_1_5E72916301E347E2_OFFSET))(this);
	}
};
