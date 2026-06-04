#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_76ED9B246ED58A54.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D8BECDCE48063EC7;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Filter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1A4A3CAE97004466_METHOD_2_05D60C6C65F9C1F1_OFFSET UNITYSDK_OFFSET(0x18B65220)
#define CLASS_2_1A4A3CAE97004466__CTOR_OFFSET UNITYSDK_OFFSET(0x18B65210)

inline static constexpr unsigned int Class_2_1A4A3CAE97004466_TypeDefinitionIndex = 34458;

class Class_2_1A4A3CAE97004466 : public ::Class_1_76ED9B246ED58A54
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_1A4A3CAE97004466__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_05D60C6C65F9C1F1(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_1A4A3CAE97004466_METHOD_2_05D60C6C65F9C1F1_OFFSET))(this, a1, a2);
	}
};
