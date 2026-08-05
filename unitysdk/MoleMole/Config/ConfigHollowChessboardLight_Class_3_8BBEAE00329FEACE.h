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

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CLASS_3_8BBEAE00329FEACE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14865250)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CLASS_3_8BBEAE00329FEACE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14865260)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CLASS_3_8BBEAE00329FEACE_WRITE_OFFSET UNITYSDK_OFFSET(0x148656C0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CLASS_3_8BBEAE00329FEACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14865990)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CLASS_3_8BBEAE00329FEACE__CTOR_OFFSET UNITYSDK_OFFSET(0x14865950)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardLight_Class_3_8BBEAE00329FEACE_TypeDefinitionIndex = 42557;

	class ConfigHollowChessboardLight_Class_3_8BBEAE00329FEACE : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChessboardLight*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardGIConfig*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessboardGIConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_Class_3_8BBEAE00329FEACE_TypeDefinitionIndex)->GetStaticField(0x42320);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::LightRenderConfig*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::LightRenderConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_Class_3_8BBEAE00329FEACE_TypeDefinitionIndex)->GetStaticField(0x42328);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_Class_3_8BBEAE00329FEACE_TypeDefinitionIndex)->GetStaticField(0x42330);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Int32>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_Class_3_8BBEAE00329FEACE_TypeDefinitionIndex)->GetStaticField(0x42338);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::LightRenderConfig*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::LightRenderConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_Class_3_8BBEAE00329FEACE_TypeDefinitionIndex)->GetStaticField(0x42340);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LightBreathData*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LightBreathData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboardLight_Class_3_8BBEAE00329FEACE_TypeDefinitionIndex)->GetStaticField(0x42348);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CLASS_3_8BBEAE00329FEACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CLASS_3_8BBEAE00329FEACE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CLASS_3_8BBEAE00329FEACE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboardLight*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardLight*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CLASS_3_8BBEAE00329FEACE_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboardLight*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardLight*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLIGHT_CLASS_3_8BBEAE00329FEACE_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
