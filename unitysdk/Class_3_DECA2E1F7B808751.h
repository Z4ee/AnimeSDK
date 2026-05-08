#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_61A5922E5046F385_4;
class Class_3_883E597458B91E77;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Config { class ConfigMisc_InteractRotate; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_DECA2E1F7B808751_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x10DB62E0)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_200F7582A01996C4_OFFSET UNITYSDK_OFFSET(0x10DB7580)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_2D58832A36FF5158_OFFSET UNITYSDK_OFFSET(0x10DB8210)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_3829C817A8B37449_OFFSET UNITYSDK_OFFSET(0x10DB7240)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_55A067445316F6B0_OFFSET UNITYSDK_OFFSET(0x10DB6FA0)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_99DB6D9AD83718DE_OFFSET UNITYSDK_OFFSET(0x10DB8280)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_9DB0323023867640_OFFSET UNITYSDK_OFFSET(0x10DB8020)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_B37E4D8178745492_OFFSET UNITYSDK_OFFSET(0x10DB77E0)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_B8869979A49DEC15_OFFSET UNITYSDK_OFFSET(0x10DB6950)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x10DB71B0)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10DB68C0)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_E11C43119A62965C_OFFSET UNITYSDK_OFFSET(0x10DB6A00)
#define CLASS_3_DECA2E1F7B808751_UPDATE_OFFSET UNITYSDK_OFFSET(0x10DB6610)
#define CLASS_3_DECA2E1F7B808751__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB6870)

inline static constexpr unsigned int Class_3_DECA2E1F7B808751_TypeDefinitionIndex = 67262;

class Class_3_DECA2E1F7B808751 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::Single Field_3_2; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_B8869979A49DEC15(::Class_3_61A5922E5046F385_4* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Action* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_4*, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_B8869979A49DEC15_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::Config::ConfigMisc_InteractRotate* Method_3_55A067445316F6B0(::System::Single a1, ::System::Single a2)
	{
		return ((::MoleMole::Config::ConfigMisc_InteractRotate*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_55A067445316F6B0_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_3829C817A8B37449(::Class_3_61A5922E5046F385_4* a1, ::Class_3_F33F9DC5F4112336* a2, ::UnityEngine::AnimationCurve* a3, ::System::String* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_4*, ::Class_3_F33F9DC5F4112336*, ::UnityEngine::AnimationCurve*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_3829C817A8B37449_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_E11C43119A62965C(::Class_3_61A5922E5046F385_4* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_4*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_E11C43119A62965C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_B37E4D8178745492(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_F33F9DC5F4112336* a2, ::Class_3_61A5922E5046F385_4* a3, ::Class_3_883E597458B91E77* a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_F33F9DC5F4112336*, ::Class_3_61A5922E5046F385_4*, ::Class_3_883E597458B91E77*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_B37E4D8178745492_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_200F7582A01996C4(::Class_3_61A5922E5046F385_4* a1, ::MoleMole::Config::ConfigMisc_InteractRotate* a2, ::System::Single a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::System::Single(*)(::Class_3_61A5922E5046F385_4*, ::MoleMole::Config::ConfigMisc_InteractRotate*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_200F7582A01996C4_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_3_9DB0323023867640(::Class_3_61A5922E5046F385_4* a1, ::System::Single a2, ::System::Boolean& a3)
	{
		return ((::System::Single(*)(::Class_3_61A5922E5046F385_4*, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_9DB0323023867640_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_2D58832A36FF5158(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_2D58832A36FF5158_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_99DB6D9AD83718DE(::Class_3_61A5922E5046F385_4* a1)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_4*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_99DB6D9AD83718DE_OFFSET))(a1);
	}
};
