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

#define MONOHOLLOWRESULTPAGECONFIG_CLASS_3_D0AA12E34EC0D88C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1353E160)
#define MONOHOLLOWRESULTPAGECONFIG_CLASS_3_D0AA12E34EC0D88C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1353E170)
#define MONOHOLLOWRESULTPAGECONFIG_CLASS_3_D0AA12E34EC0D88C_WRITE_OFFSET UNITYSDK_OFFSET(0x1353E900)
#define MONOHOLLOWRESULTPAGECONFIG_CLASS_3_D0AA12E34EC0D88C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1353EDA0)
#define MONOHOLLOWRESULTPAGECONFIG_CLASS_3_D0AA12E34EC0D88C__CTOR_OFFSET UNITYSDK_OFFSET(0x1353ED60)

inline static constexpr unsigned int MonoHollowResultPageConfig_Class_3_D0AA12E34EC0D88C_TypeDefinitionIndex = 41019;

class MonoHollowResultPageConfig_Class_3_D0AA12E34EC0D88C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MonoHollowResultPageConfig*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::NumberBlinkConfig*>** StaticGet_Field_3_11()
	{
		return (::Sirenix::Serialization::Serializer_1<::NumberBlinkConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_Class_3_D0AA12E34EC0D88C_TypeDefinitionIndex)->GetStaticField(0x371F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Collections::Generic::List_1<::System::Single>*>*>** StaticGet_Field_3_6()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Collections::Generic::List_1<::System::Single>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_Class_3_D0AA12E34EC0D88C_TypeDefinitionIndex)->GetStaticField(0x371F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MonoHollowResultPageConfig_HueAndLight>*>** StaticGet_Field_3_7()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MonoHollowResultPageConfig_HueAndLight>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_Class_3_D0AA12E34EC0D88C_TypeDefinitionIndex)->GetStaticField(0x37200);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MonoHollowResultPageConfig_BlinkConfigInfo*>*>** StaticGet_Field_3_4()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MonoHollowResultPageConfig_BlinkConfigInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_Class_3_D0AA12E34EC0D88C_TypeDefinitionIndex)->GetStaticField(0x37208);
	}
	static ::Sirenix::Serialization::Serializer_1<::MonoHollowResultPageConfig_ResutlLights*>** StaticGet_Field_3_9()
	{
		return (::Sirenix::Serialization::Serializer_1<::MonoHollowResultPageConfig_ResutlLights*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_Class_3_D0AA12E34EC0D88C_TypeDefinitionIndex)->GetStaticField(0x37210);
	}
	static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Single>*>** StaticGet_Field_3_0()
	{
		return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_Class_3_D0AA12E34EC0D88C_TypeDefinitionIndex)->GetStaticField(0x37218);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::UnityEngine::Color>*>** StaticGet_Field_3_10()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_Class_3_D0AA12E34EC0D88C_TypeDefinitionIndex)->GetStaticField(0x37220);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::MonoHollowResultPageConfig_BlinkConfigInfo*>*>** StaticGet_Field_3_5()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::MonoHollowResultPageConfig_BlinkConfigInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_Class_3_D0AA12E34EC0D88C_TypeDefinitionIndex)->GetStaticField(0x37228);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_CLASS_3_D0AA12E34EC0D88C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_CLASS_3_D0AA12E34EC0D88C__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_CLASS_3_D0AA12E34EC0D88C_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::MonoHollowResultPageConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoHollowResultPageConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_CLASS_3_D0AA12E34EC0D88C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Write(::MonoHollowResultPageConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoHollowResultPageConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_CLASS_3_D0AA12E34EC0D88C_WRITE_OFFSET))(this, a1, a2);
	}
};
