#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_3B5C0619191B2C3A_Class_0_16E7307DCC43CB2C_34;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_3B5C0619191B2C3A_METHOD_2_28141171CE1C76E0_OFFSET UNITYSDK_OFFSET(0x15865DD0)
#define CLASS_2_3B5C0619191B2C3A_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x158660D0)
#define CLASS_2_3B5C0619191B2C3A_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x158660B0)
#define CLASS_2_3B5C0619191B2C3A_METHOD_2_7C8C42EDBECF6828_OFFSET UNITYSDK_OFFSET(0x15865E70)
#define CLASS_2_3B5C0619191B2C3A_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x158660C0)
#define CLASS_2_3B5C0619191B2C3A_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x15865F50)
#define CLASS_2_3B5C0619191B2C3A_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15865FE0)
#define CLASS_2_3B5C0619191B2C3A_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15865230)
#define CLASS_2_3B5C0619191B2C3A__CTOR_OFFSET UNITYSDK_OFFSET(0x15866050)

inline static constexpr unsigned int Class_2_3B5C0619191B2C3A_TypeDefinitionIndex = 62319;

class Class_2_3B5C0619191B2C3A : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* Field_2_2; // 0x10
	::System::String* Field_2_4; // 0x18
	::System::String* Field_2_1; // 0x20
	::System::String* Field_2_3; // 0x28
	::Il2CppArray<::System::String*>* Field_2_5; // 0x30
	::Class_2_3B5C0619191B2C3A_Class_0_16E7307DCC43CB2C_34* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_28141171CE1C76E0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_METHOD_2_28141171CE1C76E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_7C8C42EDBECF6828(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_METHOD_2_7C8C42EDBECF6828_OFFSET))(a1, a2);
	}
};
