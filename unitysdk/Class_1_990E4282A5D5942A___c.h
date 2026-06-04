#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7C1A8A123B7D94EB;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_990E4282A5D5942A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xACA9220)
#define CLASS_1_990E4282A5D5942A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xACA9250)
#define CLASS_1_990E4282A5D5942A___C__UPDATECAPSULEDATAS_B__7_0_OFFSET UNITYSDK_OFFSET(0xACA9260)

inline static constexpr unsigned int Class_1_990E4282A5D5942A___c_TypeDefinitionIndex = 48511;

class Class_1_990E4282A5D5942A___c : public ::System::Object
{
public:
	static ::Class_1_990E4282A5D5942A___c** StaticGet___9()
	{
		return (::Class_1_990E4282A5D5942A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_990E4282A5D5942A___c_TypeDefinitionIndex)->GetStaticField(0x4DED0);
	}
	static ::System::Predicate_1<::Class_1_7C1A8A123B7D94EB*>** StaticGet___9__7_0()
	{
		return (::System::Predicate_1<::Class_1_7C1A8A123B7D94EB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_990E4282A5D5942A___c_TypeDefinitionIndex)->GetStaticField(0x4DED8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _UpdateCapsuleDatas_b__7_0(::Class_1_7C1A8A123B7D94EB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7C1A8A123B7D94EB*))((::PBYTE)hIl2Cpp + CLASS_1_990E4282A5D5942A___C__UPDATECAPSULEDATAS_B__7_0_OFFSET))(this, a1);
	}
};
