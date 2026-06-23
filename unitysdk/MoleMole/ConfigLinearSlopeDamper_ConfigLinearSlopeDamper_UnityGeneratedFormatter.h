#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigLinearSlopeDamper; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CONFIGLINEARSLOPEDAMPER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1272C870)
#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CONFIGLINEARSLOPEDAMPER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1272C880)
#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CONFIGLINEARSLOPEDAMPER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1272CD30)
#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CONFIGLINEARSLOPEDAMPER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1272D040)
#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CONFIGLINEARSLOPEDAMPER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1272D000)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLinearSlopeDamper_ConfigLinearSlopeDamper_UnityGeneratedFormatter_TypeDefinitionIndex = 45446;

	class ConfigLinearSlopeDamper_ConfigLinearSlopeDamper_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigLinearSlopeDamper*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearSlopeDamper_ConfigLinearSlopeDamper_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CBA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearSlopeDamper_ConfigLinearSlopeDamper_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CBA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearSlopeDamper_ConfigLinearSlopeDamper_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CBB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Interaction::AxisSign>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Interaction::AxisSign>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearSlopeDamper_ConfigLinearSlopeDamper_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CBB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CONFIGLINEARSLOPEDAMPER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CONFIGLINEARSLOPEDAMPER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CONFIGLINEARSLOPEDAMPER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigLinearSlopeDamper*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigLinearSlopeDamper*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CONFIGLINEARSLOPEDAMPER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigLinearSlopeDamper*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLinearSlopeDamper*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CONFIGLINEARSLOPEDAMPER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
