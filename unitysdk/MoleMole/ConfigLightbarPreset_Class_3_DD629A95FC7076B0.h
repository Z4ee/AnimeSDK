#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LightbarCurveEntry.h"
#include "unitysdk/MoleMole/LightbarPresetEntry.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigLightbarPreset; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGLIGHTBARPRESET_CLASS_3_DD629A95FC7076B0_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4C3330)
#define MOLEMOLE_CONFIGLIGHTBARPRESET_CLASS_3_DD629A95FC7076B0_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4C3340)
#define MOLEMOLE_CONFIGLIGHTBARPRESET_CLASS_3_DD629A95FC7076B0_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4C34D0)
#define MOLEMOLE_CONFIGLIGHTBARPRESET_CLASS_3_DD629A95FC7076B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4C3630)
#define MOLEMOLE_CONFIGLIGHTBARPRESET_CLASS_3_DD629A95FC7076B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C35F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLightbarPreset_Class_3_DD629A95FC7076B0_TypeDefinitionIndex = 58563;

	class ConfigLightbarPreset_Class_3_DD629A95FC7076B0 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigLightbarPreset*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LightbarCurveEntry>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LightbarCurveEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLightbarPreset_Class_3_DD629A95FC7076B0_TypeDefinitionIndex)->GetStaticField(0x3C9F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LightbarPresetEntry>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LightbarPresetEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLightbarPreset_Class_3_DD629A95FC7076B0_TypeDefinitionIndex)->GetStaticField(0x3C9F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_CLASS_3_DD629A95FC7076B0__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_CLASS_3_DD629A95FC7076B0__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_CLASS_3_DD629A95FC7076B0_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigLightbarPreset*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigLightbarPreset*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_CLASS_3_DD629A95FC7076B0_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigLightbarPreset*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLightbarPreset*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_CLASS_3_DD629A95FC7076B0_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
