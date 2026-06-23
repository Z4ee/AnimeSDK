#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIPhotoTaskRowWidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_1B5E8ECBDE012320_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x1336C690)
#define CLASS_2_1B5E8ECBDE012320_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1336C860)
#define CLASS_2_1B5E8ECBDE012320_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1336C930)
#define CLASS_2_1B5E8ECBDE012320__CTOR_OFFSET UNITYSDK_OFFSET(0x1336C920)

inline static constexpr unsigned int Class_2_1B5E8ECBDE012320_TypeDefinitionIndex = 83686;

class Class_2_1B5E8ECBDE012320 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIPhotoTaskRowWidgetController*>* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_4; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30
	::MonoUITableScrollV2* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B5E8ECBDE012320__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B5E8ECBDE012320_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B5E8ECBDE012320_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B5E8ECBDE012320_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
