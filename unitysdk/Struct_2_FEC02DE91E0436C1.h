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

#define STRUCT_2_FEC02DE91E0436C1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20F4C80)
#define STRUCT_2_FEC02DE91E0436C1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1522F90)
#define STRUCT_2_FEC02DE91E0436C1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1523040)
#define STRUCT_2_FEC02DE91E0436C1_METHOD_2_8FE55CF7CFCF60AC_OFFSET UNITYSDK_OFFSET(0x17A53EA0)
#define STRUCT_2_FEC02DE91E0436C1_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x20F4C30)
#define STRUCT_2_FEC02DE91E0436C1_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1522EE0)
#define STRUCT_2_FEC02DE91E0436C1_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1522EC0)

inline static constexpr unsigned int Struct_2_FEC02DE91E0436C1_TypeDefinitionIndex = 8793;

struct alignas(8) Struct_2_FEC02DE91E0436C1
{
	::Struct_2_6C64084003D66585 Field_2_0; // 0x10
	::System::Func_2<::Struct_2_6C64084003D66585, ::Struct_2_3906C24C646CC83F>* Field_2_1; // 0x98

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FEC02DE91E0436C1_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FEC02DE91E0436C1_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FEC02DE91E0436C1_METHOD_2_9DB2C80C0CD4760B_OFFSET))(this);
	}

	static ::Struct_2_FEC02DE91E0436C1 Method_2_8FE55CF7CFCF60AC(::System::Action* a1)
	{
		return ((::Struct_2_FEC02DE91E0436C1(*)(::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_FEC02DE91E0436C1_METHOD_2_8FE55CF7CFCF60AC_OFFSET))(a1);
	}

	::System::Boolean Equals(::Struct_2_FEC02DE91E0436C1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FEC02DE91E0436C1))((::PBYTE)hIl2Cpp + STRUCT_2_FEC02DE91E0436C1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_FEC02DE91E0436C1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FEC02DE91E0436C1_GETHASHCODE_OFFSET))(this);
	}
};
