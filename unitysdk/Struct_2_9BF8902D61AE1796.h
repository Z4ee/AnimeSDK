#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define STRUCT_2_9BF8902D61AE1796_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3860B10)
#define STRUCT_2_9BF8902D61AE1796_EQUALS_OFFSET UNITYSDK_OFFSET(0x2C019C0)
#define STRUCT_2_9BF8902D61AE1796_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3860BF0)
#define STRUCT_2_9BF8902D61AE1796_METHOD_2_87877999976A7711_OFFSET UNITYSDK_OFFSET(0x3860AB0)
#define STRUCT_2_9BF8902D61AE1796_METHOD_2_8FE55CF7CFCF60AC_1_OFFSET UNITYSDK_OFFSET(0x19F502E0)
#define STRUCT_2_9BF8902D61AE1796_METHOD_2_8FE55CF7CFCF60AC_OFFSET UNITYSDK_OFFSET(0x19F501C0)
#define STRUCT_2_9BF8902D61AE1796_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x2C018F0)
#define STRUCT_2_9BF8902D61AE1796_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x2C018D0)

inline static constexpr unsigned int Struct_2_9BF8902D61AE1796_TypeDefinitionIndex = 6805;

struct alignas(8) Struct_2_9BF8902D61AE1796
{
	::Struct_2_6C64084003D66585 Field_2_0; // 0x10
	::System::Action_1<::Struct_2_6C64084003D66585>* Field_2_1; // 0x98

	static ::Struct_2_9BF8902D61AE1796 Method_2_8FE55CF7CFCF60AC(::System::Action* a1)
	{
		return ((::Struct_2_9BF8902D61AE1796(*)(::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_9BF8902D61AE1796_METHOD_2_8FE55CF7CFCF60AC_OFFSET))(a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BF8902D61AE1796_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BF8902D61AE1796_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_87877999976A7711()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BF8902D61AE1796_METHOD_2_87877999976A7711_OFFSET))(this);
	}

	static ::Struct_2_9BF8902D61AE1796 Method_2_8FE55CF7CFCF60AC_1(::System::Action* a1)
	{
		return ((::Struct_2_9BF8902D61AE1796(*)(::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_9BF8902D61AE1796_METHOD_2_8FE55CF7CFCF60AC_1_OFFSET))(a1);
	}

	::System::Boolean Equals(::Struct_2_9BF8902D61AE1796 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9BF8902D61AE1796))((::PBYTE)hIl2Cpp + STRUCT_2_9BF8902D61AE1796_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_9BF8902D61AE1796_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BF8902D61AE1796_GETHASHCODE_OFFSET))(this);
	}
};
