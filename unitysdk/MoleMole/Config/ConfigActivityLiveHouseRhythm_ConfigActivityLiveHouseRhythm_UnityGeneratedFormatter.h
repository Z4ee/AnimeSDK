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

#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CONFIGACTIVITYLIVEHOUSERHYTHM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16A81D60)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CONFIGACTIVITYLIVEHOUSERHYTHM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16A81D70)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CONFIGACTIVITYLIVEHOUSERHYTHM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16A81F50)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CONFIGACTIVITYLIVEHOUSERHYTHM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A820F0)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CONFIGACTIVITYLIVEHOUSERHYTHM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A820B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigActivityLiveHouseRhythm_ConfigActivityLiveHouseRhythm_UnityGeneratedFormatter_TypeDefinitionIndex = 51945;

	class ConfigActivityLiveHouseRhythm_ConfigActivityLiveHouseRhythm_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigActivityLiveHouseRhythm*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigActivityLiveHouseRhythm_ConfigActivityLiveHouseRhythm_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31E50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigActivityLiveHouseRhythm_ConfigActivityLiveHouseRhythm_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31E58);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CONFIGACTIVITYLIVEHOUSERHYTHM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CONFIGACTIVITYLIVEHOUSERHYTHM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CONFIGACTIVITYLIVEHOUSERHYTHM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigActivityLiveHouseRhythm*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigActivityLiveHouseRhythm*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CONFIGACTIVITYLIVEHOUSERHYTHM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigActivityLiveHouseRhythm*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigActivityLiveHouseRhythm*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_CONFIGACTIVITYLIVEHOUSERHYTHM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
