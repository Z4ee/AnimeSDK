#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD4EC20BEBA8A2DA.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D8BECDCE48063EC7;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_RandomN; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2EA004DB7950B5DD_METHOD_2_185501A111C38671_OFFSET UNITYSDK_OFFSET(0x17B8DBB0)
#define CLASS_2_2EA004DB7950B5DD__CTOR_OFFSET UNITYSDK_OFFSET(0x17B8DBA0)

inline static constexpr unsigned int Class_2_2EA004DB7950B5DD_TypeDefinitionIndex = 34841;

class Class_2_2EA004DB7950B5DD : public ::Class_1_CD4EC20BEBA8A2DA
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_RandomN* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_RandomN* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_RandomN*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_2EA004DB7950B5DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_185501A111C38671(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_2EA004DB7950B5DD_METHOD_2_185501A111C38671_OFFSET))(this, a1, a2);
	}
};
