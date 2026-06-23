#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B39BAED392653B65_Class_2_1B93097EA7401BC9;
class Class_2_B39BAED392653B65_Class_2_D72E10CE1BC97618;
namespace MoleMole { class ImgTextParserBase; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_B39BAED392653B65_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x11DEDA40)
#define CLASS_2_B39BAED392653B65_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11DEDAF0)
#define CLASS_2_B39BAED392653B65_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x11DED870)
#define CLASS_2_B39BAED392653B65__CTOR_OFFSET UNITYSDK_OFFSET(0x11DEDAE0)

inline static constexpr unsigned int Class_2_B39BAED392653B65_TypeDefinitionIndex = 45063;

class Class_2_B39BAED392653B65 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_B39BAED392653B65_Class_2_D72E10CE1BC97618*>* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UIImgText* Field_2_1; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_B39BAED392653B65_Class_2_1B93097EA7401BC9*>* Field_2_0; // 0x30
	::MoleMole::ImgTextParserBase* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B39BAED392653B65__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B39BAED392653B65_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B39BAED392653B65_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B39BAED392653B65_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
