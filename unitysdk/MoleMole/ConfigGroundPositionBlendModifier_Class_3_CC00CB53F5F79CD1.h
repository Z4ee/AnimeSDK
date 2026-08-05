#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigGroundPositionBlendModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CLASS_3_CC00CB53F5F79CD1_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A94A310)
#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CLASS_3_CC00CB53F5F79CD1_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A94A320)
#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CLASS_3_CC00CB53F5F79CD1_WRITE_OFFSET UNITYSDK_OFFSET(0x1A94A770)
#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CLASS_3_CC00CB53F5F79CD1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A94AA40)
#define MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CLASS_3_CC00CB53F5F79CD1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94AA00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGroundPositionBlendModifier_Class_3_CC00CB53F5F79CD1_TypeDefinitionIndex = 57336;

	class ConfigGroundPositionBlendModifier_Class_3_CC00CB53F5F79CD1 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigGroundPositionBlendModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGroundPositionBlendModifier_Class_3_CC00CB53F5F79CD1_TypeDefinitionIndex)->GetStaticField(0x36600);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGroundPositionBlendModifier_Class_3_CC00CB53F5F79CD1_TypeDefinitionIndex)->GetStaticField(0x36608);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CLASS_3_CC00CB53F5F79CD1__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CLASS_3_CC00CB53F5F79CD1__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CLASS_3_CC00CB53F5F79CD1_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigGroundPositionBlendModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigGroundPositionBlendModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CLASS_3_CC00CB53F5F79CD1_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigGroundPositionBlendModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGroundPositionBlendModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGROUNDPOSITIONBLENDMODIFIER_CLASS_3_CC00CB53F5F79CD1_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
