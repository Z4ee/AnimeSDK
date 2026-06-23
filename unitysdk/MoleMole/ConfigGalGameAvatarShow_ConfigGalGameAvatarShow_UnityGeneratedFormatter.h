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

#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CONFIGGALGAMEAVATARSHOW_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x170D0810)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CONFIGGALGAMEAVATARSHOW_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x170D0820)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CONFIGGALGAMEAVATARSHOW_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x170D0AC0)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CONFIGGALGAMEAVATARSHOW_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170D0CB0)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CONFIGGALGAMEAVATARSHOW_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x170D0C70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalGameAvatarShow_ConfigGalGameAvatarShow_UnityGeneratedFormatter_TypeDefinitionIndex = 58500;

	class ConfigGalGameAvatarShow_ConfigGalGameAvatarShow_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigGalGameAvatarShow*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCommonLightSetting*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCommonLightSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGalGameAvatarShow_ConfigGalGameAvatarShow_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x484B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GalGameFacialSetting*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GalGameFacialSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGalGameAvatarShow_ConfigGalGameAvatarShow_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x484B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CONFIGGALGAMEAVATARSHOW_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CONFIGGALGAMEAVATARSHOW_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CONFIGGALGAMEAVATARSHOW_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigGalGameAvatarShow*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShow*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CONFIGGALGAMEAVATARSHOW_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigGalGameAvatarShow*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShow*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_CONFIGGALGAMEAVATARSHOW_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
