#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::GameCore { class AvatarDemoConfigRow; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_DC41472B72D28028_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x15794D20)
#define CLASS_2_DC41472B72D28028_METHOD_2_33531301A55BB22F_OFFSET UNITYSDK_OFFSET(0x15794EB0)
#define CLASS_2_DC41472B72D28028_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15794BD0)
#define CLASS_2_DC41472B72D28028_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x15795170)
#define CLASS_2_DC41472B72D28028_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x157949A0)
#define CLASS_2_DC41472B72D28028_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x15794860)
#define CLASS_2_DC41472B72D28028_METHOD_2_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x157948E0)
#define CLASS_2_DC41472B72D28028_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x15795010)
#define CLASS_2_DC41472B72D28028__CTOR_OFFSET UNITYSDK_OFFSET(0x157951D0)
#define CLASS_2_DC41472B72D28028__ONBIND_OFFSET UNITYSDK_OFFSET(0x15794730)
#define CLASS_2_DC41472B72D28028__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15794C40)

inline static constexpr unsigned int Class_2_DC41472B72D28028_TypeDefinitionIndex = 72289;

class Class_2_DC41472B72D28028 : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::LocalizedText* DMCFNALLLMO; // 0x60
	::UnityEngine::Coroutine* FCDGNGBHHJD; // 0x68
	::RPG::GameCore::AvatarDemoConfigRow* IBPBJBOKKMF; // 0x70
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x78
	::RPG::Client::MonoInControlButton* HPODAOJOJMN; // 0x80
	::RPG::Client::AnimatorButton* CHBLDOPEEBE; // 0x88
	::RPG::Client::AnimatorButton* HPMCPFLHFPO; // 0x90
	::RPG::Client::MonoInControlButton* FDBAPJJPMMG; // 0x98
	::System::Boolean KMIJLOANOJD; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_BF9C25E762BD53B3_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_33531301A55BB22F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_33531301A55BB22F_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_82E992240300FB30_OFFSET))(this);
	}
};
