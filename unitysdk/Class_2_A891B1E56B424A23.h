#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_A1F2D7D9DD4AE626;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_A891B1E56B424A23_METHOD_2_064B58FA19436120_1_OFFSET UNITYSDK_OFFSET(0xA996830)
#define CLASS_2_A891B1E56B424A23_METHOD_2_064B58FA19436120_OFFSET UNITYSDK_OFFSET(0xA9967C0)
#define CLASS_2_A891B1E56B424A23_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0xA996130)
#define CLASS_2_A891B1E56B424A23_METHOD_2_5AAD8A621CCD075B_OFFSET UNITYSDK_OFFSET(0xA9965F0)
#define CLASS_2_A891B1E56B424A23_METHOD_2_60BAB51FAB46DBD1_OFFSET UNITYSDK_OFFSET(0xA9968A0)
#define CLASS_2_A891B1E56B424A23_METHOD_2_6A61469FD94C414E_OFFSET UNITYSDK_OFFSET(0xA996720)
#define CLASS_2_A891B1E56B424A23_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xA996A30)
#define CLASS_2_A891B1E56B424A23_METHOD_2_99985F2011A636FC_OFFSET UNITYSDK_OFFSET(0xA996950)
#define CLASS_2_A891B1E56B424A23_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA996CB0)
#define CLASS_2_A891B1E56B424A23__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA996590)
#define CLASS_2_A891B1E56B424A23__CTOR_OFFSET UNITYSDK_OFFSET(0xA995CE0)
#define CLASS_2_A891B1E56B424A23__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA995DE0)
#define CLASS_2_A891B1E56B424A23__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA9961F0)
#define CLASS_2_A891B1E56B424A23__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA9961B0)
#define CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA997090)
#define CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA996F70)
#define CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA997030)
#define CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA996FD0)
#define CLASS_2_A891B1E56B424A23___SETUPVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0xA996D00)
#define CLASS_2_A891B1E56B424A23___SETUPVIEW_B__3_1_OFFSET UNITYSDK_OFFSET(0xA996E60)

inline static constexpr unsigned int Class_2_A891B1E56B424A23_TypeDefinitionIndex = 68121;

class Class_2_A891B1E56B424A23 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Int64 Field_2_0 = 0x40000000; // 0x0
	::System::Action_1<::System::Boolean>* Field_2_1; // 0x180
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_2; // 0x188
	::System::Int64 Field_2_3; // 0x190
	::System::Int64 Field_2_4; // 0x198
	::System::Boolean Field_2_5; // 0x1A0
	::System::Boolean Field_2_6; // 0x1A1
	::System::Boolean Field_2_7; // 0x1A2

	::System::Void _ctor(::System::Action_1<::System::Boolean>* a1, ::System::Boolean a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_5AAD8A621CCD075B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_5AAD8A621CCD075B_OFFSET))(this, a1);
	}

	::System::Void Method_2_064B58FA19436120(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_064B58FA19436120_OFFSET))(this, a1);
	}

	::System::Void Method_2_064B58FA19436120_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_064B58FA19436120_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_60BAB51FAB46DBD1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_60BAB51FAB46DBD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_99985F2011A636FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_99985F2011A636FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_6A61469FD94C414E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_6A61469FD94C414E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_A1F2D7D9DD4AE626* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_A1F2D7D9DD4AE626*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23_METHOD_2_08A44229CA25E941_OFFSET))(this);
	}

	::System::Void __SetupView_b__3_0(::System::Int64 a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___SETUPVIEW_B__3_0_OFFSET))(this, a1, a2);
	}

	::System::Void __SetupView_b__3_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___SETUPVIEW_B__3_1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A891B1E56B424A23___IFIXBASEPROXY__ADDHANDLERS_OFFSET))(this);
	}
};
