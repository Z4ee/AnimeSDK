#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_680AB6E273A984FB.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_F10D665778799ACD_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x13E15DB0)
#define CLASS_1_F10D665778799ACD_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x13E15C60)
#define CLASS_1_F10D665778799ACD_METHOD_1_E116F20323FFD767_OFFSET UNITYSDK_OFFSET(0x17DD07E0)
#define CLASS_1_F10D665778799ACD__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD07D0)

inline static constexpr unsigned int Class_1_F10D665778799ACD_TypeDefinitionIndex = 40535;

class Class_1_F10D665778799ACD : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_3; // 0x10
	::UnityEngine::RectTransform* Field_1_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_1_1; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F10D665778799ACD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E116F20323FFD767(::System::UInt32 a1, ::Enum_3_680AB6E273A984FB a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_680AB6E273A984FB, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F10D665778799ACD_METHOD_1_E116F20323FFD767_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F10D665778799ACD_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F10D665778799ACD_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}
};
