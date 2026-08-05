#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_680AB6E273A984FB.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_8D9EF9CF8AE2FD40_METHOD_1_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x1563ACB0)
#define CLASS_1_8D9EF9CF8AE2FD40_METHOD_1_73C27F4717A3666C_OFFSET UNITYSDK_OFFSET(0x1563A510)
#define CLASS_1_8D9EF9CF8AE2FD40_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1563AAC0)
#define CLASS_1_8D9EF9CF8AE2FD40__CTOR_OFFSET UNITYSDK_OFFSET(0x1563A500)

inline static constexpr unsigned int Class_1_8D9EF9CF8AE2FD40_TypeDefinitionIndex = 68937;

class Class_1_8D9EF9CF8AE2FD40 : public ::System::Object
{
public:
	::Class_2_1A39E1B51756BF41* Field_1_0; // 0x10
	::UnityEngine::RectTransform* Field_1_7; // 0x18
	::UnityEngine::GameObject* Field_1_6; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D9EF9CF8AE2FD40__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73C27F4717A3666C(::System::UInt32 a1, ::Enum_3_680AB6E273A984FB a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_680AB6E273A984FB, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D9EF9CF8AE2FD40_METHOD_1_73C27F4717A3666C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D9EF9CF8AE2FD40_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D9EF9CF8AE2FD40_METHOD_1_07280B24DFAC0CA9_OFFSET))(this);
	}
};
