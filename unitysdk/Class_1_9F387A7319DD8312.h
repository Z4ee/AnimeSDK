#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_359;
class Class_0_16E4307DCC419505_360;
class Class_1_10B66F9FBD70F037;
class Class_1_50A3FB4415D517D6;
class Class_1_6ABE227FEB7213A4_1;
class Class_1_D4714BA97EC5BBC2;
class Class_1_F86E0BB362A55B9C;
class Class_2_036B9A291BBA6396;
namespace RPG::AvatarSystem { class AvatarServant; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_9F387A7319DD8312_GET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET UNITYSDK_OFFSET(0xC509230)
#define CLASS_1_9F387A7319DD8312_GET_PROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0xC509210)
#define CLASS_1_9F387A7319DD8312_GET_SERVANTREPOSITORY_OFFSET UNITYSDK_OFFSET(0xC5091D0)
#define CLASS_1_9F387A7319DD8312_GET_SERVANTSKILLREPOSITORY_OFFSET UNITYSDK_OFFSET(0xC5091F0)
#define CLASS_1_9F387A7319DD8312_METHOD_1_0F4B0D4257A65E23_OFFSET UNITYSDK_OFFSET(0xC509620)
#define CLASS_1_9F387A7319DD8312_METHOD_1_3C5F8E3777877644_OFFSET UNITYSDK_OFFSET(0xC509500)
#define CLASS_1_9F387A7319DD8312_METHOD_1_4A6A1943BE9D6C19_OFFSET UNITYSDK_OFFSET(0xC509810)
#define CLASS_1_9F387A7319DD8312_METHOD_1_95A45E456041E511_OFFSET UNITYSDK_OFFSET(0xC509590)
#define CLASS_1_9F387A7319DD8312_METHOD_1_B5B8C9C25E40D612_OFFSET UNITYSDK_OFFSET(0xC509250)
#define CLASS_1_9F387A7319DD8312_SET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET UNITYSDK_OFFSET(0xC509240)
#define CLASS_1_9F387A7319DD8312_SET_PROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0xC509220)
#define CLASS_1_9F387A7319DD8312_SET_SERVANTREPOSITORY_OFFSET UNITYSDK_OFFSET(0xC5091E0)
#define CLASS_1_9F387A7319DD8312_SET_SERVANTSKILLREPOSITORY_OFFSET UNITYSDK_OFFSET(0xC509200)
#define CLASS_1_9F387A7319DD8312__CTOR_OFFSET UNITYSDK_OFFSET(0xC509A20)

inline static constexpr unsigned int Class_1_9F387A7319DD8312_TypeDefinitionIndex = 50894;

class Class_1_9F387A7319DD8312 : public ::System::Object
{
public:
	::Class_1_6ABE227FEB7213A4_1* _ServantSkillRepository_k__BackingField; // 0x10
	::Class_1_10B66F9FBD70F037* _MultiplePathConfigRepository_k__BackingField; // 0x18
	::Class_2_036B9A291BBA6396* _PropertyCalculator_k__BackingField; // 0x20
	::Class_1_50A3FB4415D517D6* _ServantRepository_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312__CTOR_OFFSET))(this);
	}

	::Class_1_50A3FB4415D517D6* get_ServantRepository()
	{
		return ((::Class_1_50A3FB4415D517D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_GET_SERVANTREPOSITORY_OFFSET))(this);
	}

	::System::Void set_ServantRepository(::Class_1_50A3FB4415D517D6* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_50A3FB4415D517D6*))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_SET_SERVANTREPOSITORY_OFFSET))(this, value);
	}

	::Class_1_6ABE227FEB7213A4_1* get_ServantSkillRepository()
	{
		return ((::Class_1_6ABE227FEB7213A4_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_GET_SERVANTSKILLREPOSITORY_OFFSET))(this);
	}

	::System::Void set_ServantSkillRepository(::Class_1_6ABE227FEB7213A4_1* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6ABE227FEB7213A4_1*))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_SET_SERVANTSKILLREPOSITORY_OFFSET))(this, value);
	}

	::Class_2_036B9A291BBA6396* get_PropertyCalculator()
	{
		return ((::Class_2_036B9A291BBA6396*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_GET_PROPERTYCALCULATOR_OFFSET))(this);
	}

	::System::Void set_PropertyCalculator(::Class_2_036B9A291BBA6396* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_036B9A291BBA6396*))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_SET_PROPERTYCALCULATOR_OFFSET))(this, value);
	}

	::Class_1_10B66F9FBD70F037* get_MultiplePathConfigRepository()
	{
		return ((::Class_1_10B66F9FBD70F037*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_GET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET))(this);
	}

	::System::Void set_MultiplePathConfigRepository(::Class_1_10B66F9FBD70F037* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10B66F9FBD70F037*))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_SET_MULTIPLEPATHCONFIGREPOSITORY_OFFSET))(this, value);
	}

	::Class_1_F86E0BB362A55B9C* Method_1_B5B8C9C25E40D612(::Struct_2_BC950E36747FB4C9& a1, ::Class_0_16E4307DCC419505_359* a2, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a3, ::Class_0_16E4307DCC419505_360* a4, ::Il2CppArray<::Class_0_16E4307DCC419505_359*>* a5)
	{
		return ((::Class_1_F86E0BB362A55B9C*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_0_16E4307DCC419505_359*, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*, ::Class_0_16E4307DCC419505_360*, ::Il2CppArray<::Class_0_16E4307DCC419505_359*>*))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_METHOD_1_B5B8C9C25E40D612_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_3C5F8E3777877644(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_METHOD_1_3C5F8E3777877644_OFFSET))(this, a1);
	}

	::Struct_2_90E529DB4DCB014F Method_1_95A45E456041E511(::System::Boolean a1, ::Struct_2_BC950E36747FB4C9 a2)
	{
		return ((::Struct_2_90E529DB4DCB014F(*)(::PVOID, ::System::Boolean, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_METHOD_1_95A45E456041E511_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D4714BA97EC5BBC2*>* Method_1_0F4B0D4257A65E23(::RPG::AvatarSystem::AvatarServant* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D4714BA97EC5BBC2*>*(*)(::PVOID, ::RPG::AvatarSystem::AvatarServant*))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_METHOD_1_0F4B0D4257A65E23_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* Method_1_4A6A1943BE9D6C19(::RPG::AvatarSystem::AvatarServant* a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>*(*)(::PVOID, ::RPG::AvatarSystem::AvatarServant*))((::PBYTE)hIl2Cpp + CLASS_1_9F387A7319DD8312_METHOD_1_4A6A1943BE9D6C19_OFFSET))(this, a1);
	}
};
