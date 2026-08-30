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

#define STRUCT_2_F8D9CEC872B937AF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A52090)
#define STRUCT_2_F8D9CEC872B937AF_EQUALS_OFFSET UNITYSDK_OFFSET(0x37A0310)
#define STRUCT_2_F8D9CEC872B937AF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x37A04B0)
#define STRUCT_2_F8D9CEC872B937AF_METHOD_2_87877999976A7711_OFFSET UNITYSDK_OFFSET(0x3A52030)
#define STRUCT_2_F8D9CEC872B937AF_METHOD_2_8FE55CF7CFCF60AC_1_OFFSET UNITYSDK_OFFSET(0x1639C560)
#define STRUCT_2_F8D9CEC872B937AF_METHOD_2_8FE55CF7CFCF60AC_OFFSET UNITYSDK_OFFSET(0x1639C440)
#define STRUCT_2_F8D9CEC872B937AF_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x37A0240)
#define STRUCT_2_F8D9CEC872B937AF_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x37A0220)

inline static constexpr unsigned int Struct_2_F8D9CEC872B937AF_TypeDefinitionIndex = 6422;

struct alignas(8) Struct_2_F8D9CEC872B937AF
{
	::Struct_2_6C64084003D66585 APKCDIIEJLO; // 0x10
	::System::Action_1<::Struct_2_6C64084003D66585>* LGOENNFHOFE; // 0x98

	static ::Struct_2_F8D9CEC872B937AF Method_2_8FE55CF7CFCF60AC(::System::Action* a1)
	{
		return ((::Struct_2_F8D9CEC872B937AF(*)(::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_F8D9CEC872B937AF_METHOD_2_8FE55CF7CFCF60AC_OFFSET))(a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F8D9CEC872B937AF_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F8D9CEC872B937AF_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_87877999976A7711()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F8D9CEC872B937AF_METHOD_2_87877999976A7711_OFFSET))(this);
	}

	static ::Struct_2_F8D9CEC872B937AF Method_2_8FE55CF7CFCF60AC_1(::System::Action* a1)
	{
		return ((::Struct_2_F8D9CEC872B937AF(*)(::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_F8D9CEC872B937AF_METHOD_2_8FE55CF7CFCF60AC_1_OFFSET))(a1);
	}

	::System::Boolean Equals(::Struct_2_F8D9CEC872B937AF a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_F8D9CEC872B937AF))((::PBYTE)hIl2Cpp + STRUCT_2_F8D9CEC872B937AF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_F8D9CEC872B937AF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F8D9CEC872B937AF_GETHASHCODE_OFFSET))(this);
	}
};
