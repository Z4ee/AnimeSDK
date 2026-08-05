#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigGalGameAvatarShow; }
namespace MoleMole { class GalGameFacialSetting; }
namespace MoleMole { class UIAvatarCommonLightSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CLASS_3_F9AFEB9D7DBC3E16_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19FF82E0)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CLASS_3_F9AFEB9D7DBC3E16_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF82F0)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CLASS_3_F9AFEB9D7DBC3E16_WRITE_OFFSET UNITYSDK_OFFSET(0x19FF8540)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CLASS_3_F9AFEB9D7DBC3E16__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FF8700)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CLASS_3_F9AFEB9D7DBC3E16__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF86C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalGameAvatarShow_Class_3_F9AFEB9D7DBC3E16_TypeDefinitionIndex = 59035;

	class ConfigGalGameAvatarShow_Class_3_F9AFEB9D7DBC3E16 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigGalGameAvatarShow*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCommonLightSetting*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCommonLightSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGalGameAvatarShow_Class_3_F9AFEB9D7DBC3E16_TypeDefinitionIndex)->GetStaticField(0x44C00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GalGameFacialSetting*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GalGameFacialSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGalGameAvatarShow_Class_3_F9AFEB9D7DBC3E16_TypeDefinitionIndex)->GetStaticField(0x44C08);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CLASS_3_F9AFEB9D7DBC3E16__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CLASS_3_F9AFEB9D7DBC3E16__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CLASS_3_F9AFEB9D7DBC3E16_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigGalGameAvatarShow*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShow*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CLASS_3_F9AFEB9D7DBC3E16_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigGalGameAvatarShow*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShow*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CLASS_3_F9AFEB9D7DBC3E16_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
