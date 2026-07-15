#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_280B56AF77019A2F;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_9917656EF7E54194___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1784C870)
#define CLASS_1_9917656EF7E54194___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1784C8B0)
#define CLASS_1_9917656EF7E54194___C__GETSHOWSPONSORS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1784C8C0)

inline static constexpr unsigned int Class_1_9917656EF7E54194___c_TypeDefinitionIndex = 75442;

class Class_1_9917656EF7E54194___c : public ::System::Object
{
public:
	static ::Class_1_9917656EF7E54194___c** StaticGet___9()
	{
		return (::Class_1_9917656EF7E54194___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9917656EF7E54194___c_TypeDefinitionIndex)->GetStaticField(0x4A830);
	}
	static ::System::Comparison_1<::Class_1_280B56AF77019A2F*>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::Class_1_280B56AF77019A2F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9917656EF7E54194___c_TypeDefinitionIndex)->GetStaticField(0x4A838);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetShowSponsors_b__5_0(::Class_1_280B56AF77019A2F* a1, ::Class_1_280B56AF77019A2F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_280B56AF77019A2F*, ::Class_1_280B56AF77019A2F*))((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194___C__GETSHOWSPONSORS_B__5_0_OFFSET))(this, a1, a2);
	}
};
