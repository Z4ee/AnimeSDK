#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_76ED9B246ED58A54.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D8BECDCE48063EC7;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Color; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_49C77A01638CFE79_METHOD_2_63CDCFC43A9B7109_OFFSET UNITYSDK_OFFSET(0x18B82250)
#define CLASS_2_49C77A01638CFE79__CTOR_OFFSET UNITYSDK_OFFSET(0x18B82240)

inline static constexpr unsigned int Class_2_49C77A01638CFE79_TypeDefinitionIndex = 34453;

class Class_2_49C77A01638CFE79 : public ::Class_1_76ED9B246ED58A54
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Color* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Color* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Color*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_49C77A01638CFE79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_63CDCFC43A9B7109(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_49C77A01638CFE79_METHOD_2_63CDCFC43A9B7109_OFFSET))(this, a1, a2);
	}
};
