#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/ChessUIColor.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowChessboardScreenUIAtlas; }
namespace MoleMole::Config { class ScreenUIAtlasRectData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF97DAD0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF97DAE0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xF97DCC0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF97DE60)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xF97DE20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardScreenUIAtlas_ConfigHollowChessboardScreenUIAtlas_UnityGeneratedFormatter_TypeDefinitionIndex = 69509;

	class ConfigHollowChessboardScreenUIAtlas_ConfigHollowChessboardScreenUIAtlas_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::ChessUIColor, ::MoleMole::Config::ScreenUIAtlasRectData*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::ChessUIColor, ::MoleMole::Config::ScreenUIAtlasRectData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardScreenUIAtlas_ConfigHollowChessboardScreenUIAtlas_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x467A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenUIAtlasRectData*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenUIAtlasRectData*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardScreenUIAtlas_ConfigHollowChessboardScreenUIAtlas_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x467A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
