#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }

#define CLASS_2_7035E9417737FC94_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x175DBA00)
#define CLASS_2_7035E9417737FC94_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x175DBA90)
#define CLASS_2_7035E9417737FC94__CCTOR_OFFSET UNITYSDK_OFFSET(0x175DB980)
#define CLASS_2_7035E9417737FC94__CTOR_OFFSET UNITYSDK_OFFSET(0x175DB9F0)

inline static constexpr unsigned int Class_2_7035E9417737FC94_TypeDefinitionIndex = 62516;

class Class_2_7035E9417737FC94 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x9D; // 0x0
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Boolean>* Field_2_1; // 0x20
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Boolean>* Field_2_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7035E9417737FC94__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7035E9417737FC94__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7035E9417737FC94_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7035E9417737FC94_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
