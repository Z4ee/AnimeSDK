#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_61A5922E5046F385_3;
class Class_3_883E597458B91E77;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Config { class ConfigMisc_InteractRotate; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_7BBF5F34D942D04B_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1877AB00)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_200F7582A01996C4_OFFSET UNITYSDK_OFFSET(0x1877BB00)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_2D58832A36FF5158_OFFSET UNITYSDK_OFFSET(0x1877C0A0)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_3829C817A8B37449_OFFSET UNITYSDK_OFFSET(0x1877BD60)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_55A067445316F6B0_OFFSET UNITYSDK_OFFSET(0x1877B8F0)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_8E753D0A7DA5F566_OFFSET UNITYSDK_OFFSET(0x1877C1D0)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_9DB0323023867640_OFFSET UNITYSDK_OFFSET(0x1877B0F0)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_B37E4D8178745492_OFFSET UNITYSDK_OFFSET(0x1877C500)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_B8869979A49DEC15_OFFSET UNITYSDK_OFFSET(0x1877C110)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1877CD60)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1877C470)
#define CLASS_3_7BBF5F34D942D04B_METHOD_3_CEA82385BB2A2E49_OFFSET UNITYSDK_OFFSET(0x1877B2E0)
#define CLASS_3_7BBF5F34D942D04B_UPDATE_OFFSET UNITYSDK_OFFSET(0x1877AE30)
#define CLASS_3_7BBF5F34D942D04B__CTOR_OFFSET UNITYSDK_OFFSET(0x1877B0A0)

inline static constexpr unsigned int Class_3_7BBF5F34D942D04B_TypeDefinitionIndex = 75283;

class Class_3_7BBF5F34D942D04B : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::Single Field_3_2; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28

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

	static ::System::Single Method_3_9DB0323023867640(::Class_3_61A5922E5046F385_3* a1, ::System::Single a2, ::System::Boolean& a3)
	{
		return ((::System::Single(*)(::Class_3_61A5922E5046F385_3*, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_9DB0323023867640_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_CEA82385BB2A2E49(::Class_3_61A5922E5046F385_3* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5, ::System::String* a6, ::System::Int32 a7, ::System::Action_1<::System::Boolean>* a8)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_3*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Action*, ::System::String*, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_CEA82385BB2A2E49_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_3829C817A8B37449(::Class_3_61A5922E5046F385_3* a1, ::Class_3_F33F9DC5F4112336* a2, ::UnityEngine::AnimationCurve* a3, ::System::String* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_3*, ::Class_3_F33F9DC5F4112336*, ::UnityEngine::AnimationCurve*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_3829C817A8B37449_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_2D58832A36FF5158(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_2D58832A36FF5158_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_200F7582A01996C4(::Class_3_61A5922E5046F385_3* a1, ::MoleMole::Config::ConfigMisc_InteractRotate* a2, ::System::Single a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::System::Single(*)(::Class_3_61A5922E5046F385_3*, ::MoleMole::Config::ConfigMisc_InteractRotate*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_200F7582A01996C4_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_B8869979A49DEC15(::Class_3_61A5922E5046F385_3* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Action* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_3*, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_B8869979A49DEC15_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::Config::ConfigMisc_InteractRotate* Method_3_55A067445316F6B0(::System::Single a1, ::System::Single a2)
	{
		return ((::MoleMole::Config::ConfigMisc_InteractRotate*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_55A067445316F6B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8E753D0A7DA5F566(::Class_3_61A5922E5046F385_3* a1)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_3*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_8E753D0A7DA5F566_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_B37E4D8178745492(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_F33F9DC5F4112336* a2, ::Class_3_61A5922E5046F385_3* a3, ::Class_3_883E597458B91E77* a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_F33F9DC5F4112336*, ::Class_3_61A5922E5046F385_3*, ::Class_3_883E597458B91E77*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_B37E4D8178745492_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7BBF5F34D942D04B_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
