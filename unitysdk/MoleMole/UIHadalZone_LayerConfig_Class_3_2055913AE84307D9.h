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

#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_CLASS_3_2055913AE84307D9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x172FAA90)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_CLASS_3_2055913AE84307D9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x172FAAA0)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_CLASS_3_2055913AE84307D9_WRITE_OFFSET UNITYSDK_OFFSET(0x172FAC30)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_CLASS_3_2055913AE84307D9__CCTOR_OFFSET UNITYSDK_OFFSET(0x172FAD90)
#define MOLEMOLE_UIHADALZONE_LAYERCONFIG_CLASS_3_2055913AE84307D9__CTOR_OFFSET UNITYSDK_OFFSET(0x172FAD50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LayerConfig_Class_3_2055913AE84307D9_TypeDefinitionIndex = 40225;

	class UIHadalZone_LayerConfig_Class_3_2055913AE84307D9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIHadalZone_LayerConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIHadalZone_Common_ZoneLayerStatus, ::UnityEngine::GameObject*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIHadalZone_Common_ZoneLayerStatus, ::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerConfig_Class_3_2055913AE84307D9_TypeDefinitionIndex)->GetStaticField(0x4ACB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Sprite*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Sprite*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerConfig_Class_3_2055913AE84307D9_TypeDefinitionIndex)->GetStaticField(0x4ACB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_CLASS_3_2055913AE84307D9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_CLASS_3_2055913AE84307D9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_CLASS_3_2055913AE84307D9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIHadalZone_LayerConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIHadalZone_LayerConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_CLASS_3_2055913AE84307D9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::UIHadalZone_LayerConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalZone_LayerConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG_CLASS_3_2055913AE84307D9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
