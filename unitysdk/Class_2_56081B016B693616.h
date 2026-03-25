#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_56081B016B693616_METHOD_2_2D0EF4C8B528FC1E_OFFSET UNITYSDK_OFFSET(0x8D94D80)
#define CLASS_2_56081B016B693616__CTOR_OFFSET UNITYSDK_OFFSET(0x8D95000)
#define CLASS_2_56081B016B693616__ONBIND_OFFSET UNITYSDK_OFFSET(0x8D94AF0)
#define CLASS_2_56081B016B693616___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8D95030)

inline static constexpr unsigned int Class_2_56081B016B693616_TypeDefinitionIndex = 58492;

class Class_2_56081B016B693616 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_1; // 0x70
	::UnityEngine::UI::Text* Field_2_3; // 0x78
	::UnityEngine::UI::Image* Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56081B016B693616__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56081B016B693616__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2D0EF4C8B528FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_56081B016B693616_METHOD_2_2D0EF4C8B528FC1E_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56081B016B693616___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
