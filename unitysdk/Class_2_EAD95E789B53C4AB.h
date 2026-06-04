#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_76ED9B246ED58A54.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D8BECDCE48063EC7;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_SamePointCount; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EAD95E789B53C4AB_METHOD_2_92DD19A25D47D2B3_OFFSET UNITYSDK_OFFSET(0x18AB65B0)
#define CLASS_2_EAD95E789B53C4AB__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB65A0)

inline static constexpr unsigned int Class_2_EAD95E789B53C4AB_TypeDefinitionIndex = 34447;

class Class_2_EAD95E789B53C4AB : public ::Class_1_76ED9B246ED58A54
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_EAD95E789B53C4AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_92DD19A25D47D2B3(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_EAD95E789B53C4AB_METHOD_2_92DD19A25D47D2B3_OFFSET))(this, a1, a2);
	}
};
