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

#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_CLASS_3_105B560A059E9E11_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12F16CE0)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_CLASS_3_105B560A059E9E11_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12F16CF0)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_CLASS_3_105B560A059E9E11_WRITE_OFFSET UNITYSDK_OFFSET(0x12F16E80)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_CLASS_3_105B560A059E9E11__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F16FE0)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_CLASS_3_105B560A059E9E11__CTOR_OFFSET UNITYSDK_OFFSET(0x12F16FA0)

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int SummerEventMonsterSpawnConfig_Class_3_105B560A059E9E11_TypeDefinitionIndex = 77125;

	class SummerEventMonsterSpawnConfig_Class_3_105B560A059E9E11 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::Pattern*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::Pattern*>*>**)Il2CppClass::FromTypeDefinitionIndex(SummerEventMonsterSpawnConfig_Class_3_105B560A059E9E11_TypeDefinitionIndex)->GetStaticField(0x51370);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::BeatMap*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::BeatMap*>*>**)Il2CppClass::FromTypeDefinitionIndex(SummerEventMonsterSpawnConfig_Class_3_105B560A059E9E11_TypeDefinitionIndex)->GetStaticField(0x51378);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_CLASS_3_105B560A059E9E11__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_CLASS_3_105B560A059E9E11__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_CLASS_3_105B560A059E9E11_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_CLASS_3_105B560A059E9E11_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_CLASS_3_105B560A059E9E11_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
