#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginMapImmediatelyFrameCapture; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_DA06ECED6CB3A30C_METHOD_2_3262AB6EF58C6FBE_OFFSET UNITYSDK_OFFSET(0xB53FCB0)
#define CLASS_2_DA06ECED6CB3A30C_METHOD_2_37CF7377CBA6E635_OFFSET UNITYSDK_OFFSET(0xB53F540)
#define CLASS_2_DA06ECED6CB3A30C_METHOD_2_76D558CF9960A3B7_OFFSET UNITYSDK_OFFSET(0xB53F2E0)
#define CLASS_2_DA06ECED6CB3A30C_METHOD_2_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0xB53F9D0)
#define CLASS_2_DA06ECED6CB3A30C_METHOD_2_9304AC14A4CF8961_OFFSET UNITYSDK_OFFSET(0xB53FC60)
#define CLASS_2_DA06ECED6CB3A30C_METHOD_2_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0xB53F4F0)
#define CLASS_2_DA06ECED6CB3A30C_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0xB53F980)
#define CLASS_2_DA06ECED6CB3A30C_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xB53F480)
#define CLASS_2_DA06ECED6CB3A30C_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xB53FBF0)
#define CLASS_2_DA06ECED6CB3A30C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB53FD10)
#define CLASS_2_DA06ECED6CB3A30C__CTOR_OFFSET UNITYSDK_OFFSET(0xB53FD00)

inline static constexpr unsigned int Class_2_DA06ECED6CB3A30C_TypeDefinitionIndex = 70042;

class Class_2_DA06ECED6CB3A30C : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_LFDEADJEJPD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DA06ECED6CB3A30C_TypeDefinitionIndex)->GetStaticField(0x60950);
	}
	::System::Boolean DEBHLAMIOAE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA06ECED6CB3A30C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DA06ECED6CB3A30C__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_2_76D558CF9960A3B7(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DA06ECED6CB3A30C_METHOD_2_76D558CF9960A3B7_OFFSET))(a1);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_DA06ECED6CB3A30C_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA06ECED6CB3A30C_METHOD_2_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA06ECED6CB3A30C_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DA06ECED6CB3A30C_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_37CF7377CBA6E635()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA06ECED6CB3A30C_METHOD_2_37CF7377CBA6E635_OFFSET))(this);
	}

	::System::Void Method_2_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA06ECED6CB3A30C_METHOD_2_8A4C6820E5F5715F_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginMapImmediatelyFrameCapture* Method_2_9304AC14A4CF8961()
	{
		return ((::RPG::Client::MonoEffectPluginMapImmediatelyFrameCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA06ECED6CB3A30C_METHOD_2_9304AC14A4CF8961_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_3262AB6EF58C6FBE()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA06ECED6CB3A30C_METHOD_2_3262AB6EF58C6FBE_OFFSET))(this);
	}
};
