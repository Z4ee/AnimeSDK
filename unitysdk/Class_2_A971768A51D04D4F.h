#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A971768A51D04D4F_Class_2_70BB056674D926CE_2;
class Class_2_A971768A51D04D4F_Class_2_CC03AAEE6FCC732C_38;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_A971768A51D04D4F_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x13056C70)
#define CLASS_2_A971768A51D04D4F_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x13056E70)
#define CLASS_2_A971768A51D04D4F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13056F40)
#define CLASS_2_A971768A51D04D4F__CTOR_OFFSET UNITYSDK_OFFSET(0x13056F30)

inline static constexpr unsigned int Class_2_A971768A51D04D4F_TypeDefinitionIndex = 80476;

class Class_2_A971768A51D04D4F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_0; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_A971768A51D04D4F_Class_2_70BB056674D926CE_2*>* Field_2_2; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_A971768A51D04D4F_Class_2_CC03AAEE6FCC732C_38*>* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A971768A51D04D4F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A971768A51D04D4F_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A971768A51D04D4F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A971768A51D04D4F_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
