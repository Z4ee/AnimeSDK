#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_904;
namespace System { class String; }

#define CLASS_1_7B24F8570CB761BD_METHOD_1_CDC061D2DEADD8BB_OFFSET UNITYSDK_OFFSET(0x17D7BE70)
#define CLASS_1_7B24F8570CB761BD_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x17D7BE20)
#define CLASS_1_7B24F8570CB761BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D7C060)
#define CLASS_1_7B24F8570CB761BD__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7BE10)

inline static constexpr unsigned int Class_1_7B24F8570CB761BD_TypeDefinitionIndex = 75353;

class Class_1_7B24F8570CB761BD : public ::System::Object
{
public:
	static ::Class_1_7B24F8570CB761BD** StaticGet_Field_1_0()
	{
		return (::Class_1_7B24F8570CB761BD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B24F8570CB761BD_TypeDefinitionIndex)->GetStaticField(0x180C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B24F8570CB761BD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B24F8570CB761BD__CCTOR_OFFSET))();
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B24F8570CB761BD_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Object* Method_1_CDC061D2DEADD8BB(::System::String* a1, ::Class_0_16E4307DCC419505_904* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_904*))((::PBYTE)hIl2Cpp + CLASS_1_7B24F8570CB761BD_METHOD_1_CDC061D2DEADD8BB_OFFSET))(this, a1, a2);
	}
};
