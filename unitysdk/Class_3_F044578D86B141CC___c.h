#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F044578D86B141CC___C_METHOD_1_DC22283CB9D576C1_OFFSET UNITYSDK_OFFSET(0xFD43350)
#define CLASS_3_F044578D86B141CC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD43300)
#define CLASS_3_F044578D86B141CC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFD43340)

inline static constexpr unsigned int Class_3_F044578D86B141CC___c_TypeDefinitionIndex = 67813;

class Class_3_F044578D86B141CC___c : public ::System::Object
{
public:
	static ::Class_3_F044578D86B141CC___c** StaticGet___9()
	{
		return (::Class_3_F044578D86B141CC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F044578D86B141CC___c_TypeDefinitionIndex)->GetStaticField(0x460A0);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__16_0()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F044578D86B141CC___c_TypeDefinitionIndex)->GetStaticField(0x460A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F044578D86B141CC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F044578D86B141CC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DC22283CB9D576C1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_F044578D86B141CC___C_METHOD_1_DC22283CB9D576C1_OFFSET))(this, a1);
	}
};
