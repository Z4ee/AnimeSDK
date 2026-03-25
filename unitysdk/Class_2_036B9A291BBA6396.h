#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/Property/PropertyCalculator_1.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_583;
class Class_1_4F1450C7202739F5;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_2_036B9A291BBA6396_METHOD_2_22621CB513042F77_OFFSET UNITYSDK_OFFSET(0x89F7560)
#define CLASS_2_036B9A291BBA6396_METHOD_2_2E141897D790120B_OFFSET UNITYSDK_OFFSET(0x89F72C0)
#define CLASS_2_036B9A291BBA6396_METHOD_2_51D0E84DD9AFCCF0_OFFSET UNITYSDK_OFFSET(0x89F6D00)
#define CLASS_2_036B9A291BBA6396_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x89F60F0)
#define CLASS_2_036B9A291BBA6396_METHOD_2_E9C5A8CF86EF4D91_1_OFFSET UNITYSDK_OFFSET(0x89F6C20)
#define CLASS_2_036B9A291BBA6396_METHOD_2_E9C5A8CF86EF4D91_OFFSET UNITYSDK_OFFSET(0x89F6B40)
#define CLASS_2_036B9A291BBA6396_METHOD_2_F631D9DBCCA8BA75_OFFSET UNITYSDK_OFFSET(0x89F6FA0)
#define CLASS_2_036B9A291BBA6396__CTOR_OFFSET UNITYSDK_OFFSET(0x89F6060)
#define CLASS_2_036B9A291BBA6396___REGISTERSUMMATIONFORMULA_B__7_0_OFFSET UNITYSDK_OFFSET(0x89F7680)

inline static constexpr unsigned int Class_2_036B9A291BBA6396_TypeDefinitionIndex = 50927;

class Class_2_036B9A291BBA6396 : public ::RPG::AvatarSystem::Property::PropertyCalculator_1<::RPG::GameCore::FixPoint>
{
public:
	::Class_0_16E4307DCC419505_583* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_583* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_583*))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_E9C5A8CF86EF4D91(::RPG::GameCore::AvatarPropertyType a1, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396_METHOD_2_E9C5A8CF86EF4D91_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E9C5A8CF86EF4D91_1(::RPG::GameCore::AvatarPropertyType a1, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396_METHOD_2_E9C5A8CF86EF4D91_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396_METHOD_2_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void Method_2_51D0E84DD9AFCCF0(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::GameCore::AvatarPropertyType a3, ::RPG::GameCore::AvatarPropertyType a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396_METHOD_2_51D0E84DD9AFCCF0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F631D9DBCCA8BA75(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396_METHOD_2_F631D9DBCCA8BA75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2E141897D790120B(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396_METHOD_2_2E141897D790120B_OFFSET))(this, a1);
	}

	::System::Void Method_2_22621CB513042F77(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396_METHOD_2_22621CB513042F77_OFFSET))(this, a1);
	}

	::Class_1_4F1450C7202739F5* __RegisterSummationFormula_b__7_0(::RPG::GameCore::AvatarPropertyType propertyType)
	{
		return ((::Class_1_4F1450C7202739F5*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396___REGISTERSUMMATIONFORMULA_B__7_0_OFFSET))(this, propertyType);
	}
};
