#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class TutorialNodeCollector_TutorialNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TUTORIALNODECOLLECTOR_CLEAR_OFFSET UNITYSDK_OFFSET(0xE301C10)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_GET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xE302040)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_METHOD_5_B3C2C518B158EAB8_OFFSET UNITYSDK_OFFSET(0xE301900)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_METHOD_5_E17350B69258B9AC_OFFSET UNITYSDK_OFFSET(0xE301FA0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE301400)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_ONOTHERNODEDYNAMICKEYCLEAR_OFFSET UNITYSDK_OFFSET(0xE301A70)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_SETDYNAMICKEY_1_OFFSET UNITYSDK_OFFSET(0xE300BC0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_SETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xE300920)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_START_OFFSET UNITYSDK_OFFSET(0xE3011B0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TRYREGISTERALL_OFFSET UNITYSDK_OFFSET(0xE3015F0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_UNREGISTERALL_OFFSET UNITYSDK_OFFSET(0xE301D50)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE3020E0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE302080)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialNodeCollector_TypeDefinitionIndex = 68207;

	class TutorialNodeCollector : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::UInt32* StaticGet_NMGGONGNANO()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TutorialNodeCollector_TypeDefinitionIndex)->GetStaticField(0x139C0);
		}
		::System::Boolean AppendDynamicKey; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TutorialNodeCollector_TutorialNode*>* _CollectNodeList; // 0x20
		::System::String* PHPHCFPJHDC; // 0x28
		::System::UInt32 OGHMKKLHGNP; // 0x30
		::System::Boolean GNPEBFHAHMK; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void TryRegisterAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TRYREGISTERALL_OFFSET))(this);
		}

		::System::Void OnOtherNodeDynamicKeyClear(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_ONOTHERNODEDYNAMICKEYCLEAR_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_CLEAR_OFFSET))(this);
		}

		::System::Void UnregisterAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_UNREGISTERALL_OFFSET))(this);
		}

		::System::Void SetDynamicKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_SETDYNAMICKEY_OFFSET))(this, a1);
		}

		::System::Void SetDynamicKey_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_SETDYNAMICKEY_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_B3C2C518B158EAB8(::RPG::Client::TutorialNodeCollector_TutorialNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TutorialNodeCollector_TutorialNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_METHOD_5_B3C2C518B158EAB8_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_E17350B69258B9AC(::RPG::Client::TutorialNodeCollector_TutorialNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TutorialNodeCollector_TutorialNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_METHOD_5_E17350B69258B9AC_OFFSET))(this, a1);
		}

		::System::String* get_DynamicKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_GET_DYNAMICKEY_OFFSET))(this);
		}
	};
}
