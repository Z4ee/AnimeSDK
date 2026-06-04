#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"
#include "unitysdk/System/Object.h"

class Class_1_886F39594BD4EAF9;

#define CLASS_1_886F39594BD4EAF9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3402D0)
#define CLASS_1_886F39594BD4EAF9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A340300)
#define CLASS_1_886F39594BD4EAF9___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A340310)
#define CLASS_1_886F39594BD4EAF9___C___CCTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0x1A340360)
#define CLASS_1_886F39594BD4EAF9___C___CCTOR_B__23_2_OFFSET UNITYSDK_OFFSET(0x1A340370)

inline static constexpr unsigned int Class_1_886F39594BD4EAF9___c_TypeDefinitionIndex = 31428;

class Class_1_886F39594BD4EAF9___c : public ::System::Object
{
public:
	static ::Class_1_886F39594BD4EAF9___c** StaticGet___9()
	{
		return (::Class_1_886F39594BD4EAF9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_886F39594BD4EAF9___c_TypeDefinitionIndex)->GetStaticField(0x12580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9___C__CTOR_OFFSET))(this);
	}

	::Class_1_886F39594BD4EAF9* __cctor_b__23_0()
	{
		return ((::Class_1_886F39594BD4EAF9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9___C___CCTOR_B__23_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__23_1(::Enum_3_96F6662CA3713095_24 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9___C___CCTOR_B__23_1_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_24 __cctor_b__23_2(::System::Int32 a1)
	{
		return ((::Enum_3_96F6662CA3713095_24(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_886F39594BD4EAF9___C___CCTOR_B__23_2_OFFSET))(this, a1);
	}
};
