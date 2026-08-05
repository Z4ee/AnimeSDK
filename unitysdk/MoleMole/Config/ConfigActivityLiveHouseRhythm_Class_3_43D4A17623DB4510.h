#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseSpineEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseTrackHeadEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseSpineEmojiData.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseTrackHeadEmojiData.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigActivityLiveHouseRhythm; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CLASS_3_43D4A17623DB4510_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1729A290)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CLASS_3_43D4A17623DB4510_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1729A2A0)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CLASS_3_43D4A17623DB4510_WRITE_OFFSET UNITYSDK_OFFSET(0x1729A440)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CLASS_3_43D4A17623DB4510__CCTOR_OFFSET UNITYSDK_OFFSET(0x1729A5A0)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CLASS_3_43D4A17623DB4510__CTOR_OFFSET UNITYSDK_OFFSET(0x1729A560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigActivityLiveHouseRhythm_Class_3_43D4A17623DB4510_TypeDefinitionIndex = 73435;

	class ConfigActivityLiveHouseRhythm_Class_3_43D4A17623DB4510 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigActivityLiveHouseRhythm*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigActivityLiveHouseRhythm_Class_3_43D4A17623DB4510_TypeDefinitionIndex)->GetStaticField(0x3F5F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigActivityLiveHouseRhythm_Class_3_43D4A17623DB4510_TypeDefinitionIndex)->GetStaticField(0x3F5F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CLASS_3_43D4A17623DB4510__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CLASS_3_43D4A17623DB4510__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CLASS_3_43D4A17623DB4510_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigActivityLiveHouseRhythm*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigActivityLiveHouseRhythm*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CLASS_3_43D4A17623DB4510_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigActivityLiveHouseRhythm*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigActivityLiveHouseRhythm*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CLASS_3_43D4A17623DB4510_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
