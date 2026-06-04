#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISymbolFilterSource.h"
#include "unitysdk/RPG/Client/UISymbolFilterType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1055;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_59D6A01FFB361560_METHOD_1_4BC702C202C0EC3E_OFFSET UNITYSDK_OFFSET(0xA5446C0)
#define CLASS_1_59D6A01FFB361560_METHOD_1_4F0B73AFEEDA5D03_OFFSET UNITYSDK_OFFSET(0xA543FE0)
#define CLASS_1_59D6A01FFB361560_METHOD_1_C015A40DF21927E9_OFFSET UNITYSDK_OFFSET(0xA544090)
#define CLASS_1_59D6A01FFB361560_METHOD_1_DEE17B193F38B06E_OFFSET UNITYSDK_OFFSET(0xA543DA0)
#define CLASS_1_59D6A01FFB361560__CCTOR_OFFSET UNITYSDK_OFFSET(0xA544910)

inline static constexpr unsigned int Class_1_59D6A01FFB361560_TypeDefinitionIndex = 68132;

class Class_1_59D6A01FFB361560 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::Client::UISymbolFilterType, ::Class_0_16E4307DCC419505_1055*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::Client::UISymbolFilterType, ::Class_0_16E4307DCC419505_1055*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59D6A01FFB361560_TypeDefinitionIndex)->GetStaticField(0x62C50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59D6A01FFB361560__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_DEE17B193F38B06E(::RPG::Client::UISymbolFilterSource a1, ::System::Char a2, ::System::Char& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::UISymbolFilterSource, ::System::Char, ::System::Char&))((::PBYTE)hIl2Cpp + CLASS_1_59D6A01FFB361560_METHOD_1_DEE17B193F38B06E_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1055*>* Method_1_C015A40DF21927E9(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1055*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_59D6A01FFB361560_METHOD_1_C015A40DF21927E9_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_1055* Method_1_4BC702C202C0EC3E(::RPG::Client::UISymbolFilterType a1)
	{
		return ((::Class_0_16E4307DCC419505_1055*(*)(::RPG::Client::UISymbolFilterType))((::PBYTE)hIl2Cpp + CLASS_1_59D6A01FFB361560_METHOD_1_4BC702C202C0EC3E_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_4F0B73AFEEDA5D03(::RPG::Client::UISymbolFilterSource a1)
	{
		return ((::System::Int32(*)(::RPG::Client::UISymbolFilterSource))((::PBYTE)hIl2Cpp + CLASS_1_59D6A01FFB361560_METHOD_1_4F0B73AFEEDA5D03_OFFSET))(a1);
	}
};
