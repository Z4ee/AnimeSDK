#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Config { class ConfigVentCrawl; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGVENTCRAWL_CLASS_3_DEDCA21BEEC75574_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7FB3D0)
#define MOLEMOLE_CONFIG_CONFIGVENTCRAWL_CLASS_3_DEDCA21BEEC75574_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7FB3E0)
#define MOLEMOLE_CONFIG_CONFIGVENTCRAWL_CLASS_3_DEDCA21BEEC75574_WRITE_OFFSET UNITYSDK_OFFSET(0x1B7FB580)
#define MOLEMOLE_CONFIG_CONFIGVENTCRAWL_CLASS_3_DEDCA21BEEC75574__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7FB6E0)
#define MOLEMOLE_CONFIG_CONFIGVENTCRAWL_CLASS_3_DEDCA21BEEC75574__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FB6A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigVentCrawl_Class_3_DEDCA21BEEC75574_TypeDefinitionIndex = 44551;

	class ConfigVentCrawl_Class_3_DEDCA21BEEC75574 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigVentCrawl*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigVentCrawl_Class_3_DEDCA21BEEC75574_TypeDefinitionIndex)->GetStaticField(0x4A5B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVENTCRAWL_CLASS_3_DEDCA21BEEC75574__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVENTCRAWL_CLASS_3_DEDCA21BEEC75574__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVENTCRAWL_CLASS_3_DEDCA21BEEC75574_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigVentCrawl*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigVentCrawl*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVENTCRAWL_CLASS_3_DEDCA21BEEC75574_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigVentCrawl*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigVentCrawl*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVENTCRAWL_CLASS_3_DEDCA21BEEC75574_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
