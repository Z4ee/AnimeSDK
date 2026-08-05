#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3A216973E1BA9106.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_721A2D18765A772C_METHOD_2_122C6FA3C48B4E9A_OFFSET UNITYSDK_OFFSET(0x1871A6D0)
#define CLASS_2_721A2D18765A772C__CTOR_OFFSET UNITYSDK_OFFSET(0x1871A610)

inline static constexpr unsigned int Class_2_721A2D18765A772C_TypeDefinitionIndex = 69043;

class Class_2_721A2D18765A772C : public ::Class_1_3A216973E1BA9106
{
public:
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_2_0; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + CLASS_2_721A2D18765A772C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_122C6FA3C48B4E9A(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_721A2D18765A772C_METHOD_2_122C6FA3C48B4E9A_OFFSET))(this, a1);
	}
};
