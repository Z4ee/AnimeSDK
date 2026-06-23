#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUIFish; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGUIFISH_CONFIGUIFISH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18F4E5A0)
#define MOLEMOLE_CONFIGUIFISH_CONFIGUIFISH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18F4E5B0)
#define MOLEMOLE_CONFIGUIFISH_CONFIGUIFISH_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18F4E790)
#define MOLEMOLE_CONFIGUIFISH_CONFIGUIFISH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F4E930)
#define MOLEMOLE_CONFIGUIFISH_CONFIGUIFISH_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F4E8F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIFish_ConfigUIFish_UnityGeneratedFormatter_TypeDefinitionIndex = 53166;

	class ConfigUIFish_ConfigUIFish_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUIFish*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraShake*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraShake*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIFish_ConfigUIFish_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x305A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_CONFIGUIFISH_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_CONFIGUIFISH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_CONFIGUIFISH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIFish*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIFish*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_CONFIGUIFISH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUIFish*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFish*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_CONFIGUIFISH_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
