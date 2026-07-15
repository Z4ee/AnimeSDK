#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5772346ACD452D08.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AetherDivideModule; }
namespace RPG::Client { class ChestAndRaidInfo; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14D83D90)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14D84010)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_7BC09E1FE0595020_OFFSET UNITYSDK_OFFSET(0x14D840B0)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_8F33A48C364BECAB_OFFSET UNITYSDK_OFFSET(0x14D83BA0)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_9D0D9AA5ADCCB8B0_OFFSET UNITYSDK_OFFSET(0x14D842B0)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_A16448B7234D5E8B_OFFSET UNITYSDK_OFFSET(0x14D84590)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x14D83E90)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_EBACC0EAF2A48AD8_OFFSET UNITYSDK_OFFSET(0x14D84050)
#define CLASS_2_2C96EEADC2D5FDC1_METHOD_2_EEC801209EBDD6BF_OFFSET UNITYSDK_OFFSET(0x14D845F0)
#define CLASS_2_2C96EEADC2D5FDC1__CTOR_OFFSET UNITYSDK_OFFSET(0x14D83B80)

inline static constexpr unsigned int Class_2_2C96EEADC2D5FDC1_TypeDefinitionIndex = 58439;

class Class_2_2C96EEADC2D5FDC1 : public ::Class_1_5772346ACD452D08
{
public:
	::RPG::Client::TeamData* Field_2_0; // 0x20

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
