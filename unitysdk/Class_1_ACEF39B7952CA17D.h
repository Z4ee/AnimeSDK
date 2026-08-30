#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }

#define CLASS_1_ACEF39B7952CA17D_METHOD_1_2A1723284F399BDC_OFFSET UNITYSDK_OFFSET(0x1C06E330)
#define CLASS_1_ACEF39B7952CA17D_METHOD_1_5278BD1C79678EC4_OFFSET UNITYSDK_OFFSET(0x1C06E2F0)
#define CLASS_1_ACEF39B7952CA17D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06E2E0)

inline static constexpr unsigned int Class_1_ACEF39B7952CA17D_TypeDefinitionIndex = 36201;

class Class_1_ACEF39B7952CA17D : public ::System::Object
{
public:
	::System::IO::Stream* NHAILIKEHMJ; // 0x10

	::System::Void _ctor(::System::IO::Stream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_ACEF39B7952CA17D__CTOR_OFFSET))(this, a1);
	}

	::System::IO::Stream* Method_1_5278BD1C79678EC4()
	{
		return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACEF39B7952CA17D_METHOD_1_5278BD1C79678EC4_OFFSET))(this);
	}

	::System::Void Method_1_2A1723284F399BDC(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_ACEF39B7952CA17D_METHOD_1_2A1723284F399BDC_OFFSET))(this, a1);
	}
};
