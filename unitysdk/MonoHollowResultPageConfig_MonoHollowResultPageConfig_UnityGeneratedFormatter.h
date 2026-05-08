#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/MonoHollowResultPageConfig_HueAndLight.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

class MonoHollowResultPageConfig;
class MonoHollowResultPageConfig_BlinkConfigInfo;
class MonoHollowResultPageConfig_ResutlLights;
class NumberBlinkConfig;
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOHOLLOWRESULTPAGECONFIG_MONOHOLLOWRESULTPAGECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12EAFE20)
#define MONOHOLLOWRESULTPAGECONFIG_MONOHOLLOWRESULTPAGECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12EAFE30)
#define MONOHOLLOWRESULTPAGECONFIG_MONOHOLLOWRESULTPAGECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12EB0630)
#define MONOHOLLOWRESULTPAGECONFIG_MONOHOLLOWRESULTPAGECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EB0B00)
#define MONOHOLLOWRESULTPAGECONFIG_MONOHOLLOWRESULTPAGECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12EB0AC0)

inline static constexpr unsigned int MonoHollowResultPageConfig_MonoHollowResultPageConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 43199;

class MonoHollowResultPageConfig_MonoHollowResultPageConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MonoHollowResultPageConfig*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::UnityEngine::Color>*>** StaticGet_CachedSerializer6()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_MonoHollowResultPageConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47C10);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MonoHollowResultPageConfig_BlinkConfigInfo*>*>** StaticGet_CachedSerializer4()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MonoHollowResultPageConfig_BlinkConfigInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_MonoHollowResultPageConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47C18);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::MonoHollowResultPageConfig_BlinkConfigInfo*>*>** StaticGet_CachedSerializer3()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::MonoHollowResultPageConfig_BlinkConfigInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_MonoHollowResultPageConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47C20);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Collections::Generic::List_1<::System::Single>*>*>** StaticGet_CachedSerializer2()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Collections::Generic::List_1<::System::Single>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_MonoHollowResultPageConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47C28);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MonoHollowResultPageConfig_HueAndLight>*>** StaticGet_CachedSerializer1()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MonoHollowResultPageConfig_HueAndLight>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_MonoHollowResultPageConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47C30);
	}
	static ::Sirenix::Serialization::Serializer_1<::NumberBlinkConfig*>** StaticGet_CachedSerializer5()
	{
		return (::Sirenix::Serialization::Serializer_1<::NumberBlinkConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_MonoHollowResultPageConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47C38);
	}
	static ::Sirenix::Serialization::Serializer_1<::MonoHollowResultPageConfig_ResutlLights*>** StaticGet_CachedSerializer7()
	{
		return (::Sirenix::Serialization::Serializer_1<::MonoHollowResultPageConfig_ResutlLights*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_MonoHollowResultPageConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47C40);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Single>*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_MonoHollowResultPageConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47C48);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_MONOHOLLOWRESULTPAGECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_MONOHOLLOWRESULTPAGECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_MONOHOLLOWRESULTPAGECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::MonoHollowResultPageConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoHollowResultPageConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_MONOHOLLOWRESULTPAGECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
	}

	::System::Void Write(::MonoHollowResultPageConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
	{
		return ((::System::Void(*)(::PVOID, ::MonoHollowResultPageConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_MONOHOLLOWRESULTPAGECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
	}
};
