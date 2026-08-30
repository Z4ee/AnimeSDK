#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C340C9272BC2F0C;
class Class_1_A0C0ADCC8A5FDABE;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }

#define CLASS_1_F9FBCC956DFCF137_21_METHOD_1_AE43239692438BE6_OFFSET UNITYSDK_OFFSET(0x15842FD0)
#define CLASS_1_F9FBCC956DFCF137_21_METHOD_1_D9470473C38F9797_OFFSET UNITYSDK_OFFSET(0x158430A0)
#define CLASS_1_F9FBCC956DFCF137_21__CTOR_OFFSET UNITYSDK_OFFSET(0x15842FC0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_21_TypeDefinitionIndex = 74339;

class Class_1_F9FBCC956DFCF137_21 : public ::System::Object
{
public:
	::Class_1_A0C0ADCC8A5FDABE* GANLOCFFMEF; // 0x10

	::System::Void _ctor(::Class_1_A0C0ADCC8A5FDABE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0C0ADCC8A5FDABE*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_21__CTOR_OFFSET))(this, a1);
	}

	::Class_1_3C340C9272BC2F0C* Method_1_AE43239692438BE6(::RPG::Client::RelicItemData* a1)
	{
		return ((::Class_1_3C340C9272BC2F0C*(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_21_METHOD_1_AE43239692438BE6_OFFSET))(this, a1);
	}

	::System::Single Method_1_D9470473C38F9797(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_21_METHOD_1_D9470473C38F9797_OFFSET))(this, a1);
	}
};
