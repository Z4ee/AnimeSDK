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

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CLASS_3_D10C63646D3E6DA6_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x134FD7C0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CLASS_3_D10C63646D3E6DA6_READMEMBER_OFFSET UNITYSDK_OFFSET(0x134FD7D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CLASS_3_D10C63646D3E6DA6_WRITE_OFFSET UNITYSDK_OFFSET(0x134FE200)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CLASS_3_D10C63646D3E6DA6__CCTOR_OFFSET UNITYSDK_OFFSET(0x134FE810)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CLASS_3_D10C63646D3E6DA6__CTOR_OFFSET UNITYSDK_OFFSET(0x134FE7D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex = 59021;

	class ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChessboardCamera*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraTranslation*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraTranslation*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BEC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BEC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BED0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowCameraPieceAudioVolumeRank>*>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowCameraPieceAudioVolumeRank>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BED8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraMoveToCenter*>*>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraMoveToCenter*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BEE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraFollow*>*>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraFollow*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BEE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::MoleMole::Config::ConfigHollowCameraStretchV2*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::MoleMole::Config::ConfigHollowCameraStretchV2*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BEF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraShake*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraShake*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BEF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraDrag*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraDrag*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BF00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraInit*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraInit*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BF08);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraLight*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraLight*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BF10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraSafeZone>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraSafeZone>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BF18);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraEasing*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraEasing*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BF20);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraBounce*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraBounce*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardCamera_Class_3_D10C63646D3E6DA6_TypeDefinitionIndex)->GetStaticField(0x4BF28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CLASS_3_D10C63646D3E6DA6__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CLASS_3_D10C63646D3E6DA6__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CLASS_3_D10C63646D3E6DA6_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboardCamera*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardCamera*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CLASS_3_D10C63646D3E6DA6_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboardCamera*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardCamera*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_CLASS_3_D10C63646D3E6DA6_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
