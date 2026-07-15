#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_A80FFA2F42BC210A;
class Class_2_C41EA7620AD7D128;
class Class_2_DC286ED3B0B23D49;
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_CFEDE77CE6B2789D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16A9D1F0)
#define CLASS_2_CFEDE77CE6B2789D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16A9D400)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_19CCC07C980409E4_1_OFFSET UNITYSDK_OFFSET(0x16A9CFD0)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x16A9CF50)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x16A9CF00)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_C58BA76DADC5F97D_OFFSET UNITYSDK_OFFSET(0x16A9D060)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16A9D130)
#define CLASS_2_CFEDE77CE6B2789D__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9D5D0)
#define CLASS_2_CFEDE77CE6B2789D__ONBIND_OFFSET UNITYSDK_OFFSET(0x16A9CE30)

inline static constexpr unsigned int Class_2_CFEDE77CE6B2789D_TypeDefinitionIndex = 68413;

class Class_2_CFEDE77CE6B2789D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::Class_2_DC286ED3B0B23D49* Field_2_3; // 0x60
	::Class_2_A80FFA2F42BC210A* Field_2_4; // 0x68
	::Class_2_C41EA7620AD7D128* Field_2_5; // 0x70
	::UnityEngine::Animation* Field_2_6; // 0x78
	::UnityEngine::Animation* Field_2_7; // 0x80
	::System::Boolean Field_2_8; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_19CCC07C980409E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C58BA76DADC5F97D(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_C58BA76DADC5F97D_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
