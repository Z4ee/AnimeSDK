#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHadalZone_Common_ZoneLayerStatus.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIHadalZone_LayerConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_UIHADALZONE_LAYERCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16880C20)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_UIHADALZONE_LAYERCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16880C30)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_UIHADALZONE_LAYERCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16880E10)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_UIHADALZONE_LAYERCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16880FB0)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_UIHADALZONE_LAYERCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16880F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LayerConfig_UIHadalZone_LayerConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 54415;

	class UIHadalZone_LayerConfig_UIHadalZone_LayerConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIHadalZone_LayerConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIHadalZone_Common_ZoneLayerStatus, ::UnityEngine::GameObject*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIHadalZone_Common_ZoneLayerStatus, ::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerConfig_UIHadalZone_LayerConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46A90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Sprite*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Sprite*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerConfig_UIHadalZone_LayerConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46A98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_UIHADALZONE_LAYERCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_UIHADALZONE_LAYERCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_UIHADALZONE_LAYERCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIHadalZone_LayerConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIHadalZone_LayerConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_UIHADALZONE_LAYERCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::UIHadalZone_LayerConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalZone_LayerConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_UIHADALZONE_LAYERCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
