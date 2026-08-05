#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DFC18A96C36DAE79.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F535F142382EE1DB_METHOD_1_F389A09EC56ED7EC_OFFSET UNITYSDK_OFFSET(0x15B7BC30)
#define CLASS_1_F535F142382EE1DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B7BC90)
#define CLASS_1_F535F142382EE1DB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B7BC80)

inline static constexpr unsigned int Class_1_F535F142382EE1DB_TypeDefinitionIndex = 69167;

class Class_1_F535F142382EE1DB : public ::System::Object
{
public:
	static ::Class_1_F535F142382EE1DB** StaticGet_Field_1_0()
	{
		return (::Class_1_F535F142382EE1DB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F535F142382EE1DB_TypeDefinitionIndex)->GetStaticField(0x418B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F535F142382EE1DB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F535F142382EE1DB__CCTOR_OFFSET))();
	}

	::Struct_2_DFC18A96C36DAE79 Method_1_F389A09EC56ED7EC(::System::UInt32 a1)
	{
		return ((::Struct_2_DFC18A96C36DAE79(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F535F142382EE1DB_METHOD_1_F389A09EC56ED7EC_OFFSET))(this, a1);
	}
};
