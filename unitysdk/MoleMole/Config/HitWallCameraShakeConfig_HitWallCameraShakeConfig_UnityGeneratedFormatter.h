#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_HITWALLCAMERASHAKECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14948730)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_HITWALLCAMERASHAKECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14948740)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_HITWALLCAMERASHAKECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x14948920)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_HITWALLCAMERASHAKECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14948AC0)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_HITWALLCAMERASHAKECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x14948A80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitWallCameraShakeConfig_HitWallCameraShakeConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 48837;

	class HitWallCameraShakeConfig_HitWallCameraShakeConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::HitWallCameraShakeConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HitWallCameraShakeConfig_HitWallCameraShakeConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46860);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HitWallCameraShakeConfig_HitWallCameraShakeConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46868);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_HITWALLCAMERASHAKECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_HITWALLCAMERASHAKECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_HITWALLCAMERASHAKECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::HitWallCameraShakeConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::HitWallCameraShakeConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_HITWALLCAMERASHAKECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::HitWallCameraShakeConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HitWallCameraShakeConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_HITWALLCAMERASHAKECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
