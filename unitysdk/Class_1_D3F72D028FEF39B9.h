#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_663AFC2250EC21C9;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }

#define CLASS_1_D3F72D028FEF39B9_METHOD_1_1958A5E97AECD572_OFFSET UNITYSDK_OFFSET(0x1206A410)
#define CLASS_1_D3F72D028FEF39B9_METHOD_1_AF5505BA16A6F93D_OFFSET UNITYSDK_OFFSET(0x1206A560)
#define CLASS_1_D3F72D028FEF39B9_METHOD_1_B26EB9D101DF31CC_OFFSET UNITYSDK_OFFSET(0x1206A6A0)

inline static constexpr unsigned int Class_1_D3F72D028FEF39B9_TypeDefinitionIndex = 53298;

class Class_1_D3F72D028FEF39B9 : public ::System::Object
{
public:
	static ::System::Int32 Method_1_1958A5E97AECD572(::MoleMole::Config::DynamicInt* a1, ::Class_1_663AFC2250EC21C9* a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::MoleMole::Config::DynamicInt*, ::Class_1_663AFC2250EC21C9*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D3F72D028FEF39B9_METHOD_1_1958A5E97AECD572_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_AF5505BA16A6F93D(::MoleMole::Config::DynamicFloat* a1, ::Class_1_663AFC2250EC21C9* a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::MoleMole::Config::DynamicFloat*, ::Class_1_663AFC2250EC21C9*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D3F72D028FEF39B9_METHOD_1_AF5505BA16A6F93D_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_B26EB9D101DF31CC(::MoleMole::Config::DynamicString* a1, ::Class_1_663AFC2250EC21C9* a2, ::System::Boolean a3)
	{
		return ((::System::String*(*)(::MoleMole::Config::DynamicString*, ::Class_1_663AFC2250EC21C9*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D3F72D028FEF39B9_METHOD_1_B26EB9D101DF31CC_OFFSET))(a1, a2, a3);
	}
};
