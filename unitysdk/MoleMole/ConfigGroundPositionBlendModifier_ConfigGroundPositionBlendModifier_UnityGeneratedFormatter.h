#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigGroundPositionBlendModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CONFIGGROUNDPOSITIONBLENDMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18ADF480)
#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CONFIGGROUNDPOSITIONBLENDMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18ADF490)
#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CONFIGGROUNDPOSITIONBLENDMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18ADF940)
#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CONFIGGROUNDPOSITIONBLENDMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ADFC40)
#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CONFIGGROUNDPOSITIONBLENDMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADFC00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGroundPositionBlendModifier_ConfigGroundPositionBlendModifier_UnityGeneratedFormatter_TypeDefinitionIndex = 63450;

	class ConfigGroundPositionBlendModifier_ConfigGroundPositionBlendModifier_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigGroundPositionBlendModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGroundPositionBlendModifier_ConfigGroundPositionBlendModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39C80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGroundPositionBlendModifier_ConfigGroundPositionBlendModifier_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39C88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CONFIGGROUNDPOSITIONBLENDMODIFIER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CONFIGGROUNDPOSITIONBLENDMODIFIER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CONFIGGROUNDPOSITIONBLENDMODIFIER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigGroundPositionBlendModifier*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigGroundPositionBlendModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CONFIGGROUNDPOSITIONBLENDMODIFIER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigGroundPositionBlendModifier*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGroundPositionBlendModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CONFIGGROUNDPOSITIONBLENDMODIFIER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
