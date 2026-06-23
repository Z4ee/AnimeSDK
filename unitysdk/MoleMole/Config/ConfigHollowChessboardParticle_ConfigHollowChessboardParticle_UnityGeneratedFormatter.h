#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowChessboardParticle; }
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace MoleMole::Config { class HollowChessboardUvAnimConfig; }
namespace MoleMole::Config { class HollowNapEffectConfig; }
namespace MoleMole::Config { class SpaceEffectBaseConfig; }
namespace MoleMole::Config { class VirtualSpaceLineEffectConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CONFIGHOLLOWCHESSBOARDPARTICLE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE96C130)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CONFIGHOLLOWCHESSBOARDPARTICLE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE96C140)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CONFIGHOLLOWCHESSBOARDPARTICLE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xE96C540)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CONFIGHOLLOWCHESSBOARDPARTICLE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE96C7E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CONFIGHOLLOWCHESSBOARDPARTICLE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE96C7A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardParticle_ConfigHollowChessboardParticle_UnityGeneratedFormatter_TypeDefinitionIndex = 61750;

	class ConfigHollowChessboardParticle_ConfigHollowChessboardParticle_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChessboardParticle*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardUvAnimConfig*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardUvAnimConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardParticle_ConfigHollowChessboardParticle_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AEC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardParticle_ConfigHollowChessboardParticle_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AEC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SpaceEffectBaseConfig*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SpaceEffectBaseConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardParticle_ConfigHollowChessboardParticle_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AED0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::VirtualSpaceLineEffectConfig*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::VirtualSpaceLineEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardParticle_ConfigHollowChessboardParticle_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AED8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowNapEffectConfig*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowNapEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardParticle_ConfigHollowChessboardParticle_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AEE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CONFIGHOLLOWCHESSBOARDPARTICLE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CONFIGHOLLOWCHESSBOARDPARTICLE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CONFIGHOLLOWCHESSBOARDPARTICLE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboardParticle*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardParticle*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CONFIGHOLLOWCHESSBOARDPARTICLE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboardParticle*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardParticle*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CONFIGHOLLOWCHESSBOARDPARTICLE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
