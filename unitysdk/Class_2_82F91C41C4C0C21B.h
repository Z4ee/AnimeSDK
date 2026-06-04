#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginMapImmediatelyFrameCapture; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_82F91C41C4C0C21B_METHOD_2_3262AB6EF58C6FBE_OFFSET UNITYSDK_OFFSET(0x144EB670)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_37CF7377CBA6E635_OFFSET UNITYSDK_OFFSET(0x144EAF00)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0x144EB390)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_9304AC14A4CF8961_OFFSET UNITYSDK_OFFSET(0x144EB620)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0x144EAEB0)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x144EB340)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x144EAE40)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_BAE1C23C3E6356EC_OFFSET UNITYSDK_OFFSET(0x144EAC70)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x144EB5B0)
#define CLASS_2_82F91C41C4C0C21B_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x144EB750)
#define CLASS_2_82F91C41C4C0C21B__CCTOR_OFFSET UNITYSDK_OFFSET(0x144EB6D0)
#define CLASS_2_82F91C41C4C0C21B__CTOR_OFFSET UNITYSDK_OFFSET(0x144EB6C0)

inline static constexpr unsigned int Class_2_82F91C41C4C0C21B_TypeDefinitionIndex = 65522;

class Class_2_82F91C41C4C0C21B : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_82F91C41C4C0C21B_TypeDefinitionIndex)->GetStaticField(0x48440);
	}
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_2_BAE1C23C3E6356EC(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_BAE1C23C3E6356EC_OFFSET))(a1);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_37CF7377CBA6E635()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_37CF7377CBA6E635_OFFSET))(this);
	}

	::System::Void Method_2_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_8A4C6820E5F5715F_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginMapImmediatelyFrameCapture* Method_2_9304AC14A4CF8961()
	{
		return ((::RPG::Client::MonoEffectPluginMapImmediatelyFrameCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_9304AC14A4CF8961_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_3262AB6EF58C6FBE()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_3262AB6EF58C6FBE_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_82F91C41C4C0C21B_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}
};
