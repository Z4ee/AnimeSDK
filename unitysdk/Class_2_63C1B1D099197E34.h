#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_3_025FF4981524A424_141;
class Class_3_025FF4981524A424_216;
class Class_3_48A3D3A34C52331D_9;
class Class_3_C38422C17DA175EB_6;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_63C1B1D099197E34_METHOD_2_01630A2C27A92C70_OFFSET UNITYSDK_OFFSET(0x16027140)
#define CLASS_2_63C1B1D099197E34_METHOD_2_7DE8D29A635A488A_OFFSET UNITYSDK_OFFSET(0x16027590)
#define CLASS_2_63C1B1D099197E34_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x160270F0)
#define CLASS_2_63C1B1D099197E34_METHOD_2_CFD66008226ADAC6_OFFSET UNITYSDK_OFFSET(0x16027390)
#define CLASS_2_63C1B1D099197E34_ONSTART_OFFSET UNITYSDK_OFFSET(0x160270B0)
#define CLASS_2_63C1B1D099197E34__CTOR_OFFSET UNITYSDK_OFFSET(0x16027130)

inline static constexpr unsigned int Class_2_63C1B1D099197E34_TypeDefinitionIndex = 78199;

class Class_2_63C1B1D099197E34 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_01630A2C27A92C70(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::Class_3_025FF4981524A424_216*>* a3, ::System::Action_1<::Class_3_025FF4981524A424_216*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_216*>*, ::System::Action_1<::Class_3_025FF4981524A424_216*>*))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34_METHOD_2_01630A2C27A92C70_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CFD66008226ADAC6(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_3_C38422C17DA175EB_6*>* a2, ::System::Action_1<::Class_3_025FF4981524A424_141*>* a3, ::System::Action_1<::Class_3_025FF4981524A424_141*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_C38422C17DA175EB_6*>*, ::System::Action_1<::Class_3_025FF4981524A424_141*>*, ::System::Action_1<::Class_3_025FF4981524A424_141*>*))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34_METHOD_2_CFD66008226ADAC6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7DE8D29A635A488A(::System::Int32 a1, ::System::Action_1<::Class_3_48A3D3A34C52331D_9*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_48A3D3A34C52331D_9*>*))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34_METHOD_2_7DE8D29A635A488A_OFFSET))(this, a1, a2);
	}
};
