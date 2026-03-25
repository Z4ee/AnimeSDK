#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9F74B70AEC19180E_FailureReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_546;
class Class_0_16E4307DCC419505_558;
class Class_1_AB46F46A9A2F4F71;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9F74B70AEC19180E_METHOD_1_17A6376207F43153_OFFSET UNITYSDK_OFFSET(0x1092B630)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_1DE99E89E43C519B_OFFSET UNITYSDK_OFFSET(0x1092B890)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_274EC8419967882C_OFFSET UNITYSDK_OFFSET(0x1092B4D0)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_57F2980E839C8F51_OFFSET UNITYSDK_OFFSET(0x1092A060)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_6000F0BE9379D60C_OFFSET UNITYSDK_OFFSET(0x1092B2F0)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x1092B3D0)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_941C20F2A594087F_OFFSET UNITYSDK_OFFSET(0x1092B230)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_9F16DECC2BAF669D_OFFSET UNITYSDK_OFFSET(0x1092A310)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_A01A9009E7CA9C52_OFFSET UNITYSDK_OFFSET(0x1092A190)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_A3CD8010EE7E2C0B_OFFSET UNITYSDK_OFFSET(0x1092B470)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_CDCC313279276D27_OFFSET UNITYSDK_OFFSET(0x1092A5B0)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_D0E1AAF92396B816_OFFSET UNITYSDK_OFFSET(0x1092ACD0)
#define CLASS_1_9F74B70AEC19180E_METHOD_1_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x109156A0)
#define CLASS_1_9F74B70AEC19180E__CTOR_OFFSET UNITYSDK_OFFSET(0x1092A130)

inline static constexpr unsigned int Class_1_9F74B70AEC19180E_TypeDefinitionIndex = 50661;

class Class_1_9F74B70AEC19180E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_558* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E__CTOR_OFFSET))(this);
	}

	static ::Class_1_9F74B70AEC19180E* Method_1_57F2980E839C8F51(::Class_0_16E4307DCC419505_558* a1)
	{
		return ((::Class_1_9F74B70AEC19180E*(*)(::Class_0_16E4307DCC419505_558*))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_57F2980E839C8F51_OFFSET))(a1);
	}

	::System::Void Method_1_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A01A9009E7CA9C52(::Class_0_16E4307DCC419505_546* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a2, ::Class_1_9F74B70AEC19180E_FailureReason& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_546*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::Class_1_9F74B70AEC19180E_FailureReason&))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_A01A9009E7CA9C52_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D0E1AAF92396B816(::Class_0_16E4307DCC419505_546* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_546*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_D0E1AAF92396B816_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9F16DECC2BAF669D(::Class_0_16E4307DCC419505_546* a1, ::UnityEngine::Vector2Int a2, ::UnityEngine::Vector2Int a3, ::Class_1_9F74B70AEC19180E_FailureReason& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_546*, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::Class_1_9F74B70AEC19180E_FailureReason&))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_9F16DECC2BAF669D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_6000F0BE9379D60C(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_6000F0BE9379D60C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_AB46F46A9A2F4F71* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AB46F46A9A2F4F71*))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3CD8010EE7E2C0B(::Class_1_AB46F46A9A2F4F71* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AB46F46A9A2F4F71*))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_A3CD8010EE7E2C0B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_17A6376207F43153(::Class_0_16E4307DCC419505_546* a1, ::Class_1_AB46F46A9A2F4F71* a2, ::Class_1_AB46F46A9A2F4F71* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_546*, ::Class_1_AB46F46A9A2F4F71*, ::Class_1_AB46F46A9A2F4F71*))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_17A6376207F43153_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_274EC8419967882C(::Class_1_AB46F46A9A2F4F71* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AB46F46A9A2F4F71*))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_274EC8419967882C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1DE99E89E43C519B(::Class_0_16E4307DCC419505_546* a1, ::UnityEngine::Vector2Int a2, ::UnityEngine::Vector2Int a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_546*, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_1DE99E89E43C519B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_941C20F2A594087F(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_941C20F2A594087F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CDCC313279276D27(::Class_0_16E4307DCC419505_546* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a2, ::Class_1_9F74B70AEC19180E_FailureReason& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_546*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::Class_1_9F74B70AEC19180E_FailureReason&))((::PBYTE)hIl2Cpp + CLASS_1_9F74B70AEC19180E_METHOD_1_CDCC313279276D27_OFFSET))(this, a1, a2, a3);
	}
};
