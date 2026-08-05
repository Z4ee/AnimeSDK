#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/ConfigSpecialDamageText.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICommon_DamageText; }
namespace MoleMole { class ConfigUICommon_DamageText_ConfigSpecialDamageTextExtra; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CLASS_3_BDC6935FB457B39D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19D6D030)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CLASS_3_BDC6935FB457B39D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19D6D040)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CLASS_3_BDC6935FB457B39D_WRITE_OFFSET UNITYSDK_OFFSET(0x19D6D7E0)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CLASS_3_BDC6935FB457B39D__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D6DC80)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CLASS_3_BDC6935FB457B39D__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6DC40)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_DamageText_Class_3_BDC6935FB457B39D_TypeDefinitionIndex = 57553;

	class ConfigUICommon_DamageText_Class_3_BDC6935FB457B39D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon_DamageText*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_Class_3_BDC6935FB457B39D_TypeDefinitionIndex)->GetStaticField(0x4C1A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_Class_3_BDC6935FB457B39D_TypeDefinitionIndex)->GetStaticField(0x4C1A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_Class_3_BDC6935FB457B39D_TypeDefinitionIndex)->GetStaticField(0x4C1B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigUICommon_DamageText_ConfigSpecialDamageTextExtra*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigUICommon_DamageText_ConfigSpecialDamageTextExtra*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_Class_3_BDC6935FB457B39D_TypeDefinitionIndex)->GetStaticField(0x4C1B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::String*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_Class_3_BDC6935FB457B39D_TypeDefinitionIndex)->GetStaticField(0x4C1C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_Class_3_BDC6935FB457B39D_TypeDefinitionIndex)->GetStaticField(0x4C1C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CLASS_3_BDC6935FB457B39D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CLASS_3_BDC6935FB457B39D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CLASS_3_BDC6935FB457B39D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_DamageText*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_DamageText*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CLASS_3_BDC6935FB457B39D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_DamageText*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_DamageText*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CLASS_3_BDC6935FB457B39D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
