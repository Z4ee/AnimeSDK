#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRotFaceOffReferTarget; }
namespace MoleMole::Config { class DynamicString; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CONFIGPOSROTFACEOFFREFERTARGET_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16A976B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CONFIGPOSROTFACEOFFREFERTARGET_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16A976C0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CONFIGPOSROTFACEOFFREFERTARGET_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16A98140)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CONFIGPOSROTFACEOFFREFERTARGET_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A98760)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CONFIGPOSROTFACEOFFREFERTARGET_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A98720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotFaceOffReferTarget_ConfigPosRotFaceOffReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex = 73655;

	class ConfigPosRotFaceOffReferTarget_ConfigPosRotFaceOffReferTarget_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigPosRotFaceOffReferTarget*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotFaceOffReferTarget_ConfigPosRotFaceOffReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31F40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotFaceOffReferTarget_ConfigPosRotFaceOffReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31F48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotFaceOffReferTarget_ConfigPosRotFaceOffReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31F50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotFaceOffReferTarget_ConfigPosRotFaceOffReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31F58);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CONFIGPOSROTFACEOFFREFERTARGET_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CONFIGPOSROTFACEOFFREFERTARGET_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CONFIGPOSROTFACEOFFREFERTARGET_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRotFaceOffReferTarget*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRotFaceOffReferTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CONFIGPOSROTFACEOFFREFERTARGET_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRotFaceOffReferTarget*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRotFaceOffReferTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CONFIGPOSROTFACEOFFREFERTARGET_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
