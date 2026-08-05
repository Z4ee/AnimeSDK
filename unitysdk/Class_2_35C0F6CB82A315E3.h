#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_35C0F6CB82A315E3_Class_2_40AC881AC36B2F6D_4;
class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_35C0F6CB82A315E3_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x16F7C300)
#define CLASS_2_35C0F6CB82A315E3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16F7C390)
#define CLASS_2_35C0F6CB82A315E3_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x16F7C170)
#define CLASS_2_35C0F6CB82A315E3__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7C380)

inline static constexpr unsigned int Class_2_35C0F6CB82A315E3_TypeDefinitionIndex = 62501;

class Class_2_35C0F6CB82A315E3 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_35C0F6CB82A315E3_Class_2_40AC881AC36B2F6D_4*>* Field_2_1; // 0x20
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_7; // 0x28
	::MoleMole::UIGeneralButtonController* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35C0F6CB82A315E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_35C0F6CB82A315E3_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35C0F6CB82A315E3_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_35C0F6CB82A315E3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
