#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_92603D4D7FD3242D_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11A6DCE0)
#define CLASS_3_92603D4D7FD3242D_METHOD_3_25666B778FEDA7B2_OFFSET UNITYSDK_OFFSET(0x11A6DE20)
#define CLASS_3_92603D4D7FD3242D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11A6E220)
#define CLASS_3_92603D4D7FD3242D__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6E100)

inline static constexpr unsigned int Class_3_92603D4D7FD3242D_TypeDefinitionIndex = 66952;

class Class_3_92603D4D7FD3242D : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_1; // 0x18
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_0; // 0x20
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92603D4D7FD3242D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92603D4D7FD3242D_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_25666B778FEDA7B2(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_92603D4D7FD3242D_METHOD_3_25666B778FEDA7B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92603D4D7FD3242D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
