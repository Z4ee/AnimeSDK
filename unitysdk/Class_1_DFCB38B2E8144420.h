#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_DFCB38B2E8144420_CLEAR_OFFSET UNITYSDK_OFFSET(0x141842A0)
#define CLASS_1_DFCB38B2E8144420_METHOD_1_0829F0FFBB3F5CB6_OFFSET UNITYSDK_OFFSET(0x141842E0)
#define CLASS_1_DFCB38B2E8144420__CTOR_OFFSET UNITYSDK_OFFSET(0x14184410)

inline static constexpr unsigned int Class_1_DFCB38B2E8144420_TypeDefinitionIndex = 68538;

class Class_1_DFCB38B2E8144420 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFCB38B2E8144420__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFCB38B2E8144420_CLEAR_OFFSET))(this);
	}

	::System::String* Method_1_0829F0FFBB3F5CB6(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_DFCB38B2E8144420_METHOD_1_0829F0FFBB3F5CB6_OFFSET))(this, a1, a2);
	}
};
