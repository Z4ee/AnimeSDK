#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_15B3DD195FDC216E_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1D348620)
#define CLASS_1_15B3DD195FDC216E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3488C0)

inline static constexpr unsigned int Class_1_15B3DD195FDC216E_TypeDefinitionIndex = 11235;

class Class_1_15B3DD195FDC216E : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* NJJEIJGIENP; // 0x10
	::Il2CppArray<::System::UInt32>* PBLPLDJKPEI; // 0x18
	::System::String* PMKEDGGOLKD; // 0x20
	::Il2CppArray<::System::UInt32>* PGAMJHMNLLN; // 0x28
	::System::UInt32 CDNGHDNMMAG; // 0x30
	::RPG::Client::TextID NMAHGFAPENI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15B3DD195FDC216E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_15B3DD195FDC216E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_15B3DD195FDC216E*&))((::PBYTE)hIl2Cpp + CLASS_1_15B3DD195FDC216E_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
