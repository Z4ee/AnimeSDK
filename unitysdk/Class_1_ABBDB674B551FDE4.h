#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_ABBDB674B551FDE4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D6E520)
#define CLASS_1_ABBDB674B551FDE4_METHOD_1_24C325B6E061A6AD_OFFSET UNITYSDK_OFFSET(0x19D6E660)
#define CLASS_1_ABBDB674B551FDE4_METHOD_1_74AD48FDDB65C1F6_OFFSET UNITYSDK_OFFSET(0x19D6E530)
#define CLASS_1_ABBDB674B551FDE4_METHOD_1_C60EFA20BB8CA13F_OFFSET UNITYSDK_OFFSET(0x19D6E5B0)
#define CLASS_1_ABBDB674B551FDE4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19D6E510)
#define CLASS_1_ABBDB674B551FDE4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19D6E4F0)
#define CLASS_1_ABBDB674B551FDE4__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6E6A0)

inline static constexpr unsigned int Class_1_ABBDB674B551FDE4_TypeDefinitionIndex = 9727;

class Class_1_ABBDB674B551FDE4 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABBDB674B551FDE4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABBDB674B551FDE4_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABBDB674B551FDE4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABBDB674B551FDE4_DISPOSE_OFFSET))(this);
	}

	::System::Action* Method_1_74AD48FDDB65C1F6()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABBDB674B551FDE4_METHOD_1_74AD48FDDB65C1F6_OFFSET))(this);
	}

	::System::Action* Method_1_C60EFA20BB8CA13F(::System::Action* a1)
	{
		return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_ABBDB674B551FDE4_METHOD_1_C60EFA20BB8CA13F_OFFSET))(this, a1);
	}

	::System::Void Method_1_24C325B6E061A6AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ABBDB674B551FDE4_METHOD_1_24C325B6E061A6AD_OFFSET))(this, a1);
	}
};
