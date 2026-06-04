#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_768;
class Class_1_8271AFF79E02658D;
class Class_1_EEEF09F79EF958D3_1;

#define CLASS_1_09259F475E22B302_GET_ID_OFFSET UNITYSDK_OFFSET(0x1427A910)
#define CLASS_1_09259F475E22B302_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1427A900)
#define CLASS_1_09259F475E22B302_GET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0x1427A940)
#define CLASS_1_09259F475E22B302_GET_TRAITEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1427A920)
#define CLASS_1_09259F475E22B302_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1427A930)
#define CLASS_1_09259F475E22B302_METHOD_1_9FAACC7749D268F3_OFFSET UNITYSDK_OFFSET(0x1427A870)
#define CLASS_1_09259F475E22B302_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x1427A960)
#define CLASS_1_09259F475E22B302_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1427AA00)
#define CLASS_1_09259F475E22B302_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1427A9B0)
#define CLASS_1_09259F475E22B302_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1427AA50)
#define CLASS_1_09259F475E22B302_SET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0x1427A950)
#define CLASS_1_09259F475E22B302__CTOR_OFFSET UNITYSDK_OFFSET(0x1427AAA0)

inline static constexpr unsigned int Class_1_09259F475E22B302_TypeDefinitionIndex = 61191;

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

	::System::Void OnUpdate(::Class_1_8271AFF79E02658D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_ONUPDATE_OFFSET))(this, a1);
	}

	::System::Void OnUpdate_1(::Class_1_EEEF09F79EF958D3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EEEF09F79EF958D3_1*))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_ONUPDATE_1_OFFSET))(this, a1);
	}

	::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + CLASS_1_09259F475E22B302_SETCOLLECTOR_OFFSET))(this, a1);
	}
};
