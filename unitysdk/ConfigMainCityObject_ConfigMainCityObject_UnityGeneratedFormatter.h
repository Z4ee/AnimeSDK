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

#define CONFIGMAINCITYOBJECT_CONFIGMAINCITYOBJECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12689E30)
#define CONFIGMAINCITYOBJECT_CONFIGMAINCITYOBJECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12689E40)
#define CONFIGMAINCITYOBJECT_CONFIGMAINCITYOBJECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1268A020)
#define CONFIGMAINCITYOBJECT_CONFIGMAINCITYOBJECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1268A1C0)
#define CONFIGMAINCITYOBJECT_CONFIGMAINCITYOBJECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1268A180)

inline static constexpr unsigned int ConfigMainCityObject_ConfigMainCityObject_UnityGeneratedFormatter_TypeDefinitionIndex = 47816;

class ConfigMainCityObject_ConfigMainCityObject_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::ConfigMainCityObject*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MainCityObjectState_ScriptConfig*>*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MainCityObjectState_ScriptConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMainCityObject_ConfigMainCityObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42250);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>*>** StaticGet_CachedSerializer1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMainCityObject_ConfigMainCityObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42258);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CONFIGMAINCITYOBJECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CONFIGMAINCITYOBJECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CONFIGMAINCITYOBJECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::ConfigMainCityObject*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
	{
		return ((::System::Boolean(*)(::PVOID, ::ConfigMainCityObject*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CONFIGMAINCITYOBJECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
	}

	::System::Void Write(::ConfigMainCityObject*& value, ::Sirenix::Serialization::IDataWriter* writer)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigMainCityObject*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CONFIGMAINCITYOBJECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
	}
};
