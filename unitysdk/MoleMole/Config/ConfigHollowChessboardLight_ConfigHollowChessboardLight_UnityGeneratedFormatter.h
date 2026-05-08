#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ChessboardGIConfig; }
namespace MoleMole::Config { class ConfigHollowChessboardLight; }
namespace MoleMole::Config { class LightBreathData; }
namespace MoleMole::HollowChessboard { class LightRenderConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CONFIGHOLLOWCHESSBOARDLIGHT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1241D2B0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CONFIGHOLLOWCHESSBOARDLIGHT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1241D2C0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CONFIGHOLLOWCHESSBOARDLIGHT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1241D770)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CONFIGHOLLOWCHESSBOARDLIGHT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1241DA70)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CONFIGHOLLOWCHESSBOARDLIGHT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1241DA30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardLight_ConfigHollowChessboardLight_UnityGeneratedFormatter_TypeDefinitionIndex = 79499;

	class ConfigHollowChessboardLight_ConfigHollowChessboardLight_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChessboardLight*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Int32>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_ConfigHollowChessboardLight_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40240);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LightBreathData*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LightBreathData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_ConfigHollowChessboardLight_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40248);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::LightRenderConfig*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::LightRenderConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_ConfigHollowChessboardLight_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40250);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_ConfigHollowChessboardLight_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40258);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::LightRenderConfig*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::LightRenderConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_ConfigHollowChessboardLight_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40260);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardGIConfig*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardGIConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_ConfigHollowChessboardLight_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40268);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CONFIGHOLLOWCHESSBOARDLIGHT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CONFIGHOLLOWCHESSBOARDLIGHT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CONFIGHOLLOWCHESSBOARDLIGHT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboardLight*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardLight*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CONFIGHOLLOWCHESSBOARDLIGHT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboardLight*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardLight*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CONFIGHOLLOWCHESSBOARDLIGHT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
