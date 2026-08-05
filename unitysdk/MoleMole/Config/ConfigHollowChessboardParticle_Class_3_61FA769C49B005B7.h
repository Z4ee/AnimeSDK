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

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CLASS_3_61FA769C49B005B7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD5DAB0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CLASS_3_61FA769C49B005B7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD5DAC0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CLASS_3_61FA769C49B005B7_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD5DE70)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CLASS_3_61FA769C49B005B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD5E0E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CLASS_3_61FA769C49B005B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5E0A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardParticle_Class_3_61FA769C49B005B7_TypeDefinitionIndex = 47777;

	class ConfigHollowChessboardParticle_Class_3_61FA769C49B005B7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChessboardParticle*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::VirtualSpaceLineEffectConfig*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::VirtualSpaceLineEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardParticle_Class_3_61FA769C49B005B7_TypeDefinitionIndex)->GetStaticField(0x50CE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardParticle_Class_3_61FA769C49B005B7_TypeDefinitionIndex)->GetStaticField(0x50CE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowNapEffectConfig*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowNapEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardParticle_Class_3_61FA769C49B005B7_TypeDefinitionIndex)->GetStaticField(0x50CF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardUvAnimConfig*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardUvAnimConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardParticle_Class_3_61FA769C49B005B7_TypeDefinitionIndex)->GetStaticField(0x50CF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SpaceEffectBaseConfig*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SpaceEffectBaseConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardParticle_Class_3_61FA769C49B005B7_TypeDefinitionIndex)->GetStaticField(0x50D00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CLASS_3_61FA769C49B005B7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CLASS_3_61FA769C49B005B7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CLASS_3_61FA769C49B005B7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboardParticle*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardParticle*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CLASS_3_61FA769C49B005B7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboardParticle*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardParticle*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE_CLASS_3_61FA769C49B005B7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
