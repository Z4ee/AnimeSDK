#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1059;
namespace System { class String; }

#define CLASS_1_7B24F8570CB761BD_METHOD_1_CDC061D2DEADD8BB_OFFSET UNITYSDK_OFFSET(0x15DA6830)
#define CLASS_1_7B24F8570CB761BD_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x15DA67E0)
#define CLASS_1_7B24F8570CB761BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DA6A20)
#define CLASS_1_7B24F8570CB761BD__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA67D0)

inline static constexpr unsigned int Class_1_7B24F8570CB761BD_TypeDefinitionIndex = 79382;

class Class_1_7B24F8570CB761BD : public ::System::Object
{
public:
	static ::Class_1_7B24F8570CB761BD** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_7B24F8570CB761BD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B24F8570CB761BD_TypeDefinitionIndex)->GetStaticField(0x34540);
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

	::System::Object* Method_1_CDC061D2DEADD8BB(::System::String* a1, ::Class_0_16E4307DCC419505_1059* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_1059*))((::PBYTE)hIl2Cpp + CLASS_1_7B24F8570CB761BD_METHOD_1_CDC061D2DEADD8BB_OFFSET))(this, a1, a2);
	}
};
