#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtTransformAdaptor_2.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_4.h"
#include "unitysdk/Struct_2_6E1B724B14572104.h"

class Class_2_67C5F2015028CF70;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }

#define CLASS_2_90AE2F0EC659389B_METHOD_2_58D68FEBA7B5A778_OFFSET UNITYSDK_OFFSET(0x142B3950)
#define CLASS_2_90AE2F0EC659389B_METHOD_2_6AE5A36BDC758B17_OFFSET UNITYSDK_OFFSET(0x142B3FB0)
#define CLASS_2_90AE2F0EC659389B_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x142B3ED0)
#define CLASS_2_90AE2F0EC659389B_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0x142B3F20)
#define CLASS_2_90AE2F0EC659389B_ONSTART_OFFSET UNITYSDK_OFFSET(0x142B3850)
#define CLASS_2_90AE2F0EC659389B_ONSTOP_OFFSET UNITYSDK_OFFSET(0x142B38D0)
#define CLASS_2_90AE2F0EC659389B__CTOR_OFFSET UNITYSDK_OFFSET(0x142B4360)
#define CLASS_2_90AE2F0EC659389B___IFIXBASEPROXY_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x142B43A0)
#define CLASS_2_90AE2F0EC659389B___IFIXBASEPROXY_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0x142B43F0)
#define CLASS_2_90AE2F0EC659389B___IFIXBASEPROXY_ONSTART_OFFSET UNITYSDK_OFFSET(0x142B4380)
#define CLASS_2_90AE2F0EC659389B___IFIXBASEPROXY_ONSTOP_OFFSET UNITYSDK_OFFSET(0x142B4390)

inline static constexpr unsigned int Class_2_90AE2F0EC659389B_TypeDefinitionIndex = 50634;

class Class_2_90AE2F0EC659389B : public ::RPG::GameCore::RtTransformAdaptor_2<::Struct_2_6E1B724B14572104, ::Struct_2_52A902145F5BE51A_4>
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_90AE2F0EC659389B_TypeDefinitionIndex)->GetStaticField(0x6AFA0);
	}
	::Class_2_67C5F2015028CF70* Field_2_1; // 0x50
	::System::Int32 Field_2_2; // 0x58

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

	::System::Void Method_2_58D68FEBA7B5A778(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B_METHOD_2_58D68FEBA7B5A778_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy_OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B___IFIXBASEPROXY_ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B___IFIXBASEPROXY_ONSTOP_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B___IFIXBASEPROXY_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnRefreshPos(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_90AE2F0EC659389B___IFIXBASEPROXY_ONREFRESHPOS_OFFSET))(this, a1);
	}
};
