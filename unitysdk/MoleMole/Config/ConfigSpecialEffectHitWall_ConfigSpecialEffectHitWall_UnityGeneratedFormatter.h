#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterDamageDecalType.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitWall; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CONFIGSPECIALEFFECTHITWALL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A070160)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CONFIGSPECIALEFFECTHITWALL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A070170)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CONFIGSPECIALEFFECTHITWALL_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A070350)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CONFIGSPECIALEFFECTHITWALL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0704F0)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CONFIGSPECIALEFFECTHITWALL_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0704B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSpecialEffectHitWall_ConfigSpecialEffectHitWall_UnityGeneratedFormatter_TypeDefinitionIndex = 75197;

	class ConfigSpecialEffectHitWall_ConfigSpecialEffectHitWall_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSpecialEffectHitWall*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CharacterDamageDecalType>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CharacterDamageDecalType>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSpecialEffectHitWall_ConfigSpecialEffectHitWall_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49BC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DamageDecalData>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DamageDecalData>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSpecialEffectHitWall_ConfigSpecialEffectHitWall_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49BC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CONFIGSPECIALEFFECTHITWALL_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CONFIGSPECIALEFFECTHITWALL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CONFIGSPECIALEFFECTHITWALL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSpecialEffectHitWall*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitWall*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CONFIGSPECIALEFFECTHITWALL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSpecialEffectHitWall*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitWall*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CONFIGSPECIALEFFECTHITWALL_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
