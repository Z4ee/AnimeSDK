#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_3.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_8069852B6FA1A544_9___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x1D1CD2A0)
#define CLASS_3_8069852B6FA1A544_9___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x1D1CD2B0)
#define CLASS_3_8069852B6FA1A544_9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1CD250)
#define CLASS_3_8069852B6FA1A544_9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CD290)

inline static constexpr unsigned int Class_3_8069852B6FA1A544_9___c_TypeDefinitionIndex = 22974;

class Class_3_8069852B6FA1A544_9___c : public ::System::Object
{
public:
	static ::Class_3_8069852B6FA1A544_9___c** StaticGet___9()
	{
		return (::Class_3_8069852B6FA1A544_9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8069852B6FA1A544_9___c_TypeDefinitionIndex)->GetStaticField(0xC750);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8069852B6FA1A544_9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8069852B6FA1A544_9___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_96F6662CA3713095_3 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_96F6662CA3713095_3))((::PBYTE)hIl2Cpp + CLASS_3_8069852B6FA1A544_9___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_3 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_96F6662CA3713095_3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8069852B6FA1A544_9___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
