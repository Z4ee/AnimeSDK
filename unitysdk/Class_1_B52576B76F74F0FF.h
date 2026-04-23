#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_358;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_1_B52576B76F74F0FF_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0x9353460)
#define CLASS_1_B52576B76F74F0FF_GET_BASICADD_OFFSET UNITYSDK_OFFSET(0x9353400)
#define CLASS_1_B52576B76F74F0FF_GET_BASIC_OFFSET UNITYSDK_OFFSET(0x93533E0)
#define CLASS_1_B52576B76F74F0FF_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x9353440)
#define CLASS_1_B52576B76F74F0FF_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x9353420)
#define CLASS_1_B52576B76F74F0FF_SET_BASICADD_OFFSET UNITYSDK_OFFSET(0x9353410)
#define CLASS_1_B52576B76F74F0FF_SET_BASIC_OFFSET UNITYSDK_OFFSET(0x93533F0)
#define CLASS_1_B52576B76F74F0FF_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x9353450)
#define CLASS_1_B52576B76F74F0FF_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x9353430)
#define CLASS_1_B52576B76F74F0FF__CTOR_OFFSET UNITYSDK_OFFSET(0x9353520)

inline static constexpr unsigned int Class_1_B52576B76F74F0FF_TypeDefinitionIndex = 57810;

class Class_1_B52576B76F74F0FF : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_358* _Basic_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_358* _BasicAdd_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_358* _Ratio_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_358* _Delta_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B52576B76F74F0FF__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_358* get_Basic()
	{
		return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B52576B76F74F0FF_GET_BASIC_OFFSET))(this);
	}

	::System::Void set_Basic(::Class_0_16E4307DCC419505_358* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_1_B52576B76F74F0FF_SET_BASIC_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_358* get_BasicAdd()
	{
		return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B52576B76F74F0FF_GET_BASICADD_OFFSET))(this);
	}

	::System::Void set_BasicAdd(::Class_0_16E4307DCC419505_358* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_1_B52576B76F74F0FF_SET_BASICADD_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_358* get_Ratio()
	{
		return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B52576B76F74F0FF_GET_RATIO_OFFSET))(this);
	}

	::System::Void set_Ratio(::Class_0_16E4307DCC419505_358* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_1_B52576B76F74F0FF_SET_RATIO_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_358* get_Delta()
	{
		return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B52576B76F74F0FF_GET_DELTA_OFFSET))(this);
	}

	::System::Void set_Delta(::Class_0_16E4307DCC419505_358* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_1_B52576B76F74F0FF_SET_DELTA_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_B52576B76F74F0FF_CALCULATEVALUE_OFFSET))(this, a1);
	}
};
