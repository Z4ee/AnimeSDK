#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessboardPathLink.h"
#include "unitysdk/MoleMole/Config/ChessboardTimeLineConfig.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BubbleReasonType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ConfigHollowChessPieceEdge.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_PieceChangeStructType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TVModelData.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TvSwitchType.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole::Config { class ChessboardCoinSoundConfig; }
namespace MoleMole::Config { class ChessboardEffectConfig; }
namespace MoleMole::Config { class ChessboardFrontViewConfig; }
namespace MoleMole::Config { class ChessboardJoystickConfig; }
namespace MoleMole::Config { class ChessboardPathConfig; }
namespace MoleMole::Config { class ChessboardScreenEffectConfigV2; }
namespace MoleMole::Config { class ChessboardSwitchEffect; }
namespace MoleMole::Config { class ConfigBlockedChessPiece; }
namespace MoleMole::Config { class ConfigChessSkin; }
namespace MoleMole::Config { class ConfigChessboardFilter; }
namespace MoleMole::Config { class ConfigFinishedChessPiece; }
namespace MoleMole::Config { class ConfigFrontVideoChessPiece; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboard_BubbleConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectConfigData; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfigGroup; }
namespace MoleMole::Config { class ConfigHollowChessboard_RangeCurveItem; }
namespace MoleMole::Config { class ConfigHollowChessboard_TvMoveConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_TvSwitchConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_WeightedPerformingConfig; }
namespace MoleMole::Config { class HollowBigWorldConfig; }
namespace MoleMole::Config { class HollowEffectConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CLASS_3_4B4011F97D50F21A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11471F20)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CLASS_3_4B4011F97D50F21A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11471F30)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CLASS_3_4B4011F97D50F21A_WRITE_OFFSET UNITYSDK_OFFSET(0x11473830)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CLASS_3_4B4011F97D50F21A__CCTOR_OFFSET UNITYSDK_OFFSET(0x11474680)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CLASS_3_4B4011F97D50F21A__CTOR_OFFSET UNITYSDK_OFFSET(0x11474640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex = 59227;

	class ConfigHollowChessboard_Class_3_4B4011F97D50F21A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChessboard*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_Field_3_31()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_Field_3_23()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B28);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardFrontViewConfig*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardFrontViewConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrontVideoChessPiece*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrontVideoChessPiece*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_BubbleReasonType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BubbleConfig*>*>*>** StaticGet_Field_3_21()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_BubbleReasonType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BubbleConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::MoleMole::Config::ConfigHollowChessboard_TVModelData>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::MoleMole::Config::ConfigHollowChessboard_TVModelData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessSkin*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessSkin*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowEffectConfig*>*>** StaticGet_Field_3_29()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardTimeLineConfig>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardTimeLineConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardCoinSoundConfig*>** StaticGet_Field_3_18()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardCoinSoundConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_RangeCurveItem*>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_RangeCurveItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardPathConfig*>*>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardPathConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B80);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData*>** StaticGet_Field_3_25()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowChessboard_WeightedPerformingConfig*>*>** StaticGet_Field_3_26()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowChessboard_WeightedPerformingConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardJoystickConfig*>** StaticGet_Field_3_28()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardJoystickConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46B98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFinishedChessPiece*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFinishedChessPiece*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::MoleMole::Config::ConfigHollowChessboard_ConfigHollowChessPieceEdge>*>** StaticGet_Field_3_20()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::MoleMole::Config::ConfigHollowChessboard_ConfigHollowChessPieceEdge>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HollowBigWorldConfig*>** StaticGet_Field_3_30()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HollowBigWorldConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>** StaticGet_Field_3_27()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BubbleConfig*>*>** StaticGet_Field_3_22()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BubbleConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_TvMoveConfig*>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_TvMoveConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::System::String*>*>*>** StaticGet_Field_3_16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardScreenEffectConfigV2*>** StaticGet_Field_3_17()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardScreenEffectConfigV2*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>*>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBlockedChessPiece*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBlockedChessPiece*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_TvSwitchType, ::MoleMole::Config::ConfigHollowChessboard_TvSwitchConfig*>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_TvSwitchType, ::MoleMole::Config::ConfigHollowChessboard_TvSwitchConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>*>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46BF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ChessboardPathLink, ::System::Int32>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ChessboardPathLink, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46C00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessboardFilter*>*>** StaticGet_Field_3_24()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessboardFilter*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_Class_3_4B4011F97D50F21A_TypeDefinitionIndex)->GetStaticField(0x46C08);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CLASS_3_4B4011F97D50F21A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CLASS_3_4B4011F97D50F21A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CLASS_3_4B4011F97D50F21A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboard*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CLASS_3_4B4011F97D50F21A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboard*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CLASS_3_4B4011F97D50F21A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
