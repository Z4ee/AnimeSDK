#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISymbolFilterSource.h"
#include "unitysdk/RPG/Client/UISymbolFilterType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1098;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_770E33789BD35404_METHOD_1_364767BD419C9E78_OFFSET UNITYSDK_OFFSET(0x17AEEE80)
#define CLASS_1_770E33789BD35404_METHOD_1_4BC702C202C0EC3E_OFFSET UNITYSDK_OFFSET(0x17AEF8E0)
#define CLASS_1_770E33789BD35404_METHOD_1_4F0B73AFEEDA5D03_OFFSET UNITYSDK_OFFSET(0x17AEF120)
#define CLASS_1_770E33789BD35404_METHOD_1_E41DB783D8F46AC5_OFFSET UNITYSDK_OFFSET(0x17AEF1D0)
#define CLASS_1_770E33789BD35404__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AEFB30)

inline static constexpr unsigned int Class_1_770E33789BD35404_TypeDefinitionIndex = 69618;

class Class_1_770E33789BD35404 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::Client::UISymbolFilterType, ::Class_0_16E4307DCC419505_1098*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::Client::UISymbolFilterType, ::Class_0_16E4307DCC419505_1098*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_770E33789BD35404_TypeDefinitionIndex)->GetStaticField(0x560F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_770E33789BD35404__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_364767BD419C9E78(::RPG::Client::UISymbolFilterSource a1, ::System::Char a2, ::System::Char& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::UISymbolFilterSource, ::System::Char, ::System::Char&))((::PBYTE)hIl2Cpp + CLASS_1_770E33789BD35404_METHOD_1_364767BD419C9E78_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1098*>* Method_1_E41DB783D8F46AC5(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1098*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_770E33789BD35404_METHOD_1_E41DB783D8F46AC5_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_1098* Method_1_4BC702C202C0EC3E(::RPG::Client::UISymbolFilterType a1)
	{
		return ((::Class_0_16E4307DCC419505_1098*(*)(::RPG::Client::UISymbolFilterType))((::PBYTE)hIl2Cpp + CLASS_1_770E33789BD35404_METHOD_1_4BC702C202C0EC3E_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_4F0B73AFEEDA5D03(::RPG::Client::UISymbolFilterSource a1)
	{
		return ((::System::Int32(*)(::RPG::Client::UISymbolFilterSource))((::PBYTE)hIl2Cpp + CLASS_1_770E33789BD35404_METHOD_1_4F0B73AFEEDA5D03_OFFSET))(a1);
	}
};
