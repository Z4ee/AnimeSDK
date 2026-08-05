#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class ConfigMainCityObject;
class MainCityObjectState_ScriptConfig;
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFIGMAINCITYOBJECT_CLASS_3_C28922FC30C96EEC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x128BBCA0)
#define CONFIGMAINCITYOBJECT_CLASS_3_C28922FC30C96EEC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x128BBCB0)
#define CONFIGMAINCITYOBJECT_CLASS_3_C28922FC30C96EEC_WRITE_OFFSET UNITYSDK_OFFSET(0x128BBE40)
#define CONFIGMAINCITYOBJECT_CLASS_3_C28922FC30C96EEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x128BBFA0)
#define CONFIGMAINCITYOBJECT_CLASS_3_C28922FC30C96EEC__CTOR_OFFSET UNITYSDK_OFFSET(0x128BBF60)

inline static constexpr unsigned int ConfigMainCityObject_Class_3_C28922FC30C96EEC_TypeDefinitionIndex = 54124;

class ConfigMainCityObject_Class_3_C28922FC30C96EEC : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::ConfigMainCityObject*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>*>** StaticGet_Field_3_0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMainCityObject_Class_3_C28922FC30C96EEC_TypeDefinitionIndex)->GetStaticField(0x3E3D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MainCityObjectState_ScriptConfig*>*>** StaticGet_Field_3_1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MainCityObjectState_ScriptConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMainCityObject_Class_3_C28922FC30C96EEC_TypeDefinitionIndex)->GetStaticField(0x3E3D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CLASS_3_C28922FC30C96EEC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CLASS_3_C28922FC30C96EEC__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CLASS_3_C28922FC30C96EEC_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::ConfigMainCityObject*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::ConfigMainCityObject*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CLASS_3_C28922FC30C96EEC_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Write(::ConfigMainCityObject*& a1, ::Sirenix::Serialization::IDataWriter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigMainCityObject*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CLASS_3_C28922FC30C96EEC_WRITE_OFFSET))(this, a1, a2);
	}
};
