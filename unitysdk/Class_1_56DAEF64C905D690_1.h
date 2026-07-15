#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ED80D3EC77F13F93;
class Class_1_F73FBC726E2260CB;
namespace System { class Type; }

#define CLASS_1_56DAEF64C905D690_1_METHOD_1_0136226C6C09D487_OFFSET UNITYSDK_OFFSET(0x16F0AF00)
#define CLASS_1_56DAEF64C905D690_1_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x16F0AD70)
#define CLASS_1_56DAEF64C905D690_1_METHOD_1_8F9CBB9701813BD7_OFFSET UNITYSDK_OFFSET(0x16F0ADD0)
#define CLASS_1_56DAEF64C905D690_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0AEB0)

inline static constexpr unsigned int Class_1_56DAEF64C905D690_1_TypeDefinitionIndex = 60039;

class Class_1_56DAEF64C905D690_1 : public ::System::Object
{
public:
	::Class_1_F73FBC726E2260CB* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_F73FBC726E2260CB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F73FBC726E2260CB*))((::PBYTE)hIl2Cpp + CLASS_1_56DAEF64C905D690_1__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56DAEF64C905D690_1_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_8F9CBB9701813BD7()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56DAEF64C905D690_1_METHOD_1_8F9CBB9701813BD7_OFFSET))(this);
	}

	::System::Void Method_1_0136226C6C09D487(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_56DAEF64C905D690_1_METHOD_1_0136226C6C09D487_OFFSET))(this, a1);
	}
};
