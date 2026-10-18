#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_96F671E4E83A73C0;
class Class_1_C6F4C4ABEDB8B5E9;

#define CLASS_1_F4408201756D2AED_METHOD_1_36B0C71034EACE26_OFFSET UNITYSDK_OFFSET(0x1EC84660)
#define CLASS_1_F4408201756D2AED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC90A90)
#define CLASS_1_F4408201756D2AED__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC90A80)

inline static constexpr unsigned int Class_1_F4408201756D2AED_TypeDefinitionIndex = 44305;

class Class_1_F4408201756D2AED : public ::System::Object
{
public:
	static ::Class_1_F4408201756D2AED** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_F4408201756D2AED**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4408201756D2AED_TypeDefinitionIndex)->GetStaticField(0x4C840);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4408201756D2AED__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4408201756D2AED__CCTOR_OFFSET))();
	}

	::System::Void Method_1_36B0C71034EACE26(::Class_1_96F671E4E83A73C0* a1, ::Class_1_C6F4C4ABEDB8B5E9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96F671E4E83A73C0*, ::Class_1_C6F4C4ABEDB8B5E9*))((::PBYTE)hIl2Cpp + CLASS_1_F4408201756D2AED_METHOD_1_36B0C71034EACE26_OFFSET))(this, a1, a2);
	}
};
