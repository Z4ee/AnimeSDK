#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_2150C540C0522B59_METHOD_2_4BAC33AC17F96A1C_OFFSET UNITYSDK_OFFSET(0x16D79740)
#define CLASS_2_2150C540C0522B59_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x16D796E0)
#define CLASS_2_2150C540C0522B59__CTOR_OFFSET UNITYSDK_OFFSET(0x16D797A0)
#define CLASS_2_2150C540C0522B59__ONBIND_OFFSET UNITYSDK_OFFSET(0x16D79680)

inline static constexpr unsigned int Class_2_2150C540C0522B59_TypeDefinitionIndex = 68903;

class Class_2_2150C540C0522B59 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x60
	::System::Int32 Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2150C540C0522B59__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2150C540C0522B59__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_2150C540C0522B59_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BAC33AC17F96A1C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2150C540C0522B59_METHOD_2_4BAC33AC17F96A1C_OFFSET))(this, a1);
	}
};
