#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_544;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_1_446B1DF825C015D5_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0x154D7A40)
#define CLASS_1_446B1DF825C015D5_GET_BASICADD_OFFSET UNITYSDK_OFFSET(0x154D79E0)
#define CLASS_1_446B1DF825C015D5_GET_BASIC_OFFSET UNITYSDK_OFFSET(0x154D79C0)
#define CLASS_1_446B1DF825C015D5_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x154D7A20)
#define CLASS_1_446B1DF825C015D5_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x154D7A00)
#define CLASS_1_446B1DF825C015D5_SET_BASICADD_OFFSET UNITYSDK_OFFSET(0x154D79F0)
#define CLASS_1_446B1DF825C015D5_SET_BASIC_OFFSET UNITYSDK_OFFSET(0x154D79D0)
#define CLASS_1_446B1DF825C015D5_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x154D7A30)
#define CLASS_1_446B1DF825C015D5_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x154D7A10)
#define CLASS_1_446B1DF825C015D5__CTOR_OFFSET UNITYSDK_OFFSET(0x154D7B00)

inline static constexpr unsigned int Class_1_446B1DF825C015D5_TypeDefinitionIndex = 62710;

class Class_1_446B1DF825C015D5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_544* _Basic_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_544* _Delta_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_544* _BasicAdd_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_544* _Ratio_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_544* get_Basic()
	{
		return ((::Class_0_16E4307DCC419505_544*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_GET_BASIC_OFFSET))(this);
	}

	::System::Void set_Basic(::Class_0_16E4307DCC419505_544* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_544*))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_SET_BASIC_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_544* get_BasicAdd()
	{
		return ((::Class_0_16E4307DCC419505_544*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_GET_BASICADD_OFFSET))(this);
	}

	::System::Void set_BasicAdd(::Class_0_16E4307DCC419505_544* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_544*))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_SET_BASICADD_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_544* get_Ratio()
	{
		return ((::Class_0_16E4307DCC419505_544*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_GET_RATIO_OFFSET))(this);
	}

	::System::Void set_Ratio(::Class_0_16E4307DCC419505_544* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_544*))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_SET_RATIO_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_544* get_Delta()
	{
		return ((::Class_0_16E4307DCC419505_544*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_GET_DELTA_OFFSET))(this);
	}

	::System::Void set_Delta(::Class_0_16E4307DCC419505_544* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_544*))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_SET_DELTA_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_CALCULATEVALUE_OFFSET))(this, a1);
	}
};
