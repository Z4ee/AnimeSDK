#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_9CB74D619A30E400_CLEAR_OFFSET UNITYSDK_OFFSET(0x160A25D0)
#define CLASS_1_9CB74D619A30E400_METHOD_1_AA821A537BDF125C_OFFSET UNITYSDK_OFFSET(0x160A2610)
#define CLASS_1_9CB74D619A30E400__CTOR_OFFSET UNITYSDK_OFFSET(0x160A27E0)

inline static constexpr unsigned int Class_1_9CB74D619A30E400_TypeDefinitionIndex = 73290;

class Class_1_9CB74D619A30E400 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB74D619A30E400__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB74D619A30E400_CLEAR_OFFSET))(this);
	}

	::System::String* Method_1_AA821A537BDF125C(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_9CB74D619A30E400_METHOD_1_AA821A537BDF125C_OFFSET))(this, a1, a2);
	}
};
