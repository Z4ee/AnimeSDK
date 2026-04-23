#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISymbolFilterSource.h"
#include "unitysdk/RPG/Client/UISymbolFilterType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1005;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F57983166EE68D13_METHOD_1_2E1538EC6D2AE046_OFFSET UNITYSDK_OFFSET(0x12333AB0)
#define CLASS_1_F57983166EE68D13_METHOD_1_4BC702C202C0EC3E_OFFSET UNITYSDK_OFFSET(0x12334360)
#define CLASS_1_F57983166EE68D13_METHOD_1_5DB09A024059AC54_OFFSET UNITYSDK_OFFSET(0x12333D00)
#define CLASS_1_F57983166EE68D13_METHOD_1_7AEC4A5F088C3A3C_OFFSET UNITYSDK_OFFSET(0x12333DB0)
#define CLASS_1_F57983166EE68D13__CCTOR_OFFSET UNITYSDK_OFFSET(0x123345C0)

inline static constexpr unsigned int Class_1_F57983166EE68D13_TypeDefinitionIndex = 67189;

class Class_1_F57983166EE68D13 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::Client::UISymbolFilterType, ::Class_0_16E4307DCC419505_1005*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::Client::UISymbolFilterType, ::Class_0_16E4307DCC419505_1005*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F57983166EE68D13_TypeDefinitionIndex)->GetStaticField(0x6AA30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F57983166EE68D13__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_2E1538EC6D2AE046(::RPG::Client::UISymbolFilterSource a1, ::System::Char a2, ::System::Char& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::UISymbolFilterSource, ::System::Char, ::System::Char&))((::PBYTE)hIl2Cpp + CLASS_1_F57983166EE68D13_METHOD_1_2E1538EC6D2AE046_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1005*>* Method_1_7AEC4A5F088C3A3C(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1005*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F57983166EE68D13_METHOD_1_7AEC4A5F088C3A3C_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_1005* Method_1_4BC702C202C0EC3E(::RPG::Client::UISymbolFilterType a1)
	{
		return ((::Class_0_16E4307DCC419505_1005*(*)(::RPG::Client::UISymbolFilterType))((::PBYTE)hIl2Cpp + CLASS_1_F57983166EE68D13_METHOD_1_4BC702C202C0EC3E_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_5DB09A024059AC54(::RPG::Client::UISymbolFilterSource a1)
	{
		return ((::System::Int32(*)(::RPG::Client::UISymbolFilterSource))((::PBYTE)hIl2Cpp + CLASS_1_F57983166EE68D13_METHOD_1_5DB09A024059AC54_OFFSET))(a1);
	}
};
