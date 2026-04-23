#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A79874B455F34F7D.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_EA5232D6CAD71030;
class Class_2_1BB8CA1042AACD99;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Triple; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_091C5DD4AFD7B68A_METHOD_2_288E8FA84487E3A1_OFFSET UNITYSDK_OFFSET(0x17D44C50)
#define CLASS_2_091C5DD4AFD7B68A__CTOR_OFFSET UNITYSDK_OFFSET(0x17D44C40)

inline static constexpr unsigned int Class_2_091C5DD4AFD7B68A_TypeDefinitionIndex = 34166;

class Class_2_091C5DD4AFD7B68A : public ::Class_1_A79874B455F34F7D
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_091C5DD4AFD7B68A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_288E8FA84487E3A1(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_091C5DD4AFD7B68A_METHOD_2_288E8FA84487E3A1_OFFSET))(this, a1, a2);
	}
};
