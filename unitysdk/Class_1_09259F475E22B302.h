#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_803;
class Class_1_DE6E491FE63D8E69_2;
class Class_1_E54B123A533AECA8;

#define CLASS_1_09259F475E22B302_GET_ID_OFFSET UNITYSDK_OFFSET(0x15B1E5F0)
#define CLASS_1_09259F475E22B302_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15B1E5B0)
#define CLASS_1_09259F475E22B302_GET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0x15B1E6B0)
#define CLASS_1_09259F475E22B302_GET_TRAITEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x15B1E630)
#define CLASS_1_09259F475E22B302_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x15B1E670)
#define CLASS_1_09259F475E22B302_METHOD_1_9FAACC7749D268F3_OFFSET UNITYSDK_OFFSET(0x15B1E520)
#define CLASS_1_09259F475E22B302_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x15B1E6D0)
#define CLASS_1_09259F475E22B302_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0x15B1E770)
#define CLASS_1_09259F475E22B302_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15B1E720)
#define CLASS_1_09259F475E22B302_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x15B1E7C0)
#define CLASS_1_09259F475E22B302_SET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0x15B1E6C0)
#define CLASS_1_09259F475E22B302__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1E810)

inline static constexpr unsigned int Class_1_09259F475E22B302_TypeDefinitionIndex = 62532;

class Class_1_09259F475E22B302 : public ::System::Object
{
public:
	::System::Boolean _IsRecover_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302__CTOR_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_9FAACC7749D268F3()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_METHOD_1_9FAACC7749D268F3_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_GET_ISACTIVE_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_GET_ID_OFFSET))(this);
	}

	::RPG::GameCore::GridFightTraitEffectType get_TraitEffectType()
	{
		return ((::RPG::GameCore::GridFightTraitEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_GET_TRAITEFFECTTYPE_OFFSET))(this);
	}

	::System::UInt32 get_TraitID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_GET_TRAITID_OFFSET))(this);
	}

	::System::Boolean get_IsRecover()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_GET_ISRECOVER_OFFSET))(this);
	}

	::System::Void set_IsRecover(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_SET_ISRECOVER_OFFSET))(this, a1);
	}

	::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_ONTRAITCHANGE_OFFSET))(this, a1, a2);
	}

	::System::Void OnUpdate(::Class_1_E54B123A533AECA8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E54B123A533AECA8*))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_ONUPDATE_OFFSET))(this, a1);
	}

	::System::Void OnUpdate_1(::Class_1_DE6E491FE63D8E69_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE6E491FE63D8E69_2*))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_ONUPDATE_1_OFFSET))(this, a1);
	}

	::System::Void SetCollector(::Class_0_16E4307DCC419505_803* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_803*))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_SETCOLLECTOR_OFFSET))(this, a1);
	}
};
