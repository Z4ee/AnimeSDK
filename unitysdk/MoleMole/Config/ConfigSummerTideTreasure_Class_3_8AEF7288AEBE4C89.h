#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSummerTideTreasure; }
namespace MoleMole::Config { class ConfigSummerTideTreasure_SummerTideItemSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_CLASS_3_8AEF7288AEBE4C89_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162641A0)
#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_CLASS_3_8AEF7288AEBE4C89_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162641B0)
#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_CLASS_3_8AEF7288AEBE4C89_WRITE_OFFSET UNITYSDK_OFFSET(0x16264400)
#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_CLASS_3_8AEF7288AEBE4C89__CCTOR_OFFSET UNITYSDK_OFFSET(0x162645C0)
#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_CLASS_3_8AEF7288AEBE4C89__CTOR_OFFSET UNITYSDK_OFFSET(0x16264580)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSummerTideTreasure_Class_3_8AEF7288AEBE4C89_TypeDefinitionIndex = 45390;

	class ConfigSummerTideTreasure_Class_3_8AEF7288AEBE4C89 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSummerTideTreasure*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigSummerTideTreasure_SummerTideItemSetting*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigSummerTideTreasure_SummerTideItemSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSummerTideTreasure_Class_3_8AEF7288AEBE4C89_TypeDefinitionIndex)->GetStaticField(0x32460);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSummerTideTreasure_Class_3_8AEF7288AEBE4C89_TypeDefinitionIndex)->GetStaticField(0x32468);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSummerTideTreasure_Class_3_8AEF7288AEBE4C89_TypeDefinitionIndex)->GetStaticField(0x32470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_CLASS_3_8AEF7288AEBE4C89__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_CLASS_3_8AEF7288AEBE4C89__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_CLASS_3_8AEF7288AEBE4C89_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSummerTideTreasure*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSummerTideTreasure*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_CLASS_3_8AEF7288AEBE4C89_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSummerTideTreasure*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSummerTideTreasure*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_CLASS_3_8AEF7288AEBE4C89_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
