#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_61A5922E5046F385_5;
class Class_3_883E597458B91E77;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Config { class ConfigMisc_InteractRotate; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_7BBF5F34D942D04B_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x181450F0)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_0BACA33E905916A3_OFFSET UNITYSDK_OFFSET(0x18146660)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_200F7582A01996C4_OFFSET UNITYSDK_OFFSET(0x18145770)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_2D58832A36FF5158_OFFSET UNITYSDK_OFFSET(0x18147520)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_55A067445316F6B0_OFFSET UNITYSDK_OFFSET(0x181468E0)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_6CB29EBF1FF46848_OFFSET UNITYSDK_OFFSET(0x181459C0)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_B37E4D8178745492_OFFSET UNITYSDK_OFFSET(0x18145CF0)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_B8869979A49DEC15_OFFSET UNITYSDK_OFFSET(0x181471B0)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x181456E0)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18146850)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_CEA82385BB2A2E49_OFFSET UNITYSDK_OFFSET(0x18146AF0)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_EB90D3E66D88EF91_OFFSET UNITYSDK_OFFSET(0x18147270)
#define CLASS_3_7BBF5F34D942D04B_UPDATE_OFFSET UNITYSDK_OFFSET(0x18145420)
#define CLASS_3_7BBF5F34D942D04B__CTOR_OFFSET UNITYSDK_OFFSET(0x18145690)

inline static constexpr unsigned int Class_3_7BBF5F34D942D04B_TypeDefinitionIndex = 61619;

class Class_3_7BBF5F34D942D04B : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_200F7582A01996C4(::Class_3_61A5922E5046F385_5* a1, ::MoleMole::Config::ConfigMisc_InteractRotate* a2, ::System::Single a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::System::Single(*)(::Class_3_61A5922E5046F385_5*, ::MoleMole::Config::ConfigMisc_InteractRotate*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_200F7582A01996C4_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_6CB29EBF1FF46848(::Class_3_61A5922E5046F385_5* a1, ::Class_3_F33F9DC5F4112336* a2, ::UnityEngine::AnimationCurve* a3, ::System::String* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_5*, ::Class_3_F33F9DC5F4112336*, ::UnityEngine::AnimationCurve*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_6CB29EBF1FF46848_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_B37E4D8178745492(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_F33F9DC5F4112336* a2, ::Class_3_61A5922E5046F385_5* a3, ::Class_3_883E597458B91E77* a4)
	{
		return ((::System::Void(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_3_F33F9DC5F4112336*, ::Class_3_61A5922E5046F385_5*, ::Class_3_883E597458B91E77*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_B37E4D8178745492_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigMisc_InteractRotate* Method_3_55A067445316F6B0(::System::Single a1, ::System::Single a2)
	{
		return ((::MoleMole::Config::ConfigMisc_InteractRotate*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_55A067445316F6B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CEA82385BB2A2E49(::Class_3_61A5922E5046F385_5* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5, ::System::String* a6, ::System::Int32 a7, ::System::Action_1<::System::Boolean>* a8)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_5*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Action*, ::System::String*, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_CEA82385BB2A2E49_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Single Method_3_0BACA33E905916A3(::Class_3_61A5922E5046F385_5* a1, ::System::Single a2, ::System::Boolean& a3)
	{
		return ((::System::Single(*)(::Class_3_61A5922E5046F385_5*, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_0BACA33E905916A3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_B8869979A49DEC15(::Class_3_61A5922E5046F385_5* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Action* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_5*, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_B8869979A49DEC15_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_EB90D3E66D88EF91(::Class_3_61A5922E5046F385_5* a1)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_5*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_EB90D3E66D88EF91_OFFSET))(a1);
	}

	::System::Void Method_3_2D58832A36FF5158(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_2D58832A36FF5158_OFFSET))(this, a1);
	}
};
