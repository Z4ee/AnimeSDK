#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_FB90F8F234309AE5_1_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x1247DE00)
#define CLASS_2_FB90F8F234309AE5_1_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x1247E010)
#define CLASS_2_FB90F8F234309AE5_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1247E150)
#define CLASS_2_FB90F8F234309AE5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1247E140)

inline static constexpr unsigned int Class_2_FB90F8F234309AE5_1_TypeDefinitionIndex = 63900;

class Class_2_FB90F8F234309AE5_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_4; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB90F8F234309AE5_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FB90F8F234309AE5_1_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FB90F8F234309AE5_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB90F8F234309AE5_1_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
