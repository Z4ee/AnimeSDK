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

#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CLASS_3_EF31A99CB4B4CE7E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19214D60)
#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CLASS_3_EF31A99CB4B4CE7E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19214D70)
#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CLASS_3_EF31A99CB4B4CE7E_WRITE_OFFSET UNITYSDK_OFFSET(0x19215120)
#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CLASS_3_EF31A99CB4B4CE7E__CCTOR_OFFSET UNITYSDK_OFFSET(0x19215390)
#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CLASS_3_EF31A99CB4B4CE7E__CTOR_OFFSET UNITYSDK_OFFSET(0x19215350)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigEnvironmentFeatureModifier_Class_3_EF31A99CB4B4CE7E_TypeDefinitionIndex = 71984;

	class ConfigEnvironmentFeatureModifier_Class_3_EF31A99CB4B4CE7E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigEnvironmentFeatureModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearStepStairDamper*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearStepStairDamper*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEnvironmentFeatureModifier_Class_3_EF31A99CB4B4CE7E_TypeDefinitionIndex)->GetStaticField(0x4FA40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigStairVelocityModifier*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigStairVelocityModifier*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEnvironmentFeatureModifier_Class_3_EF31A99CB4B4CE7E_TypeDefinitionIndex)->GetStaticField(0x4FA48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEnvironmentFeatureModifier_Class_3_EF31A99CB4B4CE7E_TypeDefinitionIndex)->GetStaticField(0x4FA50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearSlopeDamper*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigLinearSlopeDamper*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEnvironmentFeatureModifier_Class_3_EF31A99CB4B4CE7E_TypeDefinitionIndex)->GetStaticField(0x4FA58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigGroundPositionBlendModifier*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigGroundPositionBlendModifier*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEnvironmentFeatureModifier_Class_3_EF31A99CB4B4CE7E_TypeDefinitionIndex)->GetStaticField(0x4FA60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CLASS_3_EF31A99CB4B4CE7E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CLASS_3_EF31A99CB4B4CE7E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CLASS_3_EF31A99CB4B4CE7E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigEnvironmentFeatureModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigEnvironmentFeatureModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CLASS_3_EF31A99CB4B4CE7E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigEnvironmentFeatureModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigEnvironmentFeatureModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_CLASS_3_EF31A99CB4B4CE7E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
