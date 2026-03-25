#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8AD7347770446C20.h"

namespace System { class Object; }

#define CLASS_3_EF768D9135EF985D_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x105230E0)
#define CLASS_3_EF768D9135EF985D_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x105230F0)
#define CLASS_3_EF768D9135EF985D__CTOR_OFFSET UNITYSDK_OFFSET(0x105230A0)

inline static constexpr unsigned int Class_3_EF768D9135EF985D_TypeDefinitionIndex = 61080;

class Class_3_EF768D9135EF985D : public ::Class_2_8AD7347770446C20
{
public:
	::System::Boolean _CloseWindow_k__BackingField; // 0x18

	::System::Void _ctor(::System::Object* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EF768D9135EF985D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_CloseWindow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF768D9135EF985D_GET_CLOSEWINDOW_OFFSET))(this);
	}

	::System::Void set_CloseWindow(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EF768D9135EF985D_SET_CLOSEWINDOW_OFFSET))(this, value);
	}
};
