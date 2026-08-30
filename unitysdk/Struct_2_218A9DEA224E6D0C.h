#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define STRUCT_2_218A9DEA224E6D0C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B8F0C0)
#define STRUCT_2_218A9DEA224E6D0C_EQUALS_OFFSET UNITYSDK_OFFSET(0x2F2E4B0)
#define STRUCT_2_218A9DEA224E6D0C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2F2E650)
#define STRUCT_2_218A9DEA224E6D0C_METHOD_2_87877999976A7711_OFFSET UNITYSDK_OFFSET(0x3B8F060)
#define STRUCT_2_218A9DEA224E6D0C_METHOD_2_90311EA7BB922875_OFFSET UNITYSDK_OFFSET(0x1D710B80)
#define STRUCT_2_218A9DEA224E6D0C_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x2F2E3E0)
#define STRUCT_2_218A9DEA224E6D0C_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x2F2E3C0)

inline static constexpr unsigned int Struct_2_218A9DEA224E6D0C_TypeDefinitionIndex = 6470;

struct alignas(8) Struct_2_218A9DEA224E6D0C
{
	::Struct_2_6C64084003D66585 APKCDIIEJLO; // 0x10
	::System::Func_2<::Struct_2_6C64084003D66585, ::Struct_2_3906C24C646CC83F>* LGOENNFHOFE; // 0x98

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218A9DEA224E6D0C_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218A9DEA224E6D0C_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_87877999976A7711()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218A9DEA224E6D0C_METHOD_2_87877999976A7711_OFFSET))(this);
	}

	static ::Struct_2_218A9DEA224E6D0C Method_2_90311EA7BB922875(::System::Action* a1)
	{
		return ((::Struct_2_218A9DEA224E6D0C(*)(::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_218A9DEA224E6D0C_METHOD_2_90311EA7BB922875_OFFSET))(a1);
	}

	::System::Boolean Equals(::Struct_2_218A9DEA224E6D0C a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_218A9DEA224E6D0C))((::PBYTE)hIl2Cpp + STRUCT_2_218A9DEA224E6D0C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_218A9DEA224E6D0C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218A9DEA224E6D0C_GETHASHCODE_OFFSET))(this);
	}
};
