#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_FD740778034CC2E9_METHOD_1_232429C69FD28461_OFFSET UNITYSDK_OFFSET(0x92F1DC0)
#define CLASS_1_FD740778034CC2E9_METHOD_1_827CBA0F5CDCC7E9_OFFSET UNITYSDK_OFFSET(0x92F1D50)
#define CLASS_1_FD740778034CC2E9_METHOD_1_CB75AEA56BD834A6_OFFSET UNITYSDK_OFFSET(0x92F1FC0)
#define CLASS_1_FD740778034CC2E9__CTOR_OFFSET UNITYSDK_OFFSET(0x92F2140)

inline static constexpr unsigned int Class_1_FD740778034CC2E9_TypeDefinitionIndex = 60368;

class Class_1_FD740778034CC2E9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_827CBA0F5CDCC7E9(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9_METHOD_1_827CBA0F5CDCC7E9_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_747* Method_1_CB75AEA56BD834A6(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::Class_0_16E4307DCC419505_747*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9_METHOD_1_CB75AEA56BD834A6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_232429C69FD28461(::RPG::Client::EquipmentItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9_METHOD_1_232429C69FD28461_OFFSET))(this, a1);
	}
};
