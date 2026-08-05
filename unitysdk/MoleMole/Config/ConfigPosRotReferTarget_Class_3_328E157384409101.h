#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRotReferTarget; }
namespace MoleMole::Config { class DynamicString; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLASS_3_328E157384409101_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x172ADC30)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLASS_3_328E157384409101_READMEMBER_OFFSET UNITYSDK_OFFSET(0x172ADC40)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLASS_3_328E157384409101_WRITE_OFFSET UNITYSDK_OFFSET(0x172AE500)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLASS_3_328E157384409101__CCTOR_OFFSET UNITYSDK_OFFSET(0x172AEA40)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLASS_3_328E157384409101__CTOR_OFFSET UNITYSDK_OFFSET(0x172AEA00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotReferTarget_Class_3_328E157384409101_TypeDefinitionIndex = 82674;

	class ConfigPosRotReferTarget_Class_3_328E157384409101 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigPosRotReferTarget*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotReferTarget_Class_3_328E157384409101_TypeDefinitionIndex)->GetStaticField(0x3F680);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotReferTarget_Class_3_328E157384409101_TypeDefinitionIndex)->GetStaticField(0x3F688);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotReferTarget_Class_3_328E157384409101_TypeDefinitionIndex)->GetStaticField(0x3F690);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLASS_3_328E157384409101__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLASS_3_328E157384409101__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLASS_3_328E157384409101_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRotReferTarget*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLASS_3_328E157384409101_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRotReferTarget*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLASS_3_328E157384409101_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
