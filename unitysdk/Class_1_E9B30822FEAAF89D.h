#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BFC2F9D5895EB2FB;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }

#define CLASS_1_E9B30822FEAAF89D_METHOD_1_9C58AE7217FB6D07_OFFSET UNITYSDK_OFFSET(0x15780810)
#define CLASS_1_E9B30822FEAAF89D_METHOD_1_AF5505BA16A6F93D_OFFSET UNITYSDK_OFFSET(0x15780AB0)
#define CLASS_1_E9B30822FEAAF89D_METHOD_1_B26EB9D101DF31CC_OFFSET UNITYSDK_OFFSET(0x15780960)

inline static constexpr unsigned int Class_1_E9B30822FEAAF89D_TypeDefinitionIndex = 74690;

class Class_1_E9B30822FEAAF89D : public ::System::Object
{
public:
	static ::System::Int32 Method_1_9C58AE7217FB6D07(::MoleMole::Config::DynamicInt* a1, ::Class_1_BFC2F9D5895EB2FB* a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::MoleMole::Config::DynamicInt*, ::Class_1_BFC2F9D5895EB2FB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E9B30822FEAAF89D_METHOD_1_9C58AE7217FB6D07_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_B26EB9D101DF31CC(::MoleMole::Config::DynamicString* a1, ::Class_1_BFC2F9D5895EB2FB* a2, ::System::Boolean a3)
	{
		return ((::System::String*(*)(::MoleMole::Config::DynamicString*, ::Class_1_BFC2F9D5895EB2FB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E9B30822FEAAF89D_METHOD_1_B26EB9D101DF31CC_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_AF5505BA16A6F93D(::MoleMole::Config::DynamicFloat* a1, ::Class_1_BFC2F9D5895EB2FB* a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::MoleMole::Config::DynamicFloat*, ::Class_1_BFC2F9D5895EB2FB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E9B30822FEAAF89D_METHOD_1_AF5505BA16A6F93D_OFFSET))(a1, a2, a3);
	}
};
