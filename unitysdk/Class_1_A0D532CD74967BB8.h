#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AC9B5424B44F3EDE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A0D532CD74967BB8_METHOD_1_52E08184074EC685_OFFSET UNITYSDK_OFFSET(0x13F14E80)
#define CLASS_1_A0D532CD74967BB8_METHOD_1_76BAC80F7846E710_OFFSET UNITYSDK_OFFSET(0x13F14AD0)
#define CLASS_1_A0D532CD74967BB8__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F14A00)
#define CLASS_1_A0D532CD74967BB8__CTOR_OFFSET UNITYSDK_OFFSET(0x13F149F0)

inline static constexpr unsigned int Class_1_A0D532CD74967BB8_TypeDefinitionIndex = 43578;

class Class_1_A0D532CD74967BB8 : public ::System::Object
{
public:
	static ::MoleMole::Config::AnimatorEvent** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::AnimatorEvent**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0D532CD74967BB8_TypeDefinitionIndex)->GetStaticField(0x3E420);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Enum_3_AC9B5424B44F3EDE>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Enum_3_AC9B5424B44F3EDE>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0D532CD74967BB8_TypeDefinitionIndex)->GetStaticField(0x3E428);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0D532CD74967BB8_TypeDefinitionIndex)->GetStaticField(0xF350);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0D532CD74967BB8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0D532CD74967BB8__CCTOR_OFFSET))();
	}

	static ::Enum_3_AC9B5424B44F3EDE Method_1_76BAC80F7846E710(::MoleMole::Config::AnimatorEvent* a1)
	{
		return ((::Enum_3_AC9B5424B44F3EDE(*)(::MoleMole::Config::AnimatorEvent*))((::PBYTE)hIl2Cpp + CLASS_1_A0D532CD74967BB8_METHOD_1_76BAC80F7846E710_OFFSET))(a1);
	}

	static ::Enum_3_AC9B5424B44F3EDE Method_1_52E08184074EC685(::MoleMole::Config::AnimatorEvent* a1)
	{
		return ((::Enum_3_AC9B5424B44F3EDE(*)(::MoleMole::Config::AnimatorEvent*))((::PBYTE)hIl2Cpp + CLASS_1_A0D532CD74967BB8_METHOD_1_52E08184074EC685_OFFSET))(a1);
	}
};
