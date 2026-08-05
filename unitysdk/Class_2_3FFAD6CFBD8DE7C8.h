#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_3FFAD6CFBD8DE7C8_Class_2_68CFB764EED37899;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_3FFAD6CFBD8DE7C8_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x150CF0B0)
#define CLASS_2_3FFAD6CFBD8DE7C8_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x150CEC70)
#define CLASS_2_3FFAD6CFBD8DE7C8_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x150CEEC0)
#define CLASS_2_3FFAD6CFBD8DE7C8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x150CF1C0)
#define CLASS_2_3FFAD6CFBD8DE7C8__CTOR_OFFSET UNITYSDK_OFFSET(0x150CF1B0)

inline static constexpr unsigned int Class_2_3FFAD6CFBD8DE7C8_TypeDefinitionIndex = 64875;

class Class_2_3FFAD6CFBD8DE7C8 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadModule* Field_2_11; // 0x18
	::UnityEngine::RectTransform* Field_2_9; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28
	::MonoUITableScrollV2* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_8; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x40
	::UIControllerExtensionData* Field_2_10; // 0x48
	::MoleMole::MonoGamepadModule* Field_2_4; // 0x50
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_3FFAD6CFBD8DE7C8_Class_2_68CFB764EED37899*>*>* Field_2_7; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x60
	::UnityEngine::RectTransform* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFAD6CFBD8DE7C8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3FFAD6CFBD8DE7C8_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3FFAD6CFBD8DE7C8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFAD6CFBD8DE7C8_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_3FFAD6CFBD8DE7C8_Class_2_68CFB764EED37899*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_3FFAD6CFBD8DE7C8_Class_2_68CFB764EED37899*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3FFAD6CFBD8DE7C8_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}
};
