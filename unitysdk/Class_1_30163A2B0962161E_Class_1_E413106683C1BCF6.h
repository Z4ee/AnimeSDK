#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_MapEntity.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_GET_EFFECTSET_OFFSET UNITYSDK_OFFSET(0x160E92D0)
#define CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x160E92B0)
#define CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_GET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x160E92E0)
#define CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x160E9300)
#define CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_METHOD_1_E9C066403E434502_OFFSET UNITYSDK_OFFSET(0x160E9350)
#define CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x160E92C0)
#define CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_SET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x160E92F0)
#define CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6__CTOR_OFFSET UNITYSDK_OFFSET(0x160E6D20)

inline static constexpr unsigned int Class_1_30163A2B0962161E_Class_1_E413106683C1BCF6_TypeDefinitionIndex = 60812;

class Class_1_30163A2B0962161E_Class_1_E413106683C1BCF6 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* _EffectSet_k__BackingField; // 0x10
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x18
	::System::Single _FadeProgress_k__BackingField; // 0x20
	::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity IPMPNPPGHCP; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_GET_ENTITY_OFFSET))(this);
	}

	::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_SET_ENTITY_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* get_EffectSet()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_GET_EFFECTSET_OFFSET))(this);
	}

	::System::Single get_FadeProgress()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_GET_FADEPROGRESS_OFFSET))(this);
	}

	::System::Void set_FadeProgress(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_SET_FADEPROGRESS_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_E9C066403E434502(::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_E413106683C1BCF6_METHOD_1_E9C066403E434502_OFFSET))(this, a1);
	}
};
