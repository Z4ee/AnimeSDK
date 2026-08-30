#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_457;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_1_446B1DF825C015D5_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0x1522DF50)
#define CLASS_1_446B1DF825C015D5_GET_BASICADD_OFFSET UNITYSDK_OFFSET(0x1522DEF0)
#define CLASS_1_446B1DF825C015D5_GET_BASIC_OFFSET UNITYSDK_OFFSET(0x1522DED0)
#define CLASS_1_446B1DF825C015D5_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1522DF30)
#define CLASS_1_446B1DF825C015D5_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x1522DF10)
#define CLASS_1_446B1DF825C015D5_SET_BASICADD_OFFSET UNITYSDK_OFFSET(0x1522DF00)
#define CLASS_1_446B1DF825C015D5_SET_BASIC_OFFSET UNITYSDK_OFFSET(0x1522DEE0)
#define CLASS_1_446B1DF825C015D5_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x1522DF40)
#define CLASS_1_446B1DF825C015D5_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x1522DF20)
#define CLASS_1_446B1DF825C015D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1522E010)

inline static constexpr unsigned int Class_1_446B1DF825C015D5_TypeDefinitionIndex = 62777;

class Class_1_446B1DF825C015D5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_457* _Ratio_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_457* _Basic_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_457* _BasicAdd_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_457* _Delta_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_457* get_Basic()
	{
		return ((::Class_0_16E4307DCC419505_457*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_GET_BASIC_OFFSET))(this);
	}

	::System::Void set_Basic(::Class_0_16E4307DCC419505_457* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_457*))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_SET_BASIC_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_457* get_BasicAdd()
	{
		return ((::Class_0_16E4307DCC419505_457*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_GET_BASICADD_OFFSET))(this);
	}

	::System::Void set_BasicAdd(::Class_0_16E4307DCC419505_457* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_457*))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_SET_BASICADD_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_457* get_Ratio()
	{
		return ((::Class_0_16E4307DCC419505_457*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_GET_RATIO_OFFSET))(this);
	}

	::System::Void set_Ratio(::Class_0_16E4307DCC419505_457* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_457*))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_SET_RATIO_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_457* get_Delta()
	{
		return ((::Class_0_16E4307DCC419505_457*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_GET_DELTA_OFFSET))(this);
	}

	::System::Void set_Delta(::Class_0_16E4307DCC419505_457* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_457*))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_SET_DELTA_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_446B1DF825C015D5_CALCULATEVALUE_OFFSET))(this, a1);
	}
};
