#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigStairVelocityModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CLASS_3_756DADB0CF109CE3_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19228810)
#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CLASS_3_756DADB0CF109CE3_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19228820)
#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CLASS_3_756DADB0CF109CE3_WRITE_OFFSET UNITYSDK_OFFSET(0x192288F0)
#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CLASS_3_756DADB0CF109CE3__CCTOR_OFFSET UNITYSDK_OFFSET(0x192289E0)
#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CLASS_3_756DADB0CF109CE3__CTOR_OFFSET UNITYSDK_OFFSET(0x192289A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigStairVelocityModifier_Class_3_756DADB0CF109CE3_TypeDefinitionIndex = 55970;

	class ConfigStairVelocityModifier_Class_3_756DADB0CF109CE3 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigStairVelocityModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigStairVelocityModifier_Class_3_756DADB0CF109CE3_TypeDefinitionIndex)->GetStaticField(0x4FBD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CLASS_3_756DADB0CF109CE3__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CLASS_3_756DADB0CF109CE3__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CLASS_3_756DADB0CF109CE3_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigStairVelocityModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigStairVelocityModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CLASS_3_756DADB0CF109CE3_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigStairVelocityModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigStairVelocityModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_CLASS_3_756DADB0CF109CE3_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
