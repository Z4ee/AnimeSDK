#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D8EA8EDB8CF38D7F_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x139980A0)
#define CLASS_2_D8EA8EDB8CF38D7F_METHOD_2_B04B0693FD45DBCD_OFFSET UNITYSDK_OFFSET(0x13997E70)
#define CLASS_2_D8EA8EDB8CF38D7F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x139981E0)
#define CLASS_2_D8EA8EDB8CF38D7F__CTOR_OFFSET UNITYSDK_OFFSET(0x139981D0)

inline static constexpr unsigned int Class_2_D8EA8EDB8CF38D7F_TypeDefinitionIndex = 91567;

class Class_2_D8EA8EDB8CF38D7F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_11; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x20
	::UnityEngine::RectTransform* Field_2_10; // 0x28
	::UnityEngine::RectTransform* Field_2_8; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40
	::UnityEngine::RectTransform* Field_2_9; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x50
	::UnityEngine::RectTransform* Field_2_1; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EA8EDB8CF38D7F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B04B0693FD45DBCD(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D8EA8EDB8CF38D7F_METHOD_2_B04B0693FD45DBCD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EA8EDB8CF38D7F_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D8EA8EDB8CF38D7F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
