#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A78E1709D6C0DB48_METHOD_2_01414A99793B5CD1_OFFSET UNITYSDK_OFFSET(0x10F682F0)
#define CLASS_2_A78E1709D6C0DB48_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x10F68010)
#define CLASS_2_A78E1709D6C0DB48_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x10F684D0)
#define CLASS_2_A78E1709D6C0DB48_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10F68610)
#define CLASS_2_A78E1709D6C0DB48__CTOR_OFFSET UNITYSDK_OFFSET(0x10F68600)

inline static constexpr unsigned int Class_2_A78E1709D6C0DB48_TypeDefinitionIndex = 89314;

class Class_2_A78E1709D6C0DB48 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_13; // 0x18
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_10; // 0x20
	::UnityEngine::Animation* Field_2_4; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::UnityEngine::RectTransform* Field_2_9; // 0x38
	::UnityEngine::Transform* Field_2_15; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x48
	::UnityEngine::Transform* Field_2_11; // 0x50
	::UnityEngine::Animation* Field_2_14; // 0x58
	::UnityEngine::Transform* Field_2_7; // 0x60
	::Class_2_CA67A9CEB871FFD3* Field_2_0; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x70
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_5; // 0x78
	::UIControllerExtensionData* Field_2_8; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A78E1709D6C0DB48__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A78E1709D6C0DB48_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A78E1709D6C0DB48_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A78E1709D6C0DB48_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_01414A99793B5CD1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A78E1709D6C0DB48_METHOD_2_01414A99793B5CD1_OFFSET))(this, a1, a2);
	}
};
