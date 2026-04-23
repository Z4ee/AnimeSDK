#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtTransformAdaptor_2.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_4.h"
#include "unitysdk/Struct_2_6E1B724B14572104.h"

class Class_2_123F4D9119B4969B;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }

#define CLASS_2_16062CAA0BE2BD00_METHOD_2_6A3E2A8DF44B5E23_OFFSET UNITYSDK_OFFSET(0xB013A40)
#define CLASS_2_16062CAA0BE2BD00_METHOD_2_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0xB0133D0)
#define CLASS_2_16062CAA0BE2BD00_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xB013960)
#define CLASS_2_16062CAA0BE2BD00_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0xB0139B0)
#define CLASS_2_16062CAA0BE2BD00_ONSTART_OFFSET UNITYSDK_OFFSET(0xB0132D0)
#define CLASS_2_16062CAA0BE2BD00_ONSTOP_OFFSET UNITYSDK_OFFSET(0xB013350)
#define CLASS_2_16062CAA0BE2BD00__CTOR_OFFSET UNITYSDK_OFFSET(0xB013D40)
#define CLASS_2_16062CAA0BE2BD00___IFIXBASEPROXY_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xB013D80)
#define CLASS_2_16062CAA0BE2BD00___IFIXBASEPROXY_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0xB013DD0)
#define CLASS_2_16062CAA0BE2BD00___IFIXBASEPROXY_ONSTART_OFFSET UNITYSDK_OFFSET(0xB013D60)
#define CLASS_2_16062CAA0BE2BD00___IFIXBASEPROXY_ONSTOP_OFFSET UNITYSDK_OFFSET(0xB013D70)

inline static constexpr unsigned int Class_2_16062CAA0BE2BD00_TypeDefinitionIndex = 49967;

class Class_2_16062CAA0BE2BD00 : public ::RPG::GameCore::RtTransformAdaptor_2<::Struct_2_6E1B724B14572104, ::Struct_2_52A902145F5BE51A_4>
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_16062CAA0BE2BD00_TypeDefinitionIndex)->GetStaticField(0x6B7B0);
	}
	::Class_2_123F4D9119B4969B* Field_2_2; // 0x50
	::System::Int32 Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16062CAA0BE2BD00__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16062CAA0BE2BD00_ONSTART_OFFSET))(this);
	}

	::System::Void OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16062CAA0BE2BD00_ONSTOP_OFFSET))(this);
	}

	::System::Void Method_2_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_16062CAA0BE2BD00_METHOD_2_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_16062CAA0BE2BD00_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void OnRefreshPos(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_16062CAA0BE2BD00_ONREFRESHPOS_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_6A3E2A8DF44B5E23(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_16062CAA0BE2BD00_METHOD_2_6A3E2A8DF44B5E23_OFFSET))(a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16062CAA0BE2BD00___IFIXBASEPROXY_ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16062CAA0BE2BD00___IFIXBASEPROXY_ONSTOP_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAnimatorMove(::UnityEngine::Animator* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_16062CAA0BE2BD00___IFIXBASEPROXY_ONANIMATORMOVE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnRefreshPos(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_16062CAA0BE2BD00___IFIXBASEPROXY_ONREFRESHPOS_OFFSET))(this, P0);
	}
};
