#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_99453328B5498AC3_Struct_2_EE378F408834D807.h"
#include "unitysdk/Struct_2_FBA4730A60751401_3.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_99453328B5498AC3;
class Class_3_29454AE7C8CF7C61;
namespace RPG::Client { class PetPartyTestMono_MemberSlotConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }

#define RPG_CLIENT_PETPARTYTESTMONO_ACTIVATE_OFFSET UNITYSDK_OFFSET(0xDAECEC0)
#define RPG_CLIENT_PETPARTYTESTMONO_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0xDAED610)
#define RPG_CLIENT_PETPARTYTESTMONO_METHOD_5_4653AA7B0CE24EF9_OFFSET UNITYSDK_OFFSET(0xDAEDBE0)
#define RPG_CLIENT_PETPARTYTESTMONO_METHOD_5_87C16C6F790E111E_OFFSET UNITYSDK_OFFSET(0xDAED8F0)
#define RPG_CLIENT_PETPARTYTESTMONO_METHOD_5_A1A30F2297BABC89_OFFSET UNITYSDK_OFFSET(0xDAECBD0)
#define RPG_CLIENT_PETPARTYTESTMONO_METHOD_5_A491A9BC20C26AD6_OFFSET UNITYSDK_OFFSET(0xDAED420)
#define RPG_CLIENT_PETPARTYTESTMONO_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xDAEC650)
#define RPG_CLIENT_PETPARTYTESTMONO_REFRESHFORMATION_OFFSET UNITYSDK_OFFSET(0xDAED980)
#define RPG_CLIENT_PETPARTYTESTMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xDAEDF40)

namespace RPG::Client
{
	inline static constexpr unsigned int PetPartyTestMono_TypeDefinitionIndex = 60209;

	class PetPartyTestMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Reflection::FieldInfo** StaticGet_JMHFPLCFBMA()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(PetPartyTestMono_TypeDefinitionIndex)->GetStaticField(0x1BD00);
		}
		::System::String* PartyName; // 0x18
		::System::String* LeaderUniqueName; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::PetPartyTestMono_MemberSlotConfig*>* Members; // 0x28
		::System::Boolean DrawGizmos; // 0x30
		::System::Collections::Generic::List_1<::Class_1_99453328B5498AC3_Struct_2_EE378F408834D807>* HBLFGDBKNBH; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_FBA4730A60751401_3>* Method_5_A1A30F2297BABC89()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_FBA4730A60751401_3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_METHOD_5_A1A30F2297BABC89_OFFSET))(this);
		}

		::System::Void Activate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_ACTIVATE_OFFSET))(this);
		}

		::System::Void Deactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_DEACTIVATE_OFFSET))(this);
		}

		::System::Void RefreshFormation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_REFRESHFORMATION_OFFSET))(this);
		}

		::System::Boolean Method_5_A491A9BC20C26AD6(::RPG::GameCore::GameWorld* a1, ::Class_1_99453328B5498AC3* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::Class_1_99453328B5498AC3*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_METHOD_5_A491A9BC20C26AD6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_87C16C6F790E111E(::RPG::GameCore::GameWorld* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_METHOD_5_87C16C6F790E111E_OFFSET))(this, a1, a2);
		}

		static ::Class_3_29454AE7C8CF7C61* Method_5_4653AA7B0CE24EF9(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Class_3_29454AE7C8CF7C61*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_METHOD_5_4653AA7B0CE24EF9_OFFSET))(a1);
		}
	};
}
