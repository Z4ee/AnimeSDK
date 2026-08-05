#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_MATPROPERTYSETTING_CLASS_3_6CC221C55D481548_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B565E60)
#define MOLEMOLE_CONFIG_MATPROPERTYSETTING_CLASS_3_6CC221C55D481548_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B565E70)
#define MOLEMOLE_CONFIG_MATPROPERTYSETTING_CLASS_3_6CC221C55D481548_WRITE_OFFSET UNITYSDK_OFFSET(0x1B566130)
#define MOLEMOLE_CONFIG_MATPROPERTYSETTING_CLASS_3_6CC221C55D481548__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B566330)
#define MOLEMOLE_CONFIG_MATPROPERTYSETTING_CLASS_3_6CC221C55D481548__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5662D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MatPropertySetting_Class_3_6CC221C55D481548_TypeDefinitionIndex = 75648;

	class MatPropertySetting_Class_3_6CC221C55D481548 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::MatPropertySetting>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MatPropertySetting_Class_3_6CC221C55D481548_TypeDefinitionIndex)->GetStaticField(0x4D470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATPROPERTYSETTING_CLASS_3_6CC221C55D481548__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATPROPERTYSETTING_CLASS_3_6CC221C55D481548__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATPROPERTYSETTING_CLASS_3_6CC221C55D481548_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::MatPropertySetting& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::MatPropertySetting&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATPROPERTYSETTING_CLASS_3_6CC221C55D481548_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::MatPropertySetting& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MatPropertySetting&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATPROPERTYSETTING_CLASS_3_6CC221C55D481548_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
