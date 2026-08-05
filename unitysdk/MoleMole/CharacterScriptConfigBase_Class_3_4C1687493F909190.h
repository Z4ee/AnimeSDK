#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class CharacterScriptConfigBase; }
namespace MoleMole { class DitherConfig; }
namespace MoleMole { class QTECameraBaseInfo; }
namespace MoleMole { class QTECameraInfo; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_CLASS_3_4C1687493F909190_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF1284D0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_CLASS_3_4C1687493F909190_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF1284E0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_CLASS_3_4C1687493F909190_WRITE_OFFSET UNITYSDK_OFFSET(0xF128DC0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_CLASS_3_4C1687493F909190__CCTOR_OFFSET UNITYSDK_OFFSET(0xF129320)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_CLASS_3_4C1687493F909190__CTOR_OFFSET UNITYSDK_OFFSET(0xF1292E0)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfigBase_Class_3_4C1687493F909190_TypeDefinitionIndex = 70282;

	class CharacterScriptConfigBase_Class_3_4C1687493F909190 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::CharacterScriptConfigBase*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfigBase_Class_3_4C1687493F909190_TypeDefinitionIndex)->GetStaticField(0x51670);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfigBase_Class_3_4C1687493F909190_TypeDefinitionIndex)->GetStaticField(0x51678);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfigBase_Class_3_4C1687493F909190_TypeDefinitionIndex)->GetStaticField(0x51680);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfigBase_Class_3_4C1687493F909190_TypeDefinitionIndex)->GetStaticField(0x51688);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfigBase_Class_3_4C1687493F909190_TypeDefinitionIndex)->GetStaticField(0x51690);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_CLASS_3_4C1687493F909190__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_CLASS_3_4C1687493F909190__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_CLASS_3_4C1687493F909190_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CharacterScriptConfigBase*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CharacterScriptConfigBase*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_CLASS_3_4C1687493F909190_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::CharacterScriptConfigBase*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfigBase*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_CLASS_3_4C1687493F909190_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
