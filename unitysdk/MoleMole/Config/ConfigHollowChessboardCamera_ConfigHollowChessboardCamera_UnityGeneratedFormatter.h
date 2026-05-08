#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraPieceAudioVolumeRank.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraSafeZone.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace MoleMole::Config { class ConfigHollowCameraBounce; }
namespace MoleMole::Config { class ConfigHollowCameraDrag; }
namespace MoleMole::Config { class ConfigHollowCameraEasing; }
namespace MoleMole::Config { class ConfigHollowCameraFollow; }
namespace MoleMole::Config { class ConfigHollowCameraInit; }
namespace MoleMole::Config { class ConfigHollowCameraLight; }
namespace MoleMole::Config { class ConfigHollowCameraMoveToCenter; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }
namespace MoleMole::Config { class ConfigHollowCameraTranslation; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CONFIGHOLLOWCHESSBOARDCAMERA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x183BFC50)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CONFIGHOLLOWCHESSBOARDCAMERA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x183BFC60)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CONFIGHOLLOWCHESSBOARDCAMERA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x183C0700)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CONFIGHOLLOWCHESSBOARDCAMERA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x183C0D40)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CONFIGHOLLOWCHESSBOARDCAMERA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x183C0D00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex = 61999;

	class ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChessboardCamera*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraInit*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraInit*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x433C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowCameraPieceAudioVolumeRank>*>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowCameraPieceAudioVolumeRank>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x433C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraLight*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraLight*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x433D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraSafeZone>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraSafeZone>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x433D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraDrag*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraDrag*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x433E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraFollow*>*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraFollow*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x433E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraTranslation*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraTranslation*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x433F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraBounce*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraBounce*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x433F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraMoveToCenter*>*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraMoveToCenter*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43400);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43408);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43410);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraEasing*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraEasing*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43418);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraShake*>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraShake*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43420);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::MoleMole::Config::ConfigHollowCameraStretchV2*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::MoleMole::Config::ConfigHollowCameraStretchV2*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_ConfigHollowChessboardCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43428);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CONFIGHOLLOWCHESSBOARDCAMERA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CONFIGHOLLOWCHESSBOARDCAMERA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CONFIGHOLLOWCHESSBOARDCAMERA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboardCamera*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardCamera*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CONFIGHOLLOWCHESSBOARDCAMERA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboardCamera*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardCamera*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CONFIGHOLLOWCHESSBOARDCAMERA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
