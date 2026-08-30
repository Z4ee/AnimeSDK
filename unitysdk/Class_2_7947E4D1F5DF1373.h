#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraSkillScreenEffectType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_7947E4D1F5DF1373_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB554B70)
#define CLASS_2_7947E4D1F5DF1373_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB554C60)
#define CLASS_2_7947E4D1F5DF1373_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xB554700)
#define CLASS_2_7947E4D1F5DF1373_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xB5547B0)
#define CLASS_2_7947E4D1F5DF1373_METHOD_2_A6A27D8BC3D43854_OFFSET UNITYSDK_OFFSET(0xB554980)
#define CLASS_2_7947E4D1F5DF1373_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB5548C0)
#define CLASS_2_7947E4D1F5DF1373_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0xB554A50)
#define CLASS_2_7947E4D1F5DF1373__CTOR_OFFSET UNITYSDK_OFFSET(0xB554D30)
#define CLASS_2_7947E4D1F5DF1373__ONBIND_OFFSET UNITYSDK_OFFSET(0xB5546A0)

inline static constexpr unsigned int Class_2_7947E4D1F5DF1373_TypeDefinitionIndex = 71757;

class Class_2_7947E4D1F5DF1373 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::Animator* APPGGMLEPLN; // 0x60
	::System::Int32 LFKAMKNIJKN; // 0x68
	::System::Boolean BHCPLIFADEN; // 0x6C
	::System::Boolean AKBPNMEFGAO; // 0x6D
	::System::Int32 PFJFHHIGEGO; // 0x70
	::System::Int32 EBAKNDKIBNB; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7947E4D1F5DF1373__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7947E4D1F5DF1373__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7947E4D1F5DF1373_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7947E4D1F5DF1373_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7947E4D1F5DF1373_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_A6A27D8BC3D43854(::RPG::GameCore::SilverWolf999UltraSkillScreenEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SilverWolf999UltraSkillScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_7947E4D1F5DF1373_METHOD_2_A6A27D8BC3D43854_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7947E4D1F5DF1373_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7947E4D1F5DF1373_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7947E4D1F5DF1373_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
