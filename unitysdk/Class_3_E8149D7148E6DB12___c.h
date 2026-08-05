#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E7DAE994C565ED1F;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_E8149D7148E6DB12___C_METHOD_1_6F6513564E6748E7_OFFSET UNITYSDK_OFFSET(0x180E75F0)
#define CLASS_3_E8149D7148E6DB12___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180E75A0)
#define CLASS_3_E8149D7148E6DB12___C__CTOR_OFFSET UNITYSDK_OFFSET(0x180E75E0)

inline static constexpr unsigned int Class_3_E8149D7148E6DB12___c_TypeDefinitionIndex = 78583;

class Class_3_E8149D7148E6DB12___c : public ::System::Object
{
public:
	static ::Class_3_E8149D7148E6DB12___c** StaticGet___9()
	{
		return (::Class_3_E8149D7148E6DB12___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E8149D7148E6DB12___c_TypeDefinitionIndex)->GetStaticField(0x43A60);
	}
	static ::System::Action_1<::Class_3_E7DAE994C565ED1F*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_E7DAE994C565ED1F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E8149D7148E6DB12___c_TypeDefinitionIndex)->GetStaticField(0x43A68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E8149D7148E6DB12___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8149D7148E6DB12___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F6513564E6748E7(::Class_3_E7DAE994C565ED1F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7DAE994C565ED1F*))((::PBYTE)hIl2Cpp + CLASS_3_E8149D7148E6DB12___C_METHOD_1_6F6513564E6748E7_OFFSET))(this, a1);
	}
};
