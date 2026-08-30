#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5772346ACD452D08.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AetherDivideModule; }
namespace RPG::Client { class ChestAndRaidInfo; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5DC2E6D5675C7B69_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC31DC90)
#define CLASS_2_5DC2E6D5675C7B69_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC31DF10)
#define CLASS_2_5DC2E6D5675C7B69_METHOD_2_7BC09E1FE0595020_OFFSET UNITYSDK_OFFSET(0xC31DFB0)
#define CLASS_2_5DC2E6D5675C7B69_METHOD_2_8F33A48C364BECAB_OFFSET UNITYSDK_OFFSET(0xC31DAA0)
#define CLASS_2_5DC2E6D5675C7B69_METHOD_2_A16448B7234D5E8B_OFFSET UNITYSDK_OFFSET(0xC31E450)
#define CLASS_2_5DC2E6D5675C7B69_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0xC31DD90)
#define CLASS_2_5DC2E6D5675C7B69_METHOD_2_C98FE9540FAA3A63_OFFSET UNITYSDK_OFFSET(0xC31E1B0)
#define CLASS_2_5DC2E6D5675C7B69_METHOD_2_EBACC0EAF2A48AD8_OFFSET UNITYSDK_OFFSET(0xC31DF50)
#define CLASS_2_5DC2E6D5675C7B69_METHOD_2_EEC801209EBDD6BF_OFFSET UNITYSDK_OFFSET(0xC31E4A0)
#define CLASS_2_5DC2E6D5675C7B69__CTOR_OFFSET UNITYSDK_OFFSET(0xC31DA80)

inline static constexpr unsigned int Class_2_5DC2E6D5675C7B69_TypeDefinitionIndex = 61269;

class Class_2_5DC2E6D5675C7B69 : public ::Class_1_5772346ACD452D08
{
public:
	::RPG::Client::TeamData* MDKAJPJNKJE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC2E6D5675C7B69__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8F33A48C364BECAB(::RPG::Client::IGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_2_5DC2E6D5675C7B69_METHOD_2_8F33A48C364BECAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC2E6D5675C7B69_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC2E6D5675C7B69_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::Client::TeamData* Method_2_EBACC0EAF2A48AD8()
	{
		return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC2E6D5675C7B69_METHOD_2_EBACC0EAF2A48AD8_OFFSET))(this);
	}

	::System::Void Method_2_C98FE9540FAA3A63(::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5DC2E6D5675C7B69_METHOD_2_C98FE9540FAA3A63_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_EEC801209EBDD6BF()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC2E6D5675C7B69_METHOD_2_EEC801209EBDD6BF_OFFSET))(this);
	}

	::RPG::Client::TeamData* Method_2_7BC09E1FE0595020()
	{
		return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC2E6D5675C7B69_METHOD_2_7BC09E1FE0595020_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC2E6D5675C7B69_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::RPG::Client::AetherDivideModule* Method_2_A16448B7234D5E8B()
	{
		return ((::RPG::Client::AetherDivideModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC2E6D5675C7B69_METHOD_2_A16448B7234D5E8B_OFFSET))(this);
	}
};
