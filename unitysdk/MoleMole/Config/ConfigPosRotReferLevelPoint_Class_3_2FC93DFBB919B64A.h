#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelPointType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRotReferLevelPoint; }
namespace MoleMole::Config { class DynamicString; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLASS_3_2FC93DFBB919B64A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD608A0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLASS_3_2FC93DFBB919B64A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD608B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLASS_3_2FC93DFBB919B64A_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD60BC0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLASS_3_2FC93DFBB919B64A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD60DD0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLASS_3_2FC93DFBB919B64A__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD60D90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotReferLevelPoint_Class_3_2FC93DFBB919B64A_TypeDefinitionIndex = 55693;

	class ConfigPosRotReferLevelPoint_Class_3_2FC93DFBB919B64A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigPosRotReferLevelPoint*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::LevelPointType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::LevelPointType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotReferLevelPoint_Class_3_2FC93DFBB919B64A_TypeDefinitionIndex)->GetStaticField(0x50D10);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotReferLevelPoint_Class_3_2FC93DFBB919B64A_TypeDefinitionIndex)->GetStaticField(0x50D18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLASS_3_2FC93DFBB919B64A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLASS_3_2FC93DFBB919B64A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLASS_3_2FC93DFBB919B64A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRotReferLevelPoint*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferLevelPoint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLASS_3_2FC93DFBB919B64A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRotReferLevelPoint*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferLevelPoint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLASS_3_2FC93DFBB919B64A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
