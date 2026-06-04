#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_FF88F3A376A07684.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4DD443333D042C23_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13963480)
#define CLASS_2_4DD443333D042C23_GET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x13963D00)
#define CLASS_2_4DD443333D042C23_GET_SOURCEENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x13963D20)
#define CLASS_2_4DD443333D042C23_METHOD_2_211335E5C5042E4E_OFFSET UNITYSDK_OFFSET(0x139638D0)
#define CLASS_2_4DD443333D042C23_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x13963680)
#define CLASS_2_4DD443333D042C23_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x139635A0)
#define CLASS_2_4DD443333D042C23_METHOD_2_89F315BB4444538D_OFFSET UNITYSDK_OFFSET(0x13963390)
#define CLASS_2_4DD443333D042C23_METHOD_2_C7131ECBB92F430B_OFFSET UNITYSDK_OFFSET(0x13963A70)
#define CLASS_2_4DD443333D042C23_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13963A30)
#define CLASS_2_4DD443333D042C23_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x139639F0)
#define CLASS_2_4DD443333D042C23_METHOD_2_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0x13963C60)
#define CLASS_2_4DD443333D042C23_SET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x13963D10)
#define CLASS_2_4DD443333D042C23_SET_SOURCEENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x13963D30)
#define CLASS_2_4DD443333D042C23_TICK_OFFSET UNITYSDK_OFFSET(0x13963870)
#define CLASS_2_4DD443333D042C23__CTOR_OFFSET UNITYSDK_OFFSET(0x13963350)
#define CLASS_2_4DD443333D042C23___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13963D40)

inline static constexpr unsigned int Class_2_4DD443333D042C23_TypeDefinitionIndex = 53198;

class Class_2_4DD443333D042C23 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_0; // 0x18
	::System::UInt32 _SourceEntityID_k__BackingField; // 0x20
	::System::Int32 Field_2_2; // 0x24
	::System::Int32 Field_2_3; // 0x28
	::RPG::GameCore::EntityType _SourceEntityType_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_89F315BB4444538D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_METHOD_2_89F315BB4444538D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_211335E5C5042E4E(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_METHOD_2_211335E5C5042E4E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_C7131ECBB92F430B(::Struct_2_FF88F3A376A07684& a1, ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FF88F3A376A07684&, ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_METHOD_2_C7131ECBB92F430B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_METHOD_2_CC9C9A9047B24E05_OFFSET))(this, a1);
	}

	::System::UInt32 get_SourceEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_GET_SOURCEENTITYID_OFFSET))(this);
	}

	::System::Void set_SourceEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_SET_SOURCEENTITYID_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityType get_SourceEntityType()
	{
		return ((::RPG::GameCore::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_GET_SOURCEENTITYTYPE_OFFSET))(this);
	}

	::System::Void set_SourceEntityType(::RPG::GameCore::EntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23_SET_SOURCEENTITYTYPE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4DD443333D042C23___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
