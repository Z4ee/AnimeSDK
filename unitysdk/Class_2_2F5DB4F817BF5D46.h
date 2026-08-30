#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/EntityScoreType.h"

namespace RPG::GameCore { class EntityScoreConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_2F5DB4F817BF5D46_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B5D630)
#define CLASS_2_2F5DB4F817BF5D46_INIT_OFFSET UNITYSDK_OFFSET(0x16B5D350)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x16B5DB40)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x16B5D910)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16B5DB00)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_3BD1CA451CFC20F5_OFFSET UNITYSDK_OFFSET(0x16B5DA40)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_438E5C3BAE7B5524_OFFSET UNITYSDK_OFFSET(0x16B5D840)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x16B5D730)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x16B5D3A0)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_FEB801BCF1FB965F_OFFSET UNITYSDK_OFFSET(0x16B5D740)
#define CLASS_2_2F5DB4F817BF5D46_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x16B5D6D0)
#define CLASS_2_2F5DB4F817BF5D46__CTOR_OFFSET UNITYSDK_OFFSET(0x16B5DD40)

inline static constexpr unsigned int Class_2_2F5DB4F817BF5D46_TypeDefinitionIndex = 69131;

class Class_2_2F5DB4F817BF5D46 : public ::RPG::Client::BaseModule
{
public:
	// static const ::System::String* JGBEMJAJDAI; // 0x0
	::RPG::GameCore::EntityScoreConfig* EJJEEJENLDA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* PINCPCIHMKM; // 0x18
	::System::Single CDNIFHCGPCJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_FEB801BCF1FB965F(::RPG::GameCore::EntityScoreType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityScoreType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_FEB801BCF1FB965F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Single Method_2_3BD1CA451CFC20F5(::RPG::GameCore::EntityScoreType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::EntityScoreType))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_3BD1CA451CFC20F5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Single Method_2_438E5C3BAE7B5524(::RPG::GameCore::EntityScoreType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::EntityScoreType))((::PBYTE)hIl2Cpp + CLASS_2_2F5DB4F817BF5D46_METHOD_2_438E5C3BAE7B5524_OFFSET))(this, a1);
	}
};
