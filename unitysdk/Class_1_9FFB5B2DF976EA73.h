#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_410;
class Class_0_16E4307DCC419505_411;
class Class_0_16E4307DCC419505_737;
class Class_1_3E26D5D72F19C4DB_1;
class Class_1_A11C7D917C5F44A3;
class Class_1_C85C4DAB350DD5FC;
class Class_1_F86E0BB362A55B9C;
class Class_2_036B9A291BBA6396;
namespace RPG::AvatarSystem { class AvatarServant; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_9FFB5B2DF976EA73_GET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1521BD10)
#define CLASS_1_9FFB5B2DF976EA73_GET_PROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0x1521BCF0)
#define CLASS_1_9FFB5B2DF976EA73_GET_SERVANTREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1521BCB0)
#define CLASS_1_9FFB5B2DF976EA73_GET_SERVANTSKILLREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1521BCD0)
#define CLASS_1_9FFB5B2DF976EA73_METHOD_1_0F4B0D4257A65E23_OFFSET UNITYSDK_OFFSET(0x1521C130)
#define CLASS_1_9FFB5B2DF976EA73_METHOD_1_4A6A1943BE9D6C19_OFFSET UNITYSDK_OFFSET(0x1521C310)
#define CLASS_1_9FFB5B2DF976EA73_METHOD_1_4CD8A56E35B158A2_OFFSET UNITYSDK_OFFSET(0x1521BD30)
#define CLASS_1_9FFB5B2DF976EA73_METHOD_1_59D634CA8DD784B2_OFFSET UNITYSDK_OFFSET(0x1521BFE0)
#define CLASS_1_9FFB5B2DF976EA73_METHOD_1_95A45E456041E511_OFFSET UNITYSDK_OFFSET(0x1521C0A0)
#define CLASS_1_9FFB5B2DF976EA73_SET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1521BD20)
#define CLASS_1_9FFB5B2DF976EA73_SET_PROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0x1521BD00)
#define CLASS_1_9FFB5B2DF976EA73_SET_SERVANTREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1521BCC0)
#define CLASS_1_9FFB5B2DF976EA73_SET_SERVANTSKILLREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1521BCE0)
#define CLASS_1_9FFB5B2DF976EA73__CTOR_OFFSET UNITYSDK_OFFSET(0x1521C520)

inline static constexpr unsigned int Class_1_9FFB5B2DF976EA73_TypeDefinitionIndex = 59857;

class Class_1_9FFB5B2DF976EA73 : public ::System::Object
{
public:
	::Class_1_3E26D5D72F19C4DB_1* _ServantSkillRepository_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_737* _MultiplePathConfigRepository_k__BackingField; // 0x18
	::Class_2_036B9A291BBA6396* _PropertyCalculator_k__BackingField; // 0x20
	::Class_1_A11C7D917C5F44A3* _ServantRepository_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73__CTOR_OFFSET))(this);
	}

	::Class_1_A11C7D917C5F44A3* get_ServantRepository()
	{
		return ((::Class_1_A11C7D917C5F44A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_GET_SERVANTREPOSITORY_OFFSET))(this);
	}

	::System::Void set_ServantRepository(::Class_1_A11C7D917C5F44A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A11C7D917C5F44A3*))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_SET_SERVANTREPOSITORY_OFFSET))(this, a1);
	}

	::Class_1_3E26D5D72F19C4DB_1* get_ServantSkillRepository()
	{
		return ((::Class_1_3E26D5D72F19C4DB_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_GET_SERVANTSKILLREPOSITORY_OFFSET))(this);
	}

	::System::Void set_ServantSkillRepository(::Class_1_3E26D5D72F19C4DB_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3E26D5D72F19C4DB_1*))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_SET_SERVANTSKILLREPOSITORY_OFFSET))(this, a1);
	}

	::Class_2_036B9A291BBA6396* get_PropertyCalculator()
	{
		return ((::Class_2_036B9A291BBA6396*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_GET_PROPERTYCALCULATOR_OFFSET))(this);
	}

	::System::Void set_PropertyCalculator(::Class_2_036B9A291BBA6396* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_036B9A291BBA6396*))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_SET_PROPERTYCALCULATOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_737* get_MultiplePathConfigRepository()
	{
		return ((::Class_0_16E4307DCC419505_737*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_GET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET))(this);
	}

	::System::Void set_MultiplePathConfigRepository(::Class_0_16E4307DCC419505_737* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_737*))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_SET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET))(this, a1);
	}

	::Class_1_F86E0BB362A55B9C* Method_1_4CD8A56E35B158A2(::Struct_2_BC950E36747FB4C9& a1, ::Class_0_16E4307DCC419505_411* a2, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a3, ::Class_0_16E4307DCC419505_410* a4, ::Il2CppArray<::Class_0_16E4307DCC419505_411*>* a5)
	{
		return ((::Class_1_F86E0BB362A55B9C*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_0_16E4307DCC419505_411*, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*, ::Class_0_16E4307DCC419505_410*, ::Il2CppArray<::Class_0_16E4307DCC419505_411*>*))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_METHOD_1_4CD8A56E35B158A2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_59D634CA8DD784B2(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_METHOD_1_59D634CA8DD784B2_OFFSET))(this, a1);
	}

	::Struct_2_F1C4ECC5EFDCA1EF_2 Method_1_95A45E456041E511(::System::Boolean a1, ::Struct_2_BC950E36747FB4C9 a2)
	{
		return ((::Struct_2_F1C4ECC5EFDCA1EF_2(*)(::PVOID, ::System::Boolean, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_METHOD_1_95A45E456041E511_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C85C4DAB350DD5FC*>* Method_1_0F4B0D4257A65E23(::RPG::AvatarSystem::AvatarServant* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C85C4DAB350DD5FC*>*(*)(::PVOID, ::RPG::AvatarSystem::AvatarServant*))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_METHOD_1_0F4B0D4257A65E23_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* Method_1_4A6A1943BE9D6C19(::RPG::AvatarSystem::AvatarServant* a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>*(*)(::PVOID, ::RPG::AvatarSystem::AvatarServant*))((::PBYTE)hIl2Cpp + CLASS_1_9FFB5B2DF976EA73_METHOD_1_4A6A1943BE9D6C19_OFFSET))(this, a1);
	}
};
