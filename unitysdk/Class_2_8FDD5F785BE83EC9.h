#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraSkillScreenEffectType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_8FDD5F785BE83EC9_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x144F9950)
#define CLASS_2_8FDD5F785BE83EC9_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x144F9A40)
#define CLASS_2_8FDD5F785BE83EC9_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x144F9630)
#define CLASS_2_8FDD5F785BE83EC9_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x144F9C10)
#define CLASS_2_8FDD5F785BE83EC9_METHOD_2_73C23613314BF1A1_OFFSET UNITYSDK_OFFSET(0x144F9810)
#define CLASS_2_8FDD5F785BE83EC9_METHOD_2_A6A27D8BC3D43854_OFFSET UNITYSDK_OFFSET(0x144F97A0)
#define CLASS_2_8FDD5F785BE83EC9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x144F95E0)
#define CLASS_2_8FDD5F785BE83EC9_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x144F96E0)
#define CLASS_2_8FDD5F785BE83EC9__CTOR_OFFSET UNITYSDK_OFFSET(0x144F9B10)
#define CLASS_2_8FDD5F785BE83EC9__ONBIND_OFFSET UNITYSDK_OFFSET(0x144F9580)
#define CLASS_2_8FDD5F785BE83EC9___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x144F9C70)
#define CLASS_2_8FDD5F785BE83EC9___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x144F9CD0)
#define CLASS_2_8FDD5F785BE83EC9___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x144F9BB0)

inline static constexpr unsigned int Class_2_8FDD5F785BE83EC9_TypeDefinitionIndex = 67115;

class Class_2_8FDD5F785BE83EC9 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animator* Field_2_1; // 0x60
	::System::Int32 Field_2_2; // 0x68
	::System::Boolean Field_2_3; // 0x6C
	::System::Boolean Field_2_4; // 0x6D
	::System::Int32 Field_2_5; // 0x70
	::System::Int32 Field_2_6; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_A6A27D8BC3D43854(::RPG::GameCore::SilverWolf999UltraSkillScreenEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SilverWolf999UltraSkillScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9_METHOD_2_A6A27D8BC3D43854_OFFSET))(this, a1);
	}

	::System::Void Method_2_73C23613314BF1A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9_METHOD_2_73C23613314BF1A1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FDD5F785BE83EC9___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
