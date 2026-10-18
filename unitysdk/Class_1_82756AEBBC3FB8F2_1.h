#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_82756AEBBC3FB8F2_1_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1D250D50)
#define CLASS_1_82756AEBBC3FB8F2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D250FD0)

inline static constexpr unsigned int Class_1_82756AEBBC3FB8F2_1_TypeDefinitionIndex = 14409;

class Class_1_82756AEBBC3FB8F2_1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* AKOCMKFLEBF; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::System::String* OPBOFEBHDCM; // 0x20
	::RPG::Client::TextID OENAMINOLLF; // 0x28
	::System::UInt32 HDDIKPLHHPP; // 0x38
	::System::UInt32 BEOFPCAACEP; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82756AEBBC3FB8F2_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_82756AEBBC3FB8F2_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_82756AEBBC3FB8F2_1*&))((::PBYTE)hIl2Cpp + CLASS_1_82756AEBBC3FB8F2_1_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
