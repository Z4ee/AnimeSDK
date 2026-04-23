#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_72D254AD950863C9_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12AD7900)
#define CLASS_2_72D254AD950863C9_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12AD7B10)
#define CLASS_2_72D254AD950863C9_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x12AD75B0)
#define CLASS_2_72D254AD950863C9_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12AD7D80)
#define CLASS_2_72D254AD950863C9_METHOD_2_67F08D1E4227BA89_OFFSET UNITYSDK_OFFSET(0x12AD7560)
#define CLASS_2_72D254AD950863C9_METHOD_2_7F3ACE763F49DF66_OFFSET UNITYSDK_OFFSET(0x12AD7430)
#define CLASS_2_72D254AD950863C9_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x12AD7830)
#define CLASS_2_72D254AD950863C9_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x12AD72B0)
#define CLASS_2_72D254AD950863C9_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12AD7820)
#define CLASS_2_72D254AD950863C9_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x12AD74B0)
#define CLASS_2_72D254AD950863C9__CTOR_OFFSET UNITYSDK_OFFSET(0x12AD7CF0)
#define CLASS_2_72D254AD950863C9__ONBIND_OFFSET UNITYSDK_OFFSET(0x12AD7200)
#define CLASS_2_72D254AD950863C9___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12AD7DE0)
#define CLASS_2_72D254AD950863C9___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12AD7E40)
#define CLASS_2_72D254AD950863C9___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12AD7D20)

inline static constexpr unsigned int Class_2_72D254AD950863C9_TypeDefinitionIndex = 66199;

class Class_2_72D254AD950863C9 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::UnityEngine::UI::Button* Field_2_0; // 0x60
	::UnityEngine::Animation* Field_2_2; // 0x68
	::UnityEngine::UI::Text* Field_2_1; // 0x70
	::System::Boolean Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_7F3ACE763F49DF66(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9_METHOD_2_7F3ACE763F49DF66_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_67F08D1E4227BA89(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9_METHOD_2_67F08D1E4227BA89_OFFSET))(this, a1);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D254AD950863C9___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
