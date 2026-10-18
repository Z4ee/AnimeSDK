#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DD256562AA66A298;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_3A7FBA6D19ABAA93_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x159F9960)
#define CLASS_1_3A7FBA6D19ABAA93_METHOD_1_63B3C50ACCF3B12A_OFFSET UNITYSDK_OFFSET(0x159F99C0)
#define CLASS_1_3A7FBA6D19ABAA93_METHOD_1_676E4EF2BBA9B1C2_OFFSET UNITYSDK_OFFSET(0x159F9BD0)
#define CLASS_1_3A7FBA6D19ABAA93__CTOR_OFFSET UNITYSDK_OFFSET(0x159F9B80)

inline static constexpr unsigned int Class_1_3A7FBA6D19ABAA93_TypeDefinitionIndex = 62600;

class Class_1_3A7FBA6D19ABAA93 : public ::System::Object
{
public:
	::Class_1_DD256562AA66A298* FPAEBLKDDHI; // 0x10

	::System::Void _ctor(::Class_1_DD256562AA66A298* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD256562AA66A298*))((::PBYTE)hIl2Cpp + CLASS_1_3A7FBA6D19ABAA93__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7FBA6D19ABAA93_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_63B3C50ACCF3B12A()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7FBA6D19ABAA93_METHOD_1_63B3C50ACCF3B12A_OFFSET))(this);
	}

	::System::Void Method_1_676E4EF2BBA9B1C2(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_3A7FBA6D19ABAA93_METHOD_1_676E4EF2BBA9B1C2_OFFSET))(this, a1);
	}
};
