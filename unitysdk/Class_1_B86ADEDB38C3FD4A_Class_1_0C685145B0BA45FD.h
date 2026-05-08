#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_295094A66D5C0F60.h"
#include "unitysdk/System/Object.h"

class Class_1_B86ADEDB38C3FD4A;
class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class NotificationBadge; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B86ADEDB38C3FD4A_CLASS_1_0C685145B0BA45FD_METHOD_1_6180C7A15834BA8B_OFFSET UNITYSDK_OFFSET(0x15935BC0)
#define CLASS_1_B86ADEDB38C3FD4A_CLASS_1_0C685145B0BA45FD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15935B40)
#define CLASS_1_B86ADEDB38C3FD4A_CLASS_1_0C685145B0BA45FD__CTOR_OFFSET UNITYSDK_OFFSET(0x15935B80)

inline static constexpr unsigned int Class_1_B86ADEDB38C3FD4A_Class_1_0C685145B0BA45FD_TypeDefinitionIndex = 66195;

class Class_1_B86ADEDB38C3FD4A_Class_1_0C685145B0BA45FD : public ::System::Object
{
public:
	::MoleMole::NotificationBadge* Field_1_8; // 0x10
	::Class_2_FDFE69FE7B72463B* Field_1_6; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_1_4; // 0x20
	::MoleMole::NotificationBadge* Field_1_7; // 0x28
	::Class_2_1A39E1B51756BF41* Field_1_3; // 0x30
	::UnityEngine::GameObject* Field_1_5; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_1_1; // 0x40
	::Il2CppArray<::System::Int32>* Field_1_9; // 0x48
	::UnityEngine::CanvasGroup* Field_1_2; // 0x50
	::Class_2_B4378B46E0020E85* Field_1_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86ADEDB38C3FD4A_CLASS_1_0C685145B0BA45FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86ADEDB38C3FD4A_CLASS_1_0C685145B0BA45FD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_1_6180C7A15834BA8B(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B86ADEDB38C3FD4A_CLASS_1_0C685145B0BA45FD_METHOD_1_6180C7A15834BA8B_OFFSET))(this, a1, a2);
	}
};
