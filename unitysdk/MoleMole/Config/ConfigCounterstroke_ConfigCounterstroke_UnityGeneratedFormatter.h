#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AniamtorParamsSetting; }
namespace MoleMole::Config { class ConfigCounterstroke; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CONFIGCOUNTERSTROKE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x159E64B0)
#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CONFIGCOUNTERSTROKE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x159E64C0)
#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CONFIGCOUNTERSTROKE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x159E6810)
#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CONFIGCOUNTERSTROKE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x159E6A60)
#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CONFIGCOUNTERSTROKE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x159E6A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCounterstroke_ConfigCounterstroke_UnityGeneratedFormatter_TypeDefinitionIndex = 52909;

	class ConfigCounterstroke_ConfigCounterstroke_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCounterstroke*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCounterstroke_ConfigCounterstroke_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49210);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCounterstroke_ConfigCounterstroke_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49218);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AniamtorParamsSetting*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AniamtorParamsSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCounterstroke_ConfigCounterstroke_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49220);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CONFIGCOUNTERSTROKE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CONFIGCOUNTERSTROKE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CONFIGCOUNTERSTROKE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCounterstroke*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCounterstroke*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CONFIGCOUNTERSTROKE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigCounterstroke*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCounterstroke*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CONFIGCOUNTERSTROKE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
