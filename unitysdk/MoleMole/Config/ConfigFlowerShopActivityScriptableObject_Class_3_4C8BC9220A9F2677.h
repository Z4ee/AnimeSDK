#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigFlowerShopActivityScriptableObject; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_CLASS_3_4C8BC9220A9F2677_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11709800)
#define MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_CLASS_3_4C8BC9220A9F2677_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11709810)
#define MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_CLASS_3_4C8BC9220A9F2677_WRITE_OFFSET UNITYSDK_OFFSET(0x117099A0)
#define MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_CLASS_3_4C8BC9220A9F2677__CCTOR_OFFSET UNITYSDK_OFFSET(0x11709B00)
#define MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_CLASS_3_4C8BC9220A9F2677__CTOR_OFFSET UNITYSDK_OFFSET(0x11709AC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFlowerShopActivityScriptableObject_Class_3_4C8BC9220A9F2677_TypeDefinitionIndex = 48060;

	class ConfigFlowerShopActivityScriptableObject_Class_3_4C8BC9220A9F2677 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::EFinishJudge, ::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::EFinishJudge, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFlowerShopActivityScriptableObject_Class_3_4C8BC9220A9F2677_TypeDefinitionIndex)->GetStaticField(0x4F920);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::System::String*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFlowerShopActivityScriptableObject_Class_3_4C8BC9220A9F2677_TypeDefinitionIndex)->GetStaticField(0x4F928);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_CLASS_3_4C8BC9220A9F2677__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_CLASS_3_4C8BC9220A9F2677__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_CLASS_3_4C8BC9220A9F2677_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_CLASS_3_4C8BC9220A9F2677_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_CLASS_3_4C8BC9220A9F2677_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
