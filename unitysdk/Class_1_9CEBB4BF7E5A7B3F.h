#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A075C859E16CAB2F_1;
class Class_1_BCE993FCA79BBCAF;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_9CEBB4BF7E5A7B3F_METHOD_1_71DCA76EBC9A1D30_OFFSET UNITYSDK_OFFSET(0x1C53F9D0)
#define CLASS_1_9CEBB4BF7E5A7B3F_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x1C53F6D0)
#define CLASS_1_9CEBB4BF7E5A7B3F_METHOD_1_A2FECA576332B43B_OFFSET UNITYSDK_OFFSET(0x1C53F740)
#define CLASS_1_9CEBB4BF7E5A7B3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53F6C0)

inline static constexpr unsigned int Class_1_9CEBB4BF7E5A7B3F_TypeDefinitionIndex = 41883;

class Class_1_9CEBB4BF7E5A7B3F : public ::System::Object
{
public:
	::Class_1_BCE993FCA79BBCAF* KOCFEPPMGNE; // 0x10
	::Class_1_A075C859E16CAB2F_1* LIOJKFIGGIJ; // 0x18

	::System::Void _ctor(::Class_1_A075C859E16CAB2F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A075C859E16CAB2F_1*))((::PBYTE)hIl2Cpp + CLASS_1_9CEBB4BF7E5A7B3F__CTOR_OFFSET))(this, a1);
	}

	::Class_1_BCE993FCA79BBCAF* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_BCE993FCA79BBCAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEBB4BF7E5A7B3F_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_A2FECA576332B43B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9CEBB4BF7E5A7B3F_METHOD_1_A2FECA576332B43B_OFFSET))(this, a1);
	}

	::System::Void Method_1_71DCA76EBC9A1D30(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9CEBB4BF7E5A7B3F_METHOD_1_71DCA76EBC9A1D30_OFFSET))(this, a1);
	}
};
