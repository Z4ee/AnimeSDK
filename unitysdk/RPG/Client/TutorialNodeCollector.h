#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class TutorialNodeCollector_TutorialNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TUTORIALNODECOLLECTOR_CLEAR_OFFSET UNITYSDK_OFFSET(0xA645700)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_METHOD_5_B3C2C518B158EAB8_OFFSET UNITYSDK_OFFSET(0xA6455A0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_METHOD_5_E17350B69258B9AC_OFFSET UNITYSDK_OFFSET(0xA645CC0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA645120)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_SETDYNAMICKEY_1_OFFSET UNITYSDK_OFFSET(0xA645B90)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_SETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xA645A60)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_START_OFFSET UNITYSDK_OFFSET(0xA644F30)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TRYREGISTERALL_OFFSET UNITYSDK_OFFSET(0xA6452C0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_UNREGISTERALL_OFFSET UNITYSDK_OFFSET(0xA645830)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xA645DC0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA645D60)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialNodeCollector_TypeDefinitionIndex = 55692;

	class TutorialNodeCollector : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::UInt32* StaticGet_Field_5_5()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TutorialNodeCollector_TypeDefinitionIndex)->GetStaticField(0x104D0);
		}
		::System::Boolean AppendDynamicKey; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TutorialNodeCollector_TutorialNode*>* _CollectNodeList; // 0x20
		::System::String* Field_5_2; // 0x28
		::System::UInt32 Field_5_3; // 0x30
		::System::Boolean Field_5_4; // 0x34

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
	};
}
