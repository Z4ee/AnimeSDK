#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_14.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_CBAD78806BD9CC54;
class Class_3_69464E63CE567F68;
namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_E3A75BB7F260C075_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x150D2C90)
#define CLASS_1_E3A75BB7F260C075_METHOD_1_419E39EBD8068EDD_OFFSET UNITYSDK_OFFSET(0x150D2EF0)
#define CLASS_1_E3A75BB7F260C075_METHOD_1_727C1B52D367CB39_OFFSET UNITYSDK_OFFSET(0x150D3B80)
#define CLASS_1_E3A75BB7F260C075_METHOD_1_7B18A8A21063BE25_OFFSET UNITYSDK_OFFSET(0x150D3A00)
#define CLASS_1_E3A75BB7F260C075_METHOD_1_84EB6A55F43554C2_OFFSET UNITYSDK_OFFSET(0x150D2A20)
#define CLASS_1_E3A75BB7F260C075_METHOD_1_8A2EDC8C58A00AD5_OFFSET UNITYSDK_OFFSET(0x150D2D10)
#define CLASS_1_E3A75BB7F260C075_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x150D3F60)
#define CLASS_1_E3A75BB7F260C075_METHOD_1_D7DBBF5A517C26BF_OFFSET UNITYSDK_OFFSET(0x150D2B10)
#define CLASS_1_E3A75BB7F260C075_METHOD_1_DC66234AC42F2B3F_OFFSET UNITYSDK_OFFSET(0x150D3460)
#define CLASS_1_E3A75BB7F260C075_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x150D4030)
#define CLASS_1_E3A75BB7F260C075__CTOR_OFFSET UNITYSDK_OFFSET(0x150D0F90)

inline static constexpr unsigned int Class_1_E3A75BB7F260C075_TypeDefinitionIndex = 46862;

class Class_1_E3A75BB7F260C075 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x78; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1E; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Field_1_5; // 0x10
	::System::Collections::Generic::Queue_1<::Class_1_CBAD78806BD9CC54*>* Field_1_6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3A75BB7F260C075__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_84EB6A55F43554C2(::FlowCanvas::FlowOutput* a1, ::FlowCanvas::FlowNode* a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E3A75BB7F260C075_METHOD_1_84EB6A55F43554C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3A75BB7F260C075_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_8A2EDC8C58A00AD5(::FlowCanvas::FlowOutput* a1, ::FlowCanvas::FlowNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_1_E3A75BB7F260C075_METHOD_1_8A2EDC8C58A00AD5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_419E39EBD8068EDD(::FlowCanvas::FlowNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_1_E3A75BB7F260C075_METHOD_1_419E39EBD8068EDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC66234AC42F2B3F(::FlowCanvas::FlowNode* a1, ::Enum_3_4608E37A1B3D374A_14 a2, ::System::Nullable_1<::System::Int32> a3, ::System::Nullable_1<::System::Int32> a4, ::System::String* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::Enum_3_4608E37A1B3D374A_14, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3A75BB7F260C075_METHOD_1_DC66234AC42F2B3F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_727C1B52D367CB39(::FlowCanvas::FlowOutput* a1, ::FlowCanvas::FlowNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_1_E3A75BB7F260C075_METHOD_1_727C1B52D367CB39_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D7DBBF5A517C26BF(::FlowCanvas::FlowOutput* a1, ::FlowCanvas::FlowNode* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_1_E3A75BB7F260C075_METHOD_1_D7DBBF5A517C26BF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3A75BB7F260C075_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3A75BB7F260C075_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_1_7B18A8A21063BE25(::Class_3_69464E63CE567F68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_69464E63CE567F68*))((::PBYTE)hIl2Cpp + CLASS_1_E3A75BB7F260C075_METHOD_1_7B18A8A21063BE25_OFFSET))(this, a1);
	}
};
