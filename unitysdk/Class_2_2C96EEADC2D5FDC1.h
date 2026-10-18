#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5772346ACD452D08.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AetherDivideModule; }
namespace RPG::Client { class ChestAndRaidInfo; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC20F230)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC20F4B0)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_7BC09E1FE0595020_OFFSET UNITYSDK_OFFSET(0xC20F550)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_8F33A48C364BECAB_OFFSET UNITYSDK_OFFSET(0xC20F040)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_9D0D9AA5ADCCB8B0_OFFSET UNITYSDK_OFFSET(0xC20F750)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_A16448B7234D5E8B_OFFSET UNITYSDK_OFFSET(0xC20FA30)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0xC20F330)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_EBACC0EAF2A48AD8_OFFSET UNITYSDK_OFFSET(0xC20F4F0)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_EEC801209EBDD6BF_OFFSET UNITYSDK_OFFSET(0xC20FA90)
#define CLASS_2_2C96EEADC2D5FDC1__CTOR_OFFSET UNITYSDK_OFFSET(0xC20F020)

inline static constexpr unsigned int Class_2_2C96EEADC2D5FDC1_TypeDefinitionIndex = 61174;

class Class_2_2C96EEADC2D5FDC1 : public ::Class_1_5772346ACD452D08
{
public:
	::RPG::Client::TeamData* MDKAJPJNKJE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C96EEADC2D5FDC1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8F33A48C364BECAB(::RPG::Client::IGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_2_2C96EEADC2D5FDC1_METHOD_2_8F33A48C364BECAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C96EEADC2D5FDC1_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C96EEADC2D5FDC1_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::Client::TeamData* Method_2_EBACC0EAF2A48AD8()
	{
		return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C96EEADC2D5FDC1_METHOD_2_EBACC0EAF2A48AD8_OFFSET))(this);
	}

	::System::Void Method_2_9D0D9AA5ADCCB8B0(::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2C96EEADC2D5FDC1_METHOD_2_9D0D9AA5ADCCB8B0_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_EEC801209EBDD6BF()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C96EEADC2D5FDC1_METHOD_2_EEC801209EBDD6BF_OFFSET))(this);
	}

	::RPG::Client::TeamData* Method_2_7BC09E1FE0595020()
	{
		return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C96EEADC2D5FDC1_METHOD_2_7BC09E1FE0595020_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C96EEADC2D5FDC1_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::RPG::Client::AetherDivideModule* Method_2_A16448B7234D5E8B()
	{
		return ((::RPG::Client::AetherDivideModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C96EEADC2D5FDC1_METHOD_2_A16448B7234D5E8B_OFFSET))(this);
	}
};
