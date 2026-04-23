#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E970EC5EEB7EA2D9.h"

class Class_0_16E4307DCC419505_7;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define CLASS_2_8C27963A447275B2_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x19D6B4A0)
#define CLASS_2_8C27963A447275B2_FLUSH_OFFSET UNITYSDK_OFFSET(0x19D6B3D0)
#define CLASS_2_8C27963A447275B2_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0x19D6B560)
#define CLASS_2_8C27963A447275B2_LOAD_OFFSET UNITYSDK_OFFSET(0x19D6B300)
#define CLASS_2_8C27963A447275B2_METHOD_2_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x19D6B570)
#define CLASS_2_8C27963A447275B2__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6B2C0)

inline static constexpr unsigned int Class_2_8C27963A447275B2_TypeDefinitionIndex = 9744;

class Class_2_8C27963A447275B2 : public ::Class_1_E970EC5EEB7EA2D9
{
public:
	static ::Class_0_16E4307DCC419505_7** StaticGet_Field_2_0()
	{
		return (::Class_0_16E4307DCC419505_7**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8C27963A447275B2_TypeDefinitionIndex)->GetStaticField(0x170B0);
	}
	::System::String* Field_2_1; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8C27963A447275B2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_2_8C27963A447275B2_LOAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8C27963A447275B2_FLUSH_OFFSET))(this, a1, a2, a3);
	}

	::System::Void DeleteKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8C27963A447275B2_DELETEKEY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPartialSave()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C27963A447275B2_GET_ISPARTIALSAVE_OFFSET))(this);
	}

	static ::System::Void Method_2_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_8C27963A447275B2_METHOD_2_7DAF5B3ADF494895_OFFSET))(a1);
	}
};
