#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_FF88F3A376A07684.h"

class Class_0_16E4307DCC419505_547;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A6173F96A5CE22E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BA8700)
#define CLASS_2_A6173F96A5CE22E8_GET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x15BA8F70)
#define CLASS_2_A6173F96A5CE22E8_GET_SOURCEENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x15BA8F90)
#define CLASS_2_A6173F96A5CE22E8_METHOD_2_211335E5C5042E4E_OFFSET UNITYSDK_OFFSET(0x15BA8BC0)
#define CLASS_2_A6173F96A5CE22E8_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x15BA8900)
#define CLASS_2_A6173F96A5CE22E8_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x15BA8820)
#define CLASS_2_A6173F96A5CE22E8_METHOD_2_89F315BB4444538D_OFFSET UNITYSDK_OFFSET(0x15BA8600)
#define CLASS_2_A6173F96A5CE22E8_METHOD_2_8F74145EEF15E947_OFFSET UNITYSDK_OFFSET(0x15BA8D60)
#define CLASS_2_A6173F96A5CE22E8_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15BA8D20)
#define CLASS_2_A6173F96A5CE22E8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15BA8CE0)
#define CLASS_2_A6173F96A5CE22E8_METHOD_2_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0x15BA8ED0)
#define CLASS_2_A6173F96A5CE22E8_SET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x15BA8F80)
#define CLASS_2_A6173F96A5CE22E8_SET_SOURCEENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x15BA8FA0)
#define CLASS_2_A6173F96A5CE22E8_TICK_OFFSET UNITYSDK_OFFSET(0x15BA8B60)
#define CLASS_2_A6173F96A5CE22E8__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA85C0)

inline static constexpr unsigned int Class_2_A6173F96A5CE22E8_TypeDefinitionIndex = 56967;

class Class_2_A6173F96A5CE22E8 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* LAMOLBHEFGP; // 0x18
	::System::UInt32 _SourceEntityID_k__BackingField; // 0x20
	::System::Int32 ACABMBJMIKN; // 0x24
	::RPG::GameCore::EntityType _SourceEntityType_k__BackingField; // 0x28
	::System::Int32 BNNGFPMLBGD; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_89F315BB4444538D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_METHOD_2_89F315BB4444538D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_211335E5C5042E4E(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_METHOD_2_211335E5C5042E4E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_8F74145EEF15E947(::Struct_2_FF88F3A376A07684& a1, ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FF88F3A376A07684&, ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_METHOD_2_8F74145EEF15E947_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_METHOD_2_CC9C9A9047B24E05_OFFSET))(this, a1);
	}

	::System::UInt32 get_SourceEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_GET_SOURCEENTITYID_OFFSET))(this);
	}

	::System::Void set_SourceEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_SET_SOURCEENTITYID_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityType get_SourceEntityType()
	{
		return ((::RPG::GameCore::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_GET_SOURCEENTITYTYPE_OFFSET))(this);
	}

	::System::Void set_SourceEntityType(::RPG::GameCore::EntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_A6173F96A5CE22E8_SET_SOURCEENTITYTYPE_OFFSET))(this, a1);
	}
};
