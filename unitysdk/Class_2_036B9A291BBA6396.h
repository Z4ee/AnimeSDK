#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/Property/PropertyCalculator_1.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_736;
class Class_1_A561DBBEB8754F4D;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_2_036B9A291BBA6396_METHOD_2_22621CB513042F77_OFFSET UNITYSDK_OFFSET(0x1428DE80)
#define CLASS_2_036B9A291BBA6396_METHOD_2_51D0E84DD9AFCCF0_OFFSET UNITYSDK_OFFSET(0x1428D700)
#define CLASS_2_036B9A291BBA6396_METHOD_2_5BF44C2073589F07_OFFSET UNITYSDK_OFFSET(0x1428D9A0)
#define CLASS_2_036B9A291BBA6396_METHOD_2_C40DF756F5780FF7_OFFSET UNITYSDK_OFFSET(0x1428DC80)
#define CLASS_2_036B9A291BBA6396_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x1428CD90)
#define CLASS_2_036B9A291BBA6396_METHOD_2_E9C5A8CF86EF4D91_1_OFFSET UNITYSDK_OFFSET(0x1428D620)
#define CLASS_2_036B9A291BBA6396_METHOD_2_E9C5A8CF86EF4D91_OFFSET UNITYSDK_OFFSET(0x1428D540)
#define CLASS_2_036B9A291BBA6396__CTOR_OFFSET UNITYSDK_OFFSET(0x1428CD00)
#define CLASS_2_036B9A291BBA6396___REGISTERSUMMATIONFORMULA_B__7_0_OFFSET UNITYSDK_OFFSET(0x1428DFA0)

inline static constexpr unsigned int Class_2_036B9A291BBA6396_TypeDefinitionIndex = 59929;

class Class_2_036B9A291BBA6396 : public ::RPG::AvatarSystem::Property::PropertyCalculator_1<::RPG::GameCore::FixPoint>
{
public:
	::Class_0_16E4307DCC419505_736* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_736* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_736*))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396__CTOR_OFFSET))(this, a1);
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

	::System::Void Method_2_5BF44C2073589F07(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396_METHOD_2_5BF44C2073589F07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C40DF756F5780FF7(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396_METHOD_2_C40DF756F5780FF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_22621CB513042F77(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396_METHOD_2_22621CB513042F77_OFFSET))(this, a1);
	}

	::Class_1_A561DBBEB8754F4D* __RegisterSummationFormula_b__7_0(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_1_A561DBBEB8754F4D*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_036B9A291BBA6396___REGISTERSUMMATIONFORMULA_B__7_0_OFFSET))(this, a1);
	}
};
