#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_A1F2D7D9DD4AE626;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_346879A217A503EE_METHOD_2_29861B2485680DBB_1_OFFSET UNITYSDK_OFFSET(0xBA831E0)
#define CLASS_2_346879A217A503EE_METHOD_2_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0xBA83170)
#define CLASS_2_346879A217A503EE_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xBA83460)
#define CLASS_2_346879A217A503EE_METHOD_2_5CC589A90C8895C1_OFFSET UNITYSDK_OFFSET(0xBA83340)
#define CLASS_2_346879A217A503EE_METHOD_2_67092B198ADCB2A8_OFFSET UNITYSDK_OFFSET(0xBA83250)
#define CLASS_2_346879A217A503EE_METHOD_2_C6804E5BEDA102E7_OFFSET UNITYSDK_OFFSET(0xBA82FA0)
#define CLASS_2_346879A217A503EE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA83780)
#define CLASS_2_346879A217A503EE_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0xBA830D0)
#define CLASS_2_346879A217A503EE_METHOD_2_DEDD31AF6F4E4818_OFFSET UNITYSDK_OFFSET(0xBA829C0)
#define CLASS_2_346879A217A503EE__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBA82F40)
#define CLASS_2_346879A217A503EE__CTOR_OFFSET UNITYSDK_OFFSET(0xBA82440)
#define CLASS_2_346879A217A503EE__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBA82570)
#define CLASS_2_346879A217A503EE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBA82AB0)
#define CLASS_2_346879A217A503EE__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBA82A70)
#define CLASS_2_346879A217A503EE___SETUPVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0xBA837D0)
#define CLASS_2_346879A217A503EE___SETUPVIEW_B__3_1_OFFSET UNITYSDK_OFFSET(0xBA839B0)

inline static constexpr unsigned int Class_2_346879A217A503EE_TypeDefinitionIndex = 72927;

class Class_2_346879A217A503EE : public ::RPG::Client::UIController
{
public:
	// static const ::System::Int64 APHOECLDJKJ = 0x40000000; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* HMLIPMFHDGK; // 0x190
	::System::Action_1<::System::Boolean>* MCLELAFIEBJ; // 0x198
	::System::Int64 ILBLJFLGAJD; // 0x1A0
	::System::Boolean DFIAMJNMEAP; // 0x1A8
	::System::Boolean KLCFJOLMICI; // 0x1A9
	::System::Boolean MNJOPAEEGLD; // 0x1AA
	::System::Int64 LDPEGLBLALO; // 0x1B0

	::System::Void _ctor(::System::Action_1<::System::Boolean>* a1, ::System::Boolean a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_C6804E5BEDA102E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_C6804E5BEDA102E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_29861B2485680DBB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_29861B2485680DBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_29861B2485680DBB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_29861B2485680DBB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_67092B198ADCB2A8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_67092B198ADCB2A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CC589A90C8895C1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_5CC589A90C8895C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_A1F2D7D9DD4AE626* Method_2_DEDD31AF6F4E4818()
	{
		return ((::Class_2_A1F2D7D9DD4AE626*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_DEDD31AF6F4E4818_OFFSET))(this);
	}

	::System::Void __SetupView_b__3_0(::System::Int64 a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE___SETUPVIEW_B__3_0_OFFSET))(this, a1, a2);
	}

	::System::Void __SetupView_b__3_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE___SETUPVIEW_B__3_1_OFFSET))(this, a1);
	}
};
