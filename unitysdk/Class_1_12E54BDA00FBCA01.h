#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_D2C97E5E9F60802E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_12E54BDA00FBCA01_GET_ABILITYPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x1705F680)
#define CLASS_1_12E54BDA00FBCA01_GET_CASTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1705F660)
#define CLASS_1_12E54BDA00FBCA01_GET_EVENTCASTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1705F6C0)
#define CLASS_1_12E54BDA00FBCA01_GET_RUNTIMEVALUES_OFFSET UNITYSDK_OFFSET(0x1705F6A0)
#define CLASS_1_12E54BDA00FBCA01_SET_ABILITYPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x1705F690)
#define CLASS_1_12E54BDA00FBCA01_SET_CASTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1705F670)
#define CLASS_1_12E54BDA00FBCA01_SET_EVENTCASTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1705F6D0)
#define CLASS_1_12E54BDA00FBCA01_SET_RUNTIMEVALUES_OFFSET UNITYSDK_OFFSET(0x1705F6B0)
#define CLASS_1_12E54BDA00FBCA01__CTOR_OFFSET UNITYSDK_OFFSET(0x1705F6E0)

inline static constexpr unsigned int Class_1_12E54BDA00FBCA01_TypeDefinitionIndex = 76829;

class Class_1_12E54BDA00FBCA01 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _RuntimeValues_k__BackingField; // 0x10
	::Class_1_D2C97E5E9F60802E* _AbilityPrototype_k__BackingField; // 0x18
	::System::Int32 _EventCasterRuntimeID_k__BackingField; // 0x20
	::System::Int32 _CasterRuntimeID_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12E54BDA00FBCA01__CTOR_OFFSET))(this);
	}

	::System::Int32 get_CasterRuntimeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12E54BDA00FBCA01_GET_CASTERRUNTIMEID_OFFSET))(this);
	}

	::System::Void set_CasterRuntimeID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_12E54BDA00FBCA01_SET_CASTERRUNTIMEID_OFFSET))(this, a1);
	}

	::Class_1_D2C97E5E9F60802E* get_AbilityPrototype()
	{
		return ((::Class_1_D2C97E5E9F60802E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12E54BDA00FBCA01_GET_ABILITYPROTOTYPE_OFFSET))(this);
	}

	::System::Void set_AbilityPrototype(::Class_1_D2C97E5E9F60802E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2C97E5E9F60802E*))((::PBYTE)hIl2Cpp + CLASS_1_12E54BDA00FBCA01_SET_ABILITYPROTOTYPE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* get_RuntimeValues()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12E54BDA00FBCA01_GET_RUNTIMEVALUES_OFFSET))(this);
	}

	::System::Void set_RuntimeValues(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_12E54BDA00FBCA01_SET_RUNTIMEVALUES_OFFSET))(this, a1);
	}

	::System::Int32 get_EventCasterRuntimeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12E54BDA00FBCA01_GET_EVENTCASTERRUNTIMEID_OFFSET))(this);
	}

	::System::Void set_EventCasterRuntimeID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_12E54BDA00FBCA01_SET_EVENTCASTERRUNTIMEID_OFFSET))(this, a1);
	}
};
