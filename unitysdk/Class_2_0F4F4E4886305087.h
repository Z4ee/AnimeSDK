#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_068EAC6B51178745;
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0F4F4E4886305087_INIT_OFFSET UNITYSDK_OFFSET(0x9989A60)
#define CLASS_2_0F4F4E4886305087_METHOD_2_04F62B6B0A089BBA_OFFSET UNITYSDK_OFFSET(0x998B880)
#define CLASS_2_0F4F4E4886305087_METHOD_2_3A5763B1D5BC86EE_OFFSET UNITYSDK_OFFSET(0x998B950)
#define CLASS_2_0F4F4E4886305087_METHOD_2_3E6AC14EE28F55D4_OFFSET UNITYSDK_OFFSET(0x998B380)
#define CLASS_2_0F4F4E4886305087_METHOD_2_5CDBA3B04DB53D1D_OFFSET UNITYSDK_OFFSET(0x998B690)
#define CLASS_2_0F4F4E4886305087_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x998B050)
#define CLASS_2_0F4F4E4886305087_METHOD_2_6DAFCD78BEC152AC_OFFSET UNITYSDK_OFFSET(0x998A910)
#define CLASS_2_0F4F4E4886305087_METHOD_2_80A85BCD6E0B2FCF_OFFSET UNITYSDK_OFFSET(0x998B170)
#define CLASS_2_0F4F4E4886305087_METHOD_2_AE5D2F3CFBE15D74_OFFSET UNITYSDK_OFFSET(0x998AC10)
#define CLASS_2_0F4F4E4886305087_METHOD_2_B160F9645705E0E4_OFFSET UNITYSDK_OFFSET(0x998B120)
#define CLASS_2_0F4F4E4886305087_METHOD_2_D9E34E162363C06E_OFFSET UNITYSDK_OFFSET(0x9989DB0)
#define CLASS_2_0F4F4E4886305087_METHOD_2_DE93D76325285526_OFFSET UNITYSDK_OFFSET(0x998B810)
#define CLASS_2_0F4F4E4886305087_METHOD_2_E39AEB20C81D0A64_OFFSET UNITYSDK_OFFSET(0x998A9D0)
#define CLASS_2_0F4F4E4886305087_METHOD_2_E658A310A9CE19AC_OFFSET UNITYSDK_OFFSET(0x998A6D0)
#define CLASS_2_0F4F4E4886305087_METHOD_2_EAD24AFE10569E66_1_OFFSET UNITYSDK_OFFSET(0x998B610)
#define CLASS_2_0F4F4E4886305087_METHOD_2_EAD24AFE10569E66_OFFSET UNITYSDK_OFFSET(0x998B300)
#define CLASS_2_0F4F4E4886305087__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x998A590)
#define CLASS_2_0F4F4E4886305087__CTOR_OFFSET UNITYSDK_OFFSET(0x998B9A0)
#define CLASS_2_0F4F4E4886305087___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x998B9D0)
#define CLASS_2_0F4F4E4886305087___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x998BA60)
#define CLASS_2_0F4F4E4886305087___ONADVENTUREPHASEENTERED_B__7_0_OFFSET UNITYSDK_OFFSET(0x998B9C0)

inline static constexpr unsigned int Class_2_0F4F4E4886305087_TypeDefinitionIndex = 60570;

class Class_2_0F4F4E4886305087 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_068EAC6B51178745*>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_3; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_4; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_5; // 0x38
	::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleTask*>* Field_2_2; // 0x40
	::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleTask*>* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_INIT_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_E658A310A9CE19AC(::Class_1_068EAC6B51178745* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_068EAC6B51178745*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_E658A310A9CE19AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE5D2F3CFBE15D74()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_AE5D2F3CFBE15D74_OFFSET))(this);
	}

	::System::Void Method_2_D9E34E162363C06E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_D9E34E162363C06E_OFFSET))(this);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_2_B160F9645705E0E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_B160F9645705E0E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_80A85BCD6E0B2FCF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_80A85BCD6E0B2FCF_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAD24AFE10569E66(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_EAD24AFE10569E66_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAD24AFE10569E66_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_EAD24AFE10569E66_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CDBA3B04DB53D1D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_5CDBA3B04DB53D1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E6AC14EE28F55D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_3E6AC14EE28F55D4_OFFSET))(this);
	}

	::System::Void Method_2_6DAFCD78BEC152AC(::RPG::GameCore::ConditionParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_6DAFCD78BEC152AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_E39AEB20C81D0A64(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_E39AEB20C81D0A64_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A5763B1D5BC86EE(::RPG::Client::ScheduleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_3A5763B1D5BC86EE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DE93D76325285526(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_DE93D76325285526_OFFSET))(this, a1);
	}

	::System::Void Method_2_04F62B6B0A089BBA(::Class_1_068EAC6B51178745* a1, ::System::Boolean a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_068EAC6B51178745*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087_METHOD_2_04F62B6B0A089BBA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __OnAdventurePhaseEntered_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087___ONADVENTUREPHASEENTERED_B__7_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F4F4E4886305087___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}
};
