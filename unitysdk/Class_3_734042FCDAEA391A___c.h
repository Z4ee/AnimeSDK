#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_734042FCDAEA391A___C_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x16B19EF0)
#define CLASS_3_734042FCDAEA391A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B19EA0)
#define CLASS_3_734042FCDAEA391A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B19EE0)

inline static constexpr unsigned int Class_3_734042FCDAEA391A___c_TypeDefinitionIndex = 46057;

class Class_3_734042FCDAEA391A___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__27_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_734042FCDAEA391A___c_TypeDefinitionIndex)->GetStaticField(0x47010);
	}
	static ::Class_3_734042FCDAEA391A___c** StaticGet___9()
	{
		return (::Class_3_734042FCDAEA391A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_734042FCDAEA391A___c_TypeDefinitionIndex)->GetStaticField(0x47018);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_734042FCDAEA391A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_734042FCDAEA391A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_734042FCDAEA391A___C_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}
};
