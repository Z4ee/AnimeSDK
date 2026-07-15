#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_A1F2D7D9DD4AE626;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_346879A217A503EE_METHOD_2_1086E351241EDD3B_1_OFFSET UNITYSDK_OFFSET(0x16DA63F0)
#define CLASS_2_346879A217A503EE_METHOD_2_1086E351241EDD3B_OFFSET UNITYSDK_OFFSET(0x16DA6380)
#define CLASS_2_346879A217A503EE_METHOD_2_55157FBA4997D865_OFFSET UNITYSDK_OFFSET(0x16DA62E0)
#define CLASS_2_346879A217A503EE_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x16DA6670)
#define CLASS_2_346879A217A503EE_METHOD_2_5CC589A90C8895C1_OFFSET UNITYSDK_OFFSET(0x16DA6550)
#define CLASS_2_346879A217A503EE_METHOD_2_67092B198ADCB2A8_OFFSET UNITYSDK_OFFSET(0x16DA6460)
#define CLASS_2_346879A217A503EE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16DA6990)
#define CLASS_2_346879A217A503EE_METHOD_2_DEDD31AF6F4E4818_OFFSET UNITYSDK_OFFSET(0x16DA5BD0)
#define CLASS_2_346879A217A503EE_METHOD_2_F0F6A8A07770D2DE_OFFSET UNITYSDK_OFFSET(0x16DA61B0)
#define CLASS_2_346879A217A503EE__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x16DA6150)
#define CLASS_2_346879A217A503EE__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA5650)
#define CLASS_2_346879A217A503EE__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x16DA5780)
#define CLASS_2_346879A217A503EE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16DA5CC0)
#define CLASS_2_346879A217A503EE__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x16DA5C80)
#define CLASS_2_346879A217A503EE___SETUPVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0x16DA69E0)
#define CLASS_2_346879A217A503EE___SETUPVIEW_B__3_1_OFFSET UNITYSDK_OFFSET(0x16DA6BC0)

inline static constexpr unsigned int Class_2_346879A217A503EE_TypeDefinitionIndex = 69607;

class Class_2_346879A217A503EE : public ::RPG::Client::UIController
{
public:
	// static const ::System::Int64 Field_2_0 = 0x40000000; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_1; // 0x180
	::System::Action_1<::System::Boolean>* Field_2_2; // 0x188
	::System::Int64 Field_2_3; // 0x190
	::System::Int64 Field_2_4; // 0x198
	::System::Boolean Field_2_5; // 0x1A0
	::System::Boolean Field_2_6; // 0x1A1
	::System::Boolean Field_2_7; // 0x1A2

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

	::System::Void Method_2_F0F6A8A07770D2DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_F0F6A8A07770D2DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1086E351241EDD3B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_1086E351241EDD3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_1086E351241EDD3B_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_1086E351241EDD3B_1_OFFSET))(this, a1);
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

	::System::Void Method_2_55157FBA4997D865()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_346879A217A503EE_METHOD_2_55157FBA4997D865_OFFSET))(this);
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
