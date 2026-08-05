#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigBoxCollider; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLASS_3_32A49E6310F6F8B9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12EFC090)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLASS_3_32A49E6310F6F8B9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12EFC0A0)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLASS_3_32A49E6310F6F8B9_WRITE_OFFSET UNITYSDK_OFFSET(0x12EFC300)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLASS_3_32A49E6310F6F8B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EFC4C0)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLASS_3_32A49E6310F6F8B9__CTOR_OFFSET UNITYSDK_OFFSET(0x12EFC480)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBoxCollider_Class_3_32A49E6310F6F8B9_TypeDefinitionIndex = 50745;

	class ConfigBoxCollider_Class_3_32A49E6310F6F8B9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigBoxCollider*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBoxCollider_Class_3_32A49E6310F6F8B9_TypeDefinitionIndex)->GetStaticField(0x4E640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLASS_3_32A49E6310F6F8B9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLASS_3_32A49E6310F6F8B9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLASS_3_32A49E6310F6F8B9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigBoxCollider*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigBoxCollider*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLASS_3_32A49E6310F6F8B9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigBoxCollider*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBoxCollider*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_CLASS_3_32A49E6310F6F8B9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
