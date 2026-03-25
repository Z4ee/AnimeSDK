#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_FAF146B3D74C3C3F_METHOD_1_8A4821B6962F6B25_OFFSET UNITYSDK_OFFSET(0x11638650)
#define CLASS_1_FAF146B3D74C3C3F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x116385E0)
#define CLASS_1_FAF146B3D74C3C3F__CTOR_OFFSET UNITYSDK_OFFSET(0x116385D0)
#define CLASS_1_FAF146B3D74C3C3F___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11638900)

inline static constexpr unsigned int Class_1_FAF146B3D74C3C3F_TypeDefinitionIndex = 64615;

class Class_1_FAF146B3D74C3C3F : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FAF146B3D74C3C3F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAF146B3D74C3C3F_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_8A4821B6962F6B25(::Class_1_FAF146B3D74C3C3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAF146B3D74C3C3F*))((::PBYTE)hIl2Cpp + CLASS_1_FAF146B3D74C3C3F_METHOD_1_8A4821B6962F6B25_OFFSET))(this, a1);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAF146B3D74C3C3F___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
