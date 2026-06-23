#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigEnvironmentFeatureModifier; }
namespace MoleMole { class ConfigGroundPositionBlendModifier; }
namespace MoleMole { class ConfigLinearSlopeDamper; }
namespace MoleMole { class ConfigLinearStepStairDamper; }
namespace MoleMole { class ConfigStairVelocityModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CONFIGENVIRONMENTFEATUREMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x158CB510)
#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CONFIGENVIRONMENTFEATUREMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x158CB520)
#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CONFIGENVIRONMENTFEATUREMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x158CB920)
#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CONFIGENVIRONMENTFEATUREMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x158CBBC0)
#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CONFIGENVIRONMENTFEATUREMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x158CBB80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigEnvironmentFeatureModifier_ConfigEnvironmentFeatureModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 67536;

	class ConfigEnvironmentFeatureModifier_ConfigEnvironmentFeatureModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigEnvironmentFeatureModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearStepStairDamper*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearStepStairDamper*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEnvironmentFeatureModifier_ConfigEnvironmentFeatureModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34000);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearSlopeDamper*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearSlopeDamper*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEnvironmentFeatureModifier_ConfigEnvironmentFeatureModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34008);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigGroundPositionBlendModifier*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigGroundPositionBlendModifier*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEnvironmentFeatureModifier_ConfigEnvironmentFeatureModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34010);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigStairVelocityModifier*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigStairVelocityModifier*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEnvironmentFeatureModifier_ConfigEnvironmentFeatureModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34018);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEnvironmentFeatureModifier_ConfigEnvironmentFeatureModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34020);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CONFIGENVIRONMENTFEATUREMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CONFIGENVIRONMENTFEATUREMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CONFIGENVIRONMENTFEATUREMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigEnvironmentFeatureModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigEnvironmentFeatureModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CONFIGENVIRONMENTFEATUREMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigEnvironmentFeatureModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigEnvironmentFeatureModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CONFIGENVIRONMENTFEATUREMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
