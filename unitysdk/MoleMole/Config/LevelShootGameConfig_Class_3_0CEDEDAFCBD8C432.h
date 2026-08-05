#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class LevelShootGameConfig; }
namespace MoleMole::Config { class LevelShootGameConfig_MonsterWave; }
namespace MoleMole::Config { class LevelShootGameConfig_MonsterWaveGroup; }
namespace MoleMole::Config { class LevelShootGameConfig_WaveParam; }
namespace MoleMole::Config { class LevelShootGameConfig_WayPathConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_CLASS_3_0CEDEDAFCBD8C432_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11715000)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_CLASS_3_0CEDEDAFCBD8C432_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11715010)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_CLASS_3_0CEDEDAFCBD8C432_WRITE_OFFSET UNITYSDK_OFFSET(0x117153C0)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_CLASS_3_0CEDEDAFCBD8C432__CCTOR_OFFSET UNITYSDK_OFFSET(0x11715630)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_CLASS_3_0CEDEDAFCBD8C432__CTOR_OFFSET UNITYSDK_OFFSET(0x117155F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_Class_3_0CEDEDAFCBD8C432_TypeDefinitionIndex = 52695;

	class LevelShootGameConfig_Class_3_0CEDEDAFCBD8C432 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::LevelShootGameConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_MonsterWave*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_MonsterWave*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_Class_3_0CEDEDAFCBD8C432_TypeDefinitionIndex)->GetStaticField(0x4FA00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_Class_3_0CEDEDAFCBD8C432_TypeDefinitionIndex)->GetStaticField(0x4FA08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_MonsterWaveGroup*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_MonsterWaveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_Class_3_0CEDEDAFCBD8C432_TypeDefinitionIndex)->GetStaticField(0x4FA10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::LevelShootGameConfig_WaveParam*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::LevelShootGameConfig_WaveParam*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_Class_3_0CEDEDAFCBD8C432_TypeDefinitionIndex)->GetStaticField(0x4FA18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_WayPathConfig*>*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_WayPathConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_Class_3_0CEDEDAFCBD8C432_TypeDefinitionIndex)->GetStaticField(0x4FA20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_CLASS_3_0CEDEDAFCBD8C432__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_CLASS_3_0CEDEDAFCBD8C432__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_CLASS_3_0CEDEDAFCBD8C432_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::LevelShootGameConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_CLASS_3_0CEDEDAFCBD8C432_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::LevelShootGameConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_CLASS_3_0CEDEDAFCBD8C432_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
