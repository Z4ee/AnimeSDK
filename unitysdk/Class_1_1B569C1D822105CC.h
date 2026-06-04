#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_607;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1B569C1D822105CC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA722E70)
#define CLASS_1_1B569C1D822105CC_METHOD_1_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0xA722C50)
#define CLASS_1_1B569C1D822105CC_METHOD_1_46C0FB33FA0C262F_OFFSET UNITYSDK_OFFSET(0xA722CE0)
#define CLASS_1_1B569C1D822105CC_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0xA722BA0)
#define CLASS_1_1B569C1D822105CC__CTOR_OFFSET UNITYSDK_OFFSET(0xA722EE0)

inline static constexpr unsigned int Class_1_1B569C1D822105CC_TypeDefinitionIndex = 57331;

class Class_1_1B569C1D822105CC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_607*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B569C1D822105CC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_607* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_607*))((::PBYTE)hIl2Cpp + CLASS_1_1B569C1D822105CC_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FED925376FD83FF(::Class_0_16E4307DCC419505_607* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_607*))((::PBYTE)hIl2Cpp + CLASS_1_1B569C1D822105CC_METHOD_1_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_46C0FB33FA0C262F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1B569C1D822105CC_METHOD_1_46C0FB33FA0C262F_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B569C1D822105CC_DISPOSE_OFFSET))(this);
	}
};
