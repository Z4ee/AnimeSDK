#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Code::Logic::Data::ScriptObject::Level { class BeatMap; }
namespace Code::Logic::Data::ScriptObject::Level { class Pattern; }
namespace Code::Logic::Data::ScriptObject::Level { class SummerEventMonsterSpawnConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_SUMMEREVENTMONSTERSPAWNCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14BF9B30)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_SUMMEREVENTMONSTERSPAWNCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14BF9B40)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_SUMMEREVENTMONSTERSPAWNCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1009F340)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_SUMMEREVENTMONSTERSPAWNCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1009F4E0)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_SUMMEREVENTMONSTERSPAWNCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1009F4A0)

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int SummerEventMonsterSpawnConfig_SummerEventMonsterSpawnConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 80766;

	class SummerEventMonsterSpawnConfig_SummerEventMonsterSpawnConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::Pattern*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::Pattern*>*>**)Il2CppClass::FromTypeDefinitionIndex(SummerEventMonsterSpawnConfig_SummerEventMonsterSpawnConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3D970);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::BeatMap*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::BeatMap*>*>**)Il2CppClass::FromTypeDefinitionIndex(SummerEventMonsterSpawnConfig_SummerEventMonsterSpawnConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3D978);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_SUMMEREVENTMONSTERSPAWNCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_SUMMEREVENTMONSTERSPAWNCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_SUMMEREVENTMONSTERSPAWNCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_SUMMEREVENTMONSTERSPAWNCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_SUMMEREVENTMONSTERSPAWNCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
