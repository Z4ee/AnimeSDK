#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_25.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_CBAD78806BD9CC54;
class Class_3_A58D335A9C54758F;
namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_7972A1813543C5F2_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16394F30)
#define CLASS_1_7972A1813543C5F2_METHOD_1_419E39EBD8068EDD_OFFSET UNITYSDK_OFFSET(0x163949D0)
#define CLASS_1_7972A1813543C5F2_METHOD_1_63596A7997E86B18_OFFSET UNITYSDK_OFFSET(0x16395BA0)
#define CLASS_1_7972A1813543C5F2_METHOD_1_727C1B52D367CB39_OFFSET UNITYSDK_OFFSET(0x163952E0)
#define CLASS_1_7972A1813543C5F2_METHOD_1_7B18A8A21063BE25_OFFSET UNITYSDK_OFFSET(0x163956C0)
#define CLASS_1_7972A1813543C5F2_METHOD_1_84EB6A55F43554C2_OFFSET UNITYSDK_OFFSET(0x16394FB0)
#define CLASS_1_7972A1813543C5F2_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x16395840)
#define CLASS_1_7972A1813543C5F2_METHOD_1_8A2EDC8C58A00AD5_OFFSET UNITYSDK_OFFSET(0x163959C0)
#define CLASS_1_7972A1813543C5F2_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x16395220)
#define CLASS_1_7972A1813543C5F2_METHOD_1_D7DBBF5A517C26BF_OFFSET UNITYSDK_OFFSET(0x163950A0)
#define CLASS_1_7972A1813543C5F2__CTOR_OFFSET UNITYSDK_OFFSET(0x16392F40)

inline static constexpr unsigned int Class_1_7972A1813543C5F2_TypeDefinitionIndex = 86270;

class Class_1_7972A1813543C5F2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x78; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1E; // 0x0
	::System::Collections::Generic::Queue_1<::Class_1_CBAD78806BD9CC54*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7972A1813543C5F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_419E39EBD8068EDD(::FlowCanvas::FlowNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_1_7972A1813543C5F2_METHOD_1_419E39EBD8068EDD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_84EB6A55F43554C2(::FlowCanvas::FlowOutput* a1, ::FlowCanvas::FlowNode* a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7972A1813543C5F2_METHOD_1_84EB6A55F43554C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7972A1813543C5F2_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Boolean Method_1_D7DBBF5A517C26BF(::FlowCanvas::FlowOutput* a1, ::FlowCanvas::FlowNode* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_1_7972A1813543C5F2_METHOD_1_D7DBBF5A517C26BF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_727C1B52D367CB39(::FlowCanvas::FlowOutput* a1, ::FlowCanvas::FlowNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_1_7972A1813543C5F2_METHOD_1_727C1B52D367CB39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B18A8A21063BE25(::Class_3_A58D335A9C54758F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A58D335A9C54758F*))((::PBYTE)hIl2Cpp + CLASS_1_7972A1813543C5F2_METHOD_1_7B18A8A21063BE25_OFFSET))(this, a1);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7972A1813543C5F2_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7972A1813543C5F2_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_8A2EDC8C58A00AD5(::FlowCanvas::FlowOutput* a1, ::FlowCanvas::FlowNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_1_7972A1813543C5F2_METHOD_1_8A2EDC8C58A00AD5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_63596A7997E86B18(::FlowCanvas::FlowNode* a1, ::Enum_3_4608E37A1B3D374A_25 a2, ::System::Nullable_1<::System::Int32> a3, ::System::Nullable_1<::System::Int32> a4, ::System::String* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::Enum_3_4608E37A1B3D374A_25, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7972A1813543C5F2_METHOD_1_63596A7997E86B18_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
