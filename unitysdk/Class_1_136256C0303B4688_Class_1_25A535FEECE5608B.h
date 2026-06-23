#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD31E4216DD30F97;

#define CLASS_1_136256C0303B4688_CLASS_1_25A535FEECE5608B_COMPARE_OFFSET UNITYSDK_OFFSET(0x1237CF80)
#define CLASS_1_136256C0303B4688_CLASS_1_25A535FEECE5608B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1237D020)
#define CLASS_1_136256C0303B4688_CLASS_1_25A535FEECE5608B__CTOR_OFFSET UNITYSDK_OFFSET(0x1237D010)

inline static constexpr unsigned int Class_1_136256C0303B4688_Class_1_25A535FEECE5608B_TypeDefinitionIndex = 47298;

class Class_1_136256C0303B4688_Class_1_25A535FEECE5608B : public ::System::Object
{
public:
	static ::Class_1_136256C0303B4688_Class_1_25A535FEECE5608B** StaticGet_Field_1_0()
	{
		return (::Class_1_136256C0303B4688_Class_1_25A535FEECE5608B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_136256C0303B4688_Class_1_25A535FEECE5608B_TypeDefinitionIndex)->GetStaticField(0x45760);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_136256C0303B4688_CLASS_1_25A535FEECE5608B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_136256C0303B4688_CLASS_1_25A535FEECE5608B__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::Class_1_FD31E4216DD30F97* a1, ::Class_1_FD31E4216DD30F97* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FD31E4216DD30F97*, ::Class_1_FD31E4216DD30F97*))((::PBYTE)hIl2Cpp + CLASS_1_136256C0303B4688_CLASS_1_25A535FEECE5608B_COMPARE_OFFSET))(this, a1, a2);
	}
};
