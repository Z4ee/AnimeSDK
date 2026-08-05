#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57_1.h"

class Class_2_1129FC54D000F956;
class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_45528A349A272FF9_2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x12F0A2B0)
#define CLASS_2_45528A349A272FF9_2_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x12F0A570)
#define CLASS_2_45528A349A272FF9_2_METHOD_2_7A0E335452FE2056_OFFSET UNITYSDK_OFFSET(0x12F0A3E0)
#define CLASS_2_45528A349A272FF9_2_METHOD_2_9B59B42BE13F39B8_OFFSET UNITYSDK_OFFSET(0x12F0A140)
#define CLASS_2_45528A349A272FF9_2_METHOD_2_AD399A63502445B7_OFFSET UNITYSDK_OFFSET(0x12F0A600)
#define CLASS_2_45528A349A272FF9_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12F0A340)
#define CLASS_2_45528A349A272FF9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12F0A330)

inline static constexpr unsigned int Class_2_45528A349A272FF9_2_TypeDefinitionIndex = 71546;

class Class_2_45528A349A272FF9_2 : public ::Class_1_EEA0111A28582B57_1
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::MoleMole::MonoGamepadNavigatableList* Field_2_7; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_0; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45528A349A272FF9_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9B59B42BE13F39B8(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_45528A349A272FF9_2_METHOD_2_9B59B42BE13F39B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45528A349A272FF9_2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_45528A349A272FF9_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	static ::Class_2_45528A349A272FF9_2* Method_2_7A0E335452FE2056(::Class_2_1129FC54D000F956* a1, ::Class_2_A4D62D05D5EA8464* a2, ::MoleMole::UIControlCollection* a3)
	{
		return ((::Class_2_45528A349A272FF9_2*(*)(::Class_2_1129FC54D000F956*, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_45528A349A272FF9_2_METHOD_2_7A0E335452FE2056_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_AD399A63502445B7(::MoleMole::UIControlCollection* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_45528A349A272FF9_2_METHOD_2_AD399A63502445B7_OFFSET))(a1);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_1129FC54D000F956* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1129FC54D000F956*))((::PBYTE)hIl2Cpp + CLASS_2_45528A349A272FF9_2_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}
};
