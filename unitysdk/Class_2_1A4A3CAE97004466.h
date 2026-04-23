#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A79874B455F34F7D.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_EA5232D6CAD71030;
class Class_2_1BB8CA1042AACD99;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Filter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1A4A3CAE97004466_METHOD_2_05D60C6C65F9C1F1_OFFSET UNITYSDK_OFFSET(0x17D0EE60)
#define CLASS_2_1A4A3CAE97004466__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0EE50)

inline static constexpr unsigned int Class_2_1A4A3CAE97004466_TypeDefinitionIndex = 34176;

class Class_2_1A4A3CAE97004466 : public ::Class_1_A79874B455F34F7D
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_1A4A3CAE97004466__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_05D60C6C65F9C1F1(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_1A4A3CAE97004466_METHOD_2_05D60C6C65F9C1F1_OFFSET))(this, a1, a2);
	}
};
