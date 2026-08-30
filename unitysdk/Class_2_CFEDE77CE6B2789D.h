#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_A80FFA2F42BC210A;
class Class_2_C41EA7620AD7D128;
class Class_2_DC286ED3B0B23D49;
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_CFEDE77CE6B2789D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE877D20)
#define CLASS_2_CFEDE77CE6B2789D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE877F30)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_19CCC07C980409E4_1_OFFSET UNITYSDK_OFFSET(0xE877B00)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xE877A90)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xE877A40)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_C58BA76DADC5F97D_OFFSET UNITYSDK_OFFSET(0xE877B90)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xE877C60)
#define CLASS_2_CFEDE77CE6B2789D__CTOR_OFFSET UNITYSDK_OFFSET(0xE878110)
#define CLASS_2_CFEDE77CE6B2789D__ONBIND_OFFSET UNITYSDK_OFFSET(0xE877970)

inline static constexpr unsigned int Class_2_CFEDE77CE6B2789D_TypeDefinitionIndex = 71595;

class Class_2_CFEDE77CE6B2789D : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* CAKDJJLKLBP; // 0x0
	// static const ::System::String* NCGCBOFHGLK; // 0x0
	// static const ::System::String* JHOCKEGADFG; // 0x0
	::UnityEngine::Animation* EACCDAKEHLG; // 0x60
	::Class_2_C41EA7620AD7D128* KMMINGNJJPK; // 0x68
	::Class_2_DC286ED3B0B23D49* MBKDJAJJCCG; // 0x70
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x78
	::Class_2_A80FFA2F42BC210A* JDLNLMEECOI; // 0x80
	::System::Boolean JEAACCEBNAH; // 0x88

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
