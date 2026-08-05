#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3A216973E1BA9106.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }

#define CLASS_2_90518B9B94D3287D_METHOD_2_35B9A8F7DFD21D31_OFFSET UNITYSDK_OFFSET(0x138CEB30)
#define CLASS_2_90518B9B94D3287D__CTOR_OFFSET UNITYSDK_OFFSET(0x138CEB20)

inline static constexpr unsigned int Class_2_90518B9B94D3287D_TypeDefinitionIndex = 88379;

class Class_2_90518B9B94D3287D : public ::Class_1_3A216973E1BA9106
{
public:
	::Class_1_0D6706375CDAAE8C* Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x20

	::System::Void _ctor(::Class_1_0D6706375CDAAE8C* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_90518B9B94D3287D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_35B9A8F7DFD21D31(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_90518B9B94D3287D_METHOD_2_35B9A8F7DFD21D31_OFFSET))(this, a1);
	}
};
