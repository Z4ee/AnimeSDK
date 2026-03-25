#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_FF88F3A376A07684.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9504BA75332EE296_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BCF6B0)
#define CLASS_2_9504BA75332EE296_GET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x10BCFE90)
#define CLASS_2_9504BA75332EE296_GET_SOURCEENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x10BCFEB0)
#define CLASS_2_9504BA75332EE296_METHOD_2_0B90A7F07890AE1A_OFFSET UNITYSDK_OFFSET(0x10BCF5D0)
#define CLASS_2_9504BA75332EE296_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x10BCF8A0)
#define CLASS_2_9504BA75332EE296_METHOD_2_38482A76357D7D86_OFFSET UNITYSDK_OFFSET(0x10BCFAE0)
#define CLASS_2_9504BA75332EE296_METHOD_2_68FBE95FB3531FF5_OFFSET UNITYSDK_OFFSET(0x10BCFC00)
#define CLASS_2_9504BA75332EE296_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x10BCF7C0)
#define CLASS_2_9504BA75332EE296_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10BCFBC0)
#define CLASS_2_9504BA75332EE296_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10BCFB80)
#define CLASS_2_9504BA75332EE296_METHOD_2_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0x10BCFDF0)
#define CLASS_2_9504BA75332EE296_SET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x10BCFEA0)
#define CLASS_2_9504BA75332EE296_SET_SOURCEENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x10BCFEC0)
#define CLASS_2_9504BA75332EE296_TICK_OFFSET UNITYSDK_OFFSET(0x10BCFA80)
#define CLASS_2_9504BA75332EE296__CTOR_OFFSET UNITYSDK_OFFSET(0x10BCF590)
#define CLASS_2_9504BA75332EE296___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10BCFED0)

inline static constexpr unsigned int Class_2_9504BA75332EE296_TypeDefinitionIndex = 45840;

class Class_2_9504BA75332EE296 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_3; // 0x18
	::System::UInt32 _SourceEntityID_k__BackingField; // 0x20
	::System::Int32 Field_2_4; // 0x24
	::System::Int32 Field_2_2; // 0x28
	::RPG::GameCore::EntityType _SourceEntityType_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0B90A7F07890AE1A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_METHOD_2_0B90A7F07890AE1A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_38482A76357D7D86(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_METHOD_2_38482A76357D7D86_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_68FBE95FB3531FF5(::Struct_2_FF88F3A376A07684& a1, ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FF88F3A376A07684&, ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_METHOD_2_68FBE95FB3531FF5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_METHOD_2_CC9C9A9047B24E05_OFFSET))(this, a1);
	}

	::System::UInt32 get_SourceEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_GET_SOURCEENTITYID_OFFSET))(this);
	}

	::System::Void set_SourceEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_SET_SOURCEENTITYID_OFFSET))(this, value);
	}

	::RPG::GameCore::EntityType get_SourceEntityType()
	{
		return ((::RPG::GameCore::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_GET_SOURCEENTITYTYPE_OFFSET))(this);
	}

	::System::Void set_SourceEntityType(::RPG::GameCore::EntityType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296_SET_SOURCEENTITYTYPE_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9504BA75332EE296___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
