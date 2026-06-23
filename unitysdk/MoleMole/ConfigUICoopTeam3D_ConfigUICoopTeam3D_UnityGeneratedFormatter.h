#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICoopTeam3D_CameraConfigEnum.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICoopTeam3D; }
namespace MoleMole { class ConfigUICoopTeam3D_AvatarConfig; }
namespace MoleMole { class ConfigUICoopTeam3D_CameraConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOOPTEAM3D_CONFIGUICOOPTEAM3D_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B21DEE0)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_CONFIGUICOOPTEAM3D_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B21DEF0)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_CONFIGUICOOPTEAM3D_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1B21E0D0)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_CONFIGUICOOPTEAM3D_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B21E270)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_CONFIGUICOOPTEAM3D_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21E230)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICoopTeam3D_ConfigUICoopTeam3D_UnityGeneratedFormatter_TypeDefinitionIndex = 60090;

	class ConfigUICoopTeam3D_ConfigUICoopTeam3D_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICoopTeam3D*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUICoopTeam3D_AvatarConfig*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUICoopTeam3D_AvatarConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICoopTeam3D_ConfigUICoopTeam3D_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EB50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ConfigUICoopTeam3D_CameraConfigEnum, ::MoleMole::ConfigUICoopTeam3D_CameraConfig*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ConfigUICoopTeam3D_CameraConfigEnum, ::MoleMole::ConfigUICoopTeam3D_CameraConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICoopTeam3D_ConfigUICoopTeam3D_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EB58);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CONFIGUICOOPTEAM3D_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CONFIGUICOOPTEAM3D_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CONFIGUICOOPTEAM3D_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICoopTeam3D*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICoopTeam3D*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CONFIGUICOOPTEAM3D_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUICoopTeam3D*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICoopTeam3D*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CONFIGUICOOPTEAM3D_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
