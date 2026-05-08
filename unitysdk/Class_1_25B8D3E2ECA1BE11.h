#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_680AB6E273A984FB.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_25B8D3E2ECA1BE11_METHOD_1_8B804866C90AFDC3_OFFSET UNITYSDK_OFFSET(0x113E5A30)
#define CLASS_1_25B8D3E2ECA1BE11_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x113E5DD0)
#define CLASS_1_25B8D3E2ECA1BE11_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x113E58E0)
#define CLASS_1_25B8D3E2ECA1BE11__CTOR_OFFSET UNITYSDK_OFFSET(0x113E58D0)

inline static constexpr unsigned int Class_1_25B8D3E2ECA1BE11_TypeDefinitionIndex = 79640;

class Class_1_25B8D3E2ECA1BE11 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_3; // 0x10
	::UnityEngine::RectTransform* Field_1_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_1_1; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25B8D3E2ECA1BE11__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25B8D3E2ECA1BE11_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25B8D3E2ECA1BE11_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_8B804866C90AFDC3(::System::UInt32 a1, ::Enum_3_680AB6E273A984FB a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_680AB6E273A984FB, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_25B8D3E2ECA1BE11_METHOD_1_8B804866C90AFDC3_OFFSET))(this, a1, a2, a3);
	}
};
