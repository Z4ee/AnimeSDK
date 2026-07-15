#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_7807B2B04302CD7B_32;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_2DB5DEF3EA4B57A8_METHOD_2_446D667A20507CA9_OFFSET UNITYSDK_OFFSET(0x18B06610)
#define CLASS_2_2DB5DEF3EA4B57A8__CTOR_OFFSET UNITYSDK_OFFSET(0x18B06740)
#define CLASS_2_2DB5DEF3EA4B57A8__ONBIND_OFFSET UNITYSDK_OFFSET(0x18B064A0)

inline static constexpr unsigned int Class_2_2DB5DEF3EA4B57A8_TypeDefinitionIndex = 67983;

class Class_2_2DB5DEF3EA4B57A8 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::UI::Text* Field_2_1; // 0x68
	::UnityEngine::UI::Text* Field_2_2; // 0x70
	::UnityEngine::UI::Text* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DB5DEF3EA4B57A8__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DB5DEF3EA4B57A8__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_446D667A20507CA9(::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_32*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_32*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2DB5DEF3EA4B57A8_METHOD_2_446D667A20507CA9_OFFSET))(this, a1, a2);
	}
};
