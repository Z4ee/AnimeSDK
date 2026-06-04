#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_7807B2B04302CD7B_30;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_2DB5DEF3EA4B57A8_METHOD_2_446D667A20507CA9_OFFSET UNITYSDK_OFFSET(0xA4C39C0)
#define CLASS_2_2DB5DEF3EA4B57A8__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C3AF0)
#define CLASS_2_2DB5DEF3EA4B57A8__ONBIND_OFFSET UNITYSDK_OFFSET(0xA4C3850)
#define CLASS_2_2DB5DEF3EA4B57A8___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA4C3B20)

inline static constexpr unsigned int Class_2_2DB5DEF3EA4B57A8_TypeDefinitionIndex = 66547;

class Class_2_2DB5DEF3EA4B57A8 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::UnityEngine::UI::Text* Field_2_3; // 0x78
	::UnityEngine::UI::Text* Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DB5DEF3EA4B57A8__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DB5DEF3EA4B57A8__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_446D667A20507CA9(::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_30*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_30*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2DB5DEF3EA4B57A8_METHOD_2_446D667A20507CA9_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DB5DEF3EA4B57A8___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
