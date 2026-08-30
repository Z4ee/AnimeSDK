#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class GUILayoutOption; }

#define CLASS_1_D6F7CE49B90DAD0D_METHOD_1_27A3B0E81A55EF85_OFFSET UNITYSDK_OFFSET(0xE047E80)
#define CLASS_1_D6F7CE49B90DAD0D_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0xE047D40)
#define CLASS_1_D6F7CE49B90DAD0D_METHOD_1_BB9E84D4A0178E06_OFFSET UNITYSDK_OFFSET(0xE047DE0)
#define CLASS_1_D6F7CE49B90DAD0D__CTOR_OFFSET UNITYSDK_OFFSET(0xE047CD0)

inline static constexpr unsigned int Class_1_D6F7CE49B90DAD0D_TypeDefinitionIndex = 49981;

class Class_1_D6F7CE49B90DAD0D : public ::System::Object
{
public:
	::System::String* IOCBBJLGEAJ; // 0x10
	::Il2CppArray<::System::String*>* PMNMJEKKIJP; // 0x18
	::UnityEngine::Vector2 BKIHBBGJAPK; // 0x20
	::System::Int32 MDBPILHONEH; // 0x28
	::System::Boolean LOFJANMAILC; // 0x2C
	::System::Single KHBCIBHMIOG; // 0x30

	::System::Void _ctor(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D6F7CE49B90DAD0D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB9E84D4A0178E06(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D6F7CE49B90DAD0D_METHOD_1_BB9E84D4A0178E06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6F7CE49B90DAD0D_METHOD_1_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Int32 Method_1_27A3B0E81A55EF85(::Il2CppArray<::UnityEngine::GUILayoutOption*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + CLASS_1_D6F7CE49B90DAD0D_METHOD_1_27A3B0E81A55EF85_OFFSET))(this, a1);
	}
};
