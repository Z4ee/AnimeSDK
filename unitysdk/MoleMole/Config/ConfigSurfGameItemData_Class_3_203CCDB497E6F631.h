#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SurfGameItemDataEntry.h"
#include "unitysdk/MoleMole/Config/SurfGameTriggerDataEntry.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSurfGameItemData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CLASS_3_203CCDB497E6F631_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13508A70)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CLASS_3_203CCDB497E6F631_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13508A80)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CLASS_3_203CCDB497E6F631_WRITE_OFFSET UNITYSDK_OFFSET(0x13508C10)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CLASS_3_203CCDB497E6F631__CCTOR_OFFSET UNITYSDK_OFFSET(0x13508D70)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CLASS_3_203CCDB497E6F631__CTOR_OFFSET UNITYSDK_OFFSET(0x13508D30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemData_Class_3_203CCDB497E6F631_TypeDefinitionIndex = 86644;

	class ConfigSurfGameItemData_Class_3_203CCDB497E6F631 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSurfGameItemData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameItemDataEntry>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameItemDataEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSurfGameItemData_Class_3_203CCDB497E6F631_TypeDefinitionIndex)->GetStaticField(0x4BFF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameTriggerDataEntry>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameTriggerDataEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSurfGameItemData_Class_3_203CCDB497E6F631_TypeDefinitionIndex)->GetStaticField(0x4BFF8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CLASS_3_203CCDB497E6F631__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CLASS_3_203CCDB497E6F631__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CLASS_3_203CCDB497E6F631_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSurfGameItemData*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSurfGameItemData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CLASS_3_203CCDB497E6F631_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSurfGameItemData*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSurfGameItemData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CLASS_3_203CCDB497E6F631_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
