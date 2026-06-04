#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_1_A903ABC2202D622C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E87E20A464EBF92F_METHOD_1_9E74019CFA2E00CC_OFFSET UNITYSDK_OFFSET(0x18C81A60)
#define CLASS_1_E87E20A464EBF92F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18C81B30)
#define CLASS_1_E87E20A464EBF92F__CTOR_OFFSET UNITYSDK_OFFSET(0x18C81B20)
#define CLASS_1_E87E20A464EBF92F___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18C81C10)

inline static constexpr unsigned int Class_1_E87E20A464EBF92F_TypeDefinitionIndex = 38732;

class Class_1_E87E20A464EBF92F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A903ABC2202D622C*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::RPG::GameCore::LittleGameAbilityAttributeType Field_1_2; // 0x1C
	::RPG::GameCore::FixPoint Field_1_3; // 0x20
	::RPG::GameCore::FixPoint Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87E20A464EBF92F__CTOR_OFFSET))(this);
	}

	static ::Class_1_E87E20A464EBF92F* Method_1_9E74019CFA2E00CC(::RPG::GameCore::LittleGameAbilityAttributeType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::Class_1_E87E20A464EBF92F*(*)(::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E87E20A464EBF92F_METHOD_1_9E74019CFA2E00CC_OFFSET))(a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87E20A464EBF92F_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87E20A464EBF92F___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
