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

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CLASS_3_480E0B8B2C62803A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7ED430)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CLASS_3_480E0B8B2C62803A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7ED440)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CLASS_3_480E0B8B2C62803A_WRITE_OFFSET UNITYSDK_OFFSET(0x1B7ED5E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CLASS_3_480E0B8B2C62803A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7ED740)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CLASS_3_480E0B8B2C62803A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ED700)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardScreenUIAtlas_Class_3_480E0B8B2C62803A_TypeDefinitionIndex = 51494;

	class ConfigHollowChessboardScreenUIAtlas_Class_3_480E0B8B2C62803A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::ChessUIColor, ::MoleMole::Config::ScreenUIAtlasRectData*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::ChessUIColor, ::MoleMole::Config::ScreenUIAtlasRectData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardScreenUIAtlas_Class_3_480E0B8B2C62803A_TypeDefinitionIndex)->GetStaticField(0x4A550);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenUIAtlasRectData*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenUIAtlasRectData*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardScreenUIAtlas_Class_3_480E0B8B2C62803A_TypeDefinitionIndex)->GetStaticField(0x4A558);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CLASS_3_480E0B8B2C62803A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CLASS_3_480E0B8B2C62803A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CLASS_3_480E0B8B2C62803A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CLASS_3_480E0B8B2C62803A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardScreenUIAtlas*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_CLASS_3_480E0B8B2C62803A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
