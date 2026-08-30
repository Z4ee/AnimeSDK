#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_203A76DC77D7F043.h"
#include "unitysdk/System/Object.h"

class Class_1_2F02D0D2C192BA56;
namespace UnityEngine { class Material; }

#define CLASS_1_1D8DBED385F55542_CLEAR_OFFSET UNITYSDK_OFFSET(0xE59D660)
#define CLASS_1_1D8DBED385F55542__CTOR_OFFSET UNITYSDK_OFFSET(0xE59D6B0)

inline static constexpr unsigned int Class_1_1D8DBED385F55542_TypeDefinitionIndex = 69808;

class Class_1_1D8DBED385F55542 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Material*>* HNOOHPDGPEA; // 0x10
	::Class_1_2F02D0D2C192BA56* CPOAKCIODHA; // 0x18
	::Struct_2_203A76DC77D7F043 MJMEEOIEMMM; // 0x20
	::System::Int32 BJIOBCHFCAA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D8DBED385F55542__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D8DBED385F55542_CLEAR_OFFSET))(this);
	}
};
