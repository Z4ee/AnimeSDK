#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHitInhalationEffect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CLASS_3_37582A7E21B7A420_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14863C50)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CLASS_3_37582A7E21B7A420_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14863C60)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CLASS_3_37582A7E21B7A420_WRITE_OFFSET UNITYSDK_OFFSET(0x14863F70)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CLASS_3_37582A7E21B7A420__CCTOR_OFFSET UNITYSDK_OFFSET(0x14864190)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CLASS_3_37582A7E21B7A420__CTOR_OFFSET UNITYSDK_OFFSET(0x14864150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitInhalationEffect_Class_3_37582A7E21B7A420_TypeDefinitionIndex = 87076;

	class ConfigHitInhalationEffect_Class_3_37582A7E21B7A420 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHitInhalationEffect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitInhalationEffect_Class_3_37582A7E21B7A420_TypeDefinitionIndex)->GetStaticField(0x42300);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitInhalationEffect_Class_3_37582A7E21B7A420_TypeDefinitionIndex)->GetStaticField(0x42308);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CLASS_3_37582A7E21B7A420__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CLASS_3_37582A7E21B7A420__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CLASS_3_37582A7E21B7A420_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHitInhalationEffect*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHitInhalationEffect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CLASS_3_37582A7E21B7A420_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHitInhalationEffect*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitInhalationEffect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CLASS_3_37582A7E21B7A420_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
