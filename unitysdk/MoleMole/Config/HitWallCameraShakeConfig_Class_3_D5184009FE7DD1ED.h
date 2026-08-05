#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_CLASS_3_D5184009FE7DD1ED_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19FF4B20)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_CLASS_3_D5184009FE7DD1ED_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF4B30)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_CLASS_3_D5184009FE7DD1ED_WRITE_OFFSET UNITYSDK_OFFSET(0x19FF4CC0)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_CLASS_3_D5184009FE7DD1ED__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FF4E20)
#define MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_CLASS_3_D5184009FE7DD1ED__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF4DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitWallCameraShakeConfig_Class_3_D5184009FE7DD1ED_TypeDefinitionIndex = 74208;

	class HitWallCameraShakeConfig_Class_3_D5184009FE7DD1ED : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::HitWallCameraShakeConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HitWallCameraShakeConfig_Class_3_D5184009FE7DD1ED_TypeDefinitionIndex)->GetStaticField(0x44BB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HitWallCameraShakeConfig_Class_3_D5184009FE7DD1ED_TypeDefinitionIndex)->GetStaticField(0x44BB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_CLASS_3_D5184009FE7DD1ED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_CLASS_3_D5184009FE7DD1ED__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_CLASS_3_D5184009FE7DD1ED_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::HitWallCameraShakeConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::HitWallCameraShakeConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_CLASS_3_D5184009FE7DD1ED_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::HitWallCameraShakeConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HitWallCameraShakeConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITWALLCAMERASHAKECONFIG_CLASS_3_D5184009FE7DD1ED_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
