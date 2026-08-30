#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtTransformAdaptor_2.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_4.h"
#include "unitysdk/Struct_2_6E1B724B14572104.h"

class Class_2_67C5F2015028CF70;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }

#define CLASS_2_90AE2F0EC659389B_METHOD_2_6AE5A36BDC758B17_OFFSET UNITYSDK_OFFSET(0x162465B0)
#define CLASS_2_90AE2F0EC659389B_METHOD_2_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x16245F40)
#define CLASS_2_90AE2F0EC659389B_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x162464D0)
#define CLASS_2_90AE2F0EC659389B_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0x16246520)
#define CLASS_2_90AE2F0EC659389B_ONSTART_OFFSET UNITYSDK_OFFSET(0x16245E40)
#define CLASS_2_90AE2F0EC659389B_ONSTOP_OFFSET UNITYSDK_OFFSET(0x16245EC0)
#define CLASS_2_90AE2F0EC659389B__CTOR_OFFSET UNITYSDK_OFFSET(0x16246950)

inline static constexpr unsigned int Class_2_90AE2F0EC659389B_TypeDefinitionIndex = 54400;

class Class_2_90AE2F0EC659389B : public ::RPG::GameCore::RtTransformAdaptor_2<::Struct_2_6E1B724B14572104, ::Struct_2_52A902145F5BE51A_4>
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PBONHNPJPNL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_90AE2F0EC659389B_TypeDefinitionIndex)->GetStaticField(0x6CE10);
	}
	::Class_2_67C5F2015028CF70* CPIIOIPAAKK; // 0x50
	::System::Int32 ALEDPAHMLKC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B_ONSTART_OFFSET))(this);
	}

	::System::Void OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B_ONSTOP_OFFSET))(this);
	}

	::System::Void Method_2_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B_METHOD_2_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void OnRefreshPos(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B_ONREFRESHPOS_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_6AE5A36BDC758B17(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B_METHOD_2_6AE5A36BDC758B17_OFFSET))(a1, a2, a3);
	}
};
