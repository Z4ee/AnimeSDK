#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_378;
namespace RPG::GameCore::ConstValueMapping::Converter { template <typename T> class IDynamicValueConverter_1; }
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AEA111A3373CBD7E_METHOD_1_060438F0BBF86F55_OFFSET UNITYSDK_OFFSET(0x1CC90640)
#define CLASS_1_AEA111A3373CBD7E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC936E0)

inline static constexpr unsigned int Class_1_AEA111A3373CBD7E_TypeDefinitionIndex = 43891;

class Class_1_AEA111A3373CBD7E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_378*>** StaticGet_JGJFFFJCBEF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_378*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEA111A3373CBD7E_TypeDefinitionIndex)->GetStaticField(0xF90);
	}
	static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_378*>** StaticGet_HNENBOGHDLL()
	{
		return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_378*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEA111A3373CBD7E_TypeDefinitionIndex)->GetStaticField(0xF98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AEA111A3373CBD7E__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_378* Method_1_060438F0BBF86F55(::System::Type* a1)
	{
		return ((::Class_0_16E4307DCC419505_378*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_AEA111A3373CBD7E_METHOD_1_060438F0BBF86F55_OFFSET))(a1);
	}
};
