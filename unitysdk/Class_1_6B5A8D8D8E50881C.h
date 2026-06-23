#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6B5A8D8D8E50881C_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x13FE56E0)
#define CLASS_1_6B5A8D8D8E50881C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13FE57E0)
#define CLASS_1_6B5A8D8D8E50881C_METHOD_1_34E34C8E383659FB_OFFSET UNITYSDK_OFFSET(0x13FE58D0)
#define CLASS_1_6B5A8D8D8E50881C_METHOD_1_6109CEC5B67A9A30_OFFSET UNITYSDK_OFFSET(0x13FE5950)
#define CLASS_1_6B5A8D8D8E50881C_METHOD_1_A66B981E1EA3E23D_OFFSET UNITYSDK_OFFSET(0x13FE5F80)
#define CLASS_1_6B5A8D8D8E50881C__CTOR_OFFSET UNITYSDK_OFFSET(0x13FE55B0)

inline static constexpr unsigned int Class_1_6B5A8D8D8E50881C_TypeDefinitionIndex = 61141;

class Class_1_6B5A8D8D8E50881C : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_1_3; // 0x10
	::UnityEngine::Animation* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_1_4; // 0x20
	::UnityEngine::Transform* Field_1_6; // 0x28
	::MoleMole::UIWindowController* Field_1_7; // 0x30
	::System::Boolean Field_1_10; // 0x38
	::System::Int32 Field_1_5; // 0x3C
	::System::Int32 Field_1_9; // 0x40

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3, ::System::Boolean a4, ::UnityEngine::Animation* a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_1_6B5A8D8D8E50881C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_34E34C8E383659FB(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_6B5A8D8D8E50881C_METHOD_1_34E34C8E383659FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_6109CEC5B67A9A30(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_6B5A8D8D8E50881C_METHOD_1_6109CEC5B67A9A30_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B5A8D8D8E50881C_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_A66B981E1EA3E23D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B5A8D8D8E50881C_METHOD_1_A66B981E1EA3E23D_OFFSET))(this);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B5A8D8D8E50881C_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}
};
