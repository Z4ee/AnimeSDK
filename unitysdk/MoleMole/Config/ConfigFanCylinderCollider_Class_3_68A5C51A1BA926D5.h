#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigFanCylinderCollider; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLASS_3_68A5C51A1BA926D5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B907F60)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLASS_3_68A5C51A1BA926D5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B907F70)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLASS_3_68A5C51A1BA926D5_WRITE_OFFSET UNITYSDK_OFFSET(0x1B908460)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLASS_3_68A5C51A1BA926D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B908780)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLASS_3_68A5C51A1BA926D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B908740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFanCylinderCollider_Class_3_68A5C51A1BA926D5_TypeDefinitionIndex = 83034;

	class ConfigFanCylinderCollider_Class_3_68A5C51A1BA926D5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigFanCylinderCollider*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFanCylinderCollider_Class_3_68A5C51A1BA926D5_TypeDefinitionIndex)->GetStaticField(0x39C80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFanCylinderCollider_Class_3_68A5C51A1BA926D5_TypeDefinitionIndex)->GetStaticField(0x39C88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLASS_3_68A5C51A1BA926D5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLASS_3_68A5C51A1BA926D5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLASS_3_68A5C51A1BA926D5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigFanCylinderCollider*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigFanCylinderCollider*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLASS_3_68A5C51A1BA926D5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigFanCylinderCollider*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFanCylinderCollider*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_CLASS_3_68A5C51A1BA926D5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
