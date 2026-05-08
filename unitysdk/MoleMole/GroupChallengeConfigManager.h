#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_380E15D819BCBADA;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x170D5EE0)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_222951B8BA7FC1B0_OFFSET UNITYSDK_OFFSET(0x170D5180)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_44C6956149352354_OFFSET UNITYSDK_OFFSET(0x170D5D80)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_6156EF6FFD0A172B_OFFSET UNITYSDK_OFFSET(0x170D5E10)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x170D52B0)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_D12B7AF287E2C1C1_OFFSET UNITYSDK_OFFSET(0x170D56E0)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_DD788187B6D83B98_OFFSET UNITYSDK_OFFSET(0x170D5760)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_EE0137E8EED79B71_OFFSET UNITYSDK_OFFSET(0x170D5C30)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x170D5170)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x170D4FC0)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170D50D0)

namespace MoleMole
{
	inline static constexpr unsigned int GroupChallengeConfigManager_TypeDefinitionIndex = 74644;

	class GroupChallengeConfigManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_380E15D819BCBADA*>** StaticGet_Field_1_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_380E15D819BCBADA*>**)Il2CppClass::FromTypeDefinitionIndex(GroupChallengeConfigManager_TypeDefinitionIndex)->GetStaticField(0x479B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_RESET_OFFSET))();
		}

		static ::System::Boolean Method_1_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_F0088C88851A7DFB_OFFSET))();
		}

		static ::Class_1_380E15D819BCBADA* Method_1_222951B8BA7FC1B0(::System::Int32 a1)
		{
			return ((::Class_1_380E15D819BCBADA*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_222951B8BA7FC1B0_OFFSET))(a1);
		}

		static ::System::Void Method_1_62167C28EC14CC63()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_62167C28EC14CC63_OFFSET))();
		}

		static ::System::Boolean Method_1_EE0137E8EED79B71(::System::Int32 a1, ::Class_1_380E15D819BCBADA*& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Class_1_380E15D819BCBADA*&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_EE0137E8EED79B71_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* Method_1_44C6956149352354(::System::Single a1, ::System::Action_1<::System::Single>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_44C6956149352354_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_1_DD788187B6D83B98(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_DD788187B6D83B98_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::Foundation::AssetPath>* Method_1_6156EF6FFD0A172B()
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_6156EF6FFD0A172B_OFFSET))();
		}

		static ::Il2CppArray<::Foundation::AssetPath>* Method_1_D12B7AF287E2C1C1()
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_D12B7AF287E2C1C1_OFFSET))();
		}

		static ::System::String* Method_1_126AB3935214AA22()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_METHOD_1_126AB3935214AA22_OFFSET))();
		}
	};
}
