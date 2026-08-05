#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3221F717AA0FB040_Struct_2_BE1226F9F46C02DE.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3221F717AA0FB040___C_METHOD_1_5DDA3A19B8154CBC_OFFSET UNITYSDK_OFFSET(0x1416F340)
#define CLASS_1_3221F717AA0FB040___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1416F2F0)
#define CLASS_1_3221F717AA0FB040___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1416F330)

inline static constexpr unsigned int Class_1_3221F717AA0FB040___c_TypeDefinitionIndex = 51460;

class Class_1_3221F717AA0FB040___c : public ::System::Object
{
public:
	static ::Class_1_3221F717AA0FB040___c** StaticGet___9()
	{
		return (::Class_1_3221F717AA0FB040___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3221F717AA0FB040___c_TypeDefinitionIndex)->GetStaticField(0x443D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_5DDA3A19B8154CBC(::Class_1_3221F717AA0FB040_Struct_2_BE1226F9F46C02DE a1, ::Class_1_3221F717AA0FB040_Struct_2_BE1226F9F46C02DE a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3221F717AA0FB040_Struct_2_BE1226F9F46C02DE, ::Class_1_3221F717AA0FB040_Struct_2_BE1226F9F46C02DE))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040___C_METHOD_1_5DDA3A19B8154CBC_OFFSET))(this, a1, a2);
	}
};
