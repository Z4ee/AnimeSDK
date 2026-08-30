#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DD256562AA66A298;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_69655956809D1671_METHOD_1_44196695CAF284A8_OFFSET UNITYSDK_OFFSET(0x157217E0)
#define CLASS_1_69655956809D1671_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x15721570)
#define CLASS_1_69655956809D1671_METHOD_1_63B3C50ACCF3B12A_OFFSET UNITYSDK_OFFSET(0x157215D0)
#define CLASS_1_69655956809D1671__CTOR_OFFSET UNITYSDK_OFFSET(0x15721790)

inline static constexpr unsigned int Class_1_69655956809D1671_TypeDefinitionIndex = 62682;

class Class_1_69655956809D1671 : public ::System::Object
{
public:
	::Class_1_DD256562AA66A298* FPAEBLKDDHI; // 0x10

	::System::Void _ctor(::Class_1_DD256562AA66A298* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD256562AA66A298*))((::PBYTE)hIl2Cpp + CLASS_1_69655956809D1671__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69655956809D1671_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_63B3C50ACCF3B12A()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69655956809D1671_METHOD_1_63B3C50ACCF3B12A_OFFSET))(this);
	}

	::System::Void Method_1_44196695CAF284A8(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_69655956809D1671_METHOD_1_44196695CAF284A8_OFFSET))(this, a1);
	}
};
