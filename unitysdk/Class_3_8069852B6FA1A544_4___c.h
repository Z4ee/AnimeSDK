#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_11.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_8069852B6FA1A544_4___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x17C98090)
#define CLASS_3_8069852B6FA1A544_4___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x17C980A0)
#define CLASS_3_8069852B6FA1A544_4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C98040)
#define CLASS_3_8069852B6FA1A544_4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C98080)

inline static constexpr unsigned int Class_3_8069852B6FA1A544_4___c_TypeDefinitionIndex = 23975;

class Class_3_8069852B6FA1A544_4___c : public ::System::Object
{
public:
	static ::Class_3_8069852B6FA1A544_4___c** StaticGet___9()
	{
		return (::Class_3_8069852B6FA1A544_4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8069852B6FA1A544_4___c_TypeDefinitionIndex)->GetStaticField(0x100E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8069852B6FA1A544_4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8069852B6FA1A544_4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_96F6662CA3713095_11 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_96F6662CA3713095_11))((::PBYTE)hIl2Cpp + CLASS_3_8069852B6FA1A544_4___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_11 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_96F6662CA3713095_11(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8069852B6FA1A544_4___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
