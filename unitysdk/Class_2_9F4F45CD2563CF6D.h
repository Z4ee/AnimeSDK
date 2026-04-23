#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA5232D6CAD71030.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_0E117AC86D8E5BCA;
class Class_2_1BB8CA1042AACD99;
class Class_4_D581BED103406713;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9F4F45CD2563CF6D_METHOD_2_3129BF8E58CCD3BD_OFFSET UNITYSDK_OFFSET(0x17C671A0)
#define CLASS_2_9F4F45CD2563CF6D_METHOD_2_56BA11EE61598EB4_OFFSET UNITYSDK_OFFSET(0x17C66F30)
#define CLASS_2_9F4F45CD2563CF6D__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1EE80)

inline static constexpr unsigned int Class_2_9F4F45CD2563CF6D_TypeDefinitionIndex = 34015;

class Class_2_9F4F45CD2563CF6D : public ::Class_1_EA5232D6CAD71030
{
public:
	::Class_4_D581BED103406713* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_2; // 0x48

	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_1BB8CA1042AACD99* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_1BB8CA1042AACD99*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_9F4F45CD2563CF6D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_1BB8CA1042AACD99* Method_2_56BA11EE61598EB4(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_1BB8CA1042AACD99*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_9F4F45CD2563CF6D_METHOD_2_56BA11EE61598EB4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_1BB8CA1042AACD99*>* Method_2_3129BF8E58CCD3BD(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1BB8CA1042AACD99*>*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_9F4F45CD2563CF6D_METHOD_2_3129BF8E58CCD3BD_OFFSET))(this, a1);
	}
};
