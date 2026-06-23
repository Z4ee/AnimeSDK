#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E561C7DF9DF315A8_METHOD_1_1094E0C49C268B0B_OFFSET UNITYSDK_OFFSET(0x123A7980)
#define CLASS_1_E561C7DF9DF315A8_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x123A7BF0)
#define CLASS_1_E561C7DF9DF315A8_METHOD_1_3A40C186BB0D10E6_OFFSET UNITYSDK_OFFSET(0x123A77C0)
#define CLASS_1_E561C7DF9DF315A8_METHOD_1_8166D0965B55DC26_OFFSET UNITYSDK_OFFSET(0x123A7A30)
#define CLASS_1_E561C7DF9DF315A8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x123A7BA0)
#define CLASS_1_E561C7DF9DF315A8__CTOR_OFFSET UNITYSDK_OFFSET(0x123A7700)

inline static constexpr unsigned int Class_1_E561C7DF9DF315A8_TypeDefinitionIndex = 50858;

class Class_1_E561C7DF9DF315A8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x20; // 0x0
	::System::Collections::Generic::List_1<::System::Action*>* Field_1_2; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E561C7DF9DF315A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3A40C186BB0D10E6(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E561C7DF9DF315A8_METHOD_1_3A40C186BB0D10E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1094E0C49C268B0B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E561C7DF9DF315A8_METHOD_1_1094E0C49C268B0B_OFFSET))(this, a1);
	}

	::System::Void Method_1_8166D0965B55DC26(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E561C7DF9DF315A8_METHOD_1_8166D0965B55DC26_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E561C7DF9DF315A8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E561C7DF9DF315A8_METHOD_1_1290EA767C459179_OFFSET))(this);
	}
};
