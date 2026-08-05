#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUIMainCity; }
namespace MoleMole { class ConfigUIMainCity_ChallengeTipsConfig; }
namespace MoleMole { class ConfigUIMainCity_InteractConfig; }
namespace MoleMole { class ConfigUIMainCity_MissionTipsConfig; }
namespace MoleMole { class ConfigUIMainCity_OngoingConfig; }
namespace MoleMole { class ConfigUIMainCity_ViceCharacterConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGUIMAINCITY_CLASS_3_DDD97BA7ED2395A9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B578590)
#define MOLEMOLE_CONFIGUIMAINCITY_CLASS_3_DDD97BA7ED2395A9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B5785A0)
#define MOLEMOLE_CONFIGUIMAINCITY_CLASS_3_DDD97BA7ED2395A9_WRITE_OFFSET UNITYSDK_OFFSET(0x1B578950)
#define MOLEMOLE_CONFIGUIMAINCITY_CLASS_3_DDD97BA7ED2395A9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B578BC0)
#define MOLEMOLE_CONFIGUIMAINCITY_CLASS_3_DDD97BA7ED2395A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1B578B80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainCity_Class_3_DDD97BA7ED2395A9_TypeDefinitionIndex = 79740;

	class ConfigUIMainCity_Class_3_DDD97BA7ED2395A9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUIMainCity*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_InteractConfig*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_InteractConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_Class_3_DDD97BA7ED2395A9_TypeDefinitionIndex)->GetStaticField(0x4D4F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_MissionTipsConfig*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_MissionTipsConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_Class_3_DDD97BA7ED2395A9_TypeDefinitionIndex)->GetStaticField(0x4D4F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_ViceCharacterConfig*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_ViceCharacterConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_Class_3_DDD97BA7ED2395A9_TypeDefinitionIndex)->GetStaticField(0x4D500);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_ChallengeTipsConfig*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_ChallengeTipsConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_Class_3_DDD97BA7ED2395A9_TypeDefinitionIndex)->GetStaticField(0x4D508);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_OngoingConfig*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_OngoingConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_Class_3_DDD97BA7ED2395A9_TypeDefinitionIndex)->GetStaticField(0x4D510);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_CLASS_3_DDD97BA7ED2395A9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_CLASS_3_DDD97BA7ED2395A9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_CLASS_3_DDD97BA7ED2395A9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIMainCity*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIMainCity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_CLASS_3_DDD97BA7ED2395A9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUIMainCity*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainCity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_CLASS_3_DDD97BA7ED2395A9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
