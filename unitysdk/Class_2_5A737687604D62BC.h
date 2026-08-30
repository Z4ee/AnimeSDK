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

#define CLASS_2_5A737687604D62BC_INIT_OFFSET UNITYSDK_OFFSET(0xD233790)
#define CLASS_2_5A737687604D62BC_METHOD_2_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0xD2347F0)
#define CLASS_2_5A737687604D62BC_METHOD_2_363E7CD5A0A216FD_1_OFFSET UNITYSDK_OFFSET(0xD235170)
#define CLASS_2_5A737687604D62BC_METHOD_2_363E7CD5A0A216FD_OFFSET UNITYSDK_OFFSET(0xD234EB0)
#define CLASS_2_5A737687604D62BC_METHOD_2_3E6AC14EE28F55D4_OFFSET UNITYSDK_OFFSET(0xD234F30)
#define CLASS_2_5A737687604D62BC_METHOD_2_401C7F6E5F591601_OFFSET UNITYSDK_OFFSET(0xD234CC0)
#define CLASS_2_5A737687604D62BC_METHOD_2_5755714884A90103_OFFSET UNITYSDK_OFFSET(0xD2353B0)
#define CLASS_2_5A737687604D62BC_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0xD234BF0)
#define CLASS_2_5A737687604D62BC_METHOD_2_641867738B4727DA_OFFSET UNITYSDK_OFFSET(0xD234D10)
#define CLASS_2_5A737687604D62BC_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xD233AB0)
#define CLASS_2_5A737687604D62BC_METHOD_2_6DAFCD78BEC152AC_OFFSET UNITYSDK_OFFSET(0xD2344D0)
#define CLASS_2_5A737687604D62BC_METHOD_2_886D94432EA94614_OFFSET UNITYSDK_OFFSET(0xD2351F0)
#define CLASS_2_5A737687604D62BC_METHOD_2_D0BC64A7F8C1B272_OFFSET UNITYSDK_OFFSET(0xD235480)
#define CLASS_2_5A737687604D62BC_METHOD_2_DE93D76325285526_OFFSET UNITYSDK_OFFSET(0xD235340)
#define CLASS_2_5A737687604D62BC_METHOD_2_E39AEB20C81D0A64_OFFSET UNITYSDK_OFFSET(0xD234590)
#define CLASS_2_5A737687604D62BC_METHOD_2_E658A310A9CE19AC_OFFSET UNITYSDK_OFFSET(0xD2342C0)
#define CLASS_2_5A737687604D62BC__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD234120)
#define CLASS_2_5A737687604D62BC__CTOR_OFFSET UNITYSDK_OFFSET(0xD2354D0)
#define CLASS_2_5A737687604D62BC___ONADVENTUREPHASEENTERED_B__7_0_OFFSET UNITYSDK_OFFSET(0xD2354F0)

inline static constexpr unsigned int Class_2_5A737687604D62BC_TypeDefinitionIndex = 65851;

class Class_2_5A737687604D62BC : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* JJBNGKNBBBF; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* NGNJFHPDKFC; // 0x18
	::System::Collections::Generic::HashSet_1<::Class_1_068EAC6B51178745*>* MCLEHAOABNK; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleTask*>* BOHHGNKMOHG; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleTask*>* IABMBEOKIPD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DNBCEIAJKOK; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* CMNKMPCEHDE; // 0x40
	::System::Collections::Generic::HashSet_1<::System::UInt32>* NAPAFJDJHMJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_INIT_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_E658A310A9CE19AC(::Class_1_068EAC6B51178745* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_068EAC6B51178745*))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_E658A310A9CE19AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_159CB55E631AFCB9_OFFSET))(this);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_2_401C7F6E5F591601(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_401C7F6E5F591601_OFFSET))(this, a1);
	}

	::System::Void Method_2_641867738B4727DA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_641867738B4727DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_363E7CD5A0A216FD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_363E7CD5A0A216FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_363E7CD5A0A216FD_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_363E7CD5A0A216FD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_886D94432EA94614(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_886D94432EA94614_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E6AC14EE28F55D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_3E6AC14EE28F55D4_OFFSET))(this);
	}

	::System::Void Method_2_6DAFCD78BEC152AC(::RPG::GameCore::ConditionParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_6DAFCD78BEC152AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_E39AEB20C81D0A64(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_E39AEB20C81D0A64_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BC64A7F8C1B272(::RPG::Client::ScheduleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_D0BC64A7F8C1B272_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DE93D76325285526(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_DE93D76325285526_OFFSET))(this, a1);
	}

	::System::Void Method_2_5755714884A90103(::Class_1_068EAC6B51178745* a1, ::System::Boolean a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_068EAC6B51178745*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC_METHOD_2_5755714884A90103_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __OnAdventurePhaseEntered_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A737687604D62BC___ONADVENTUREPHASEENTERED_B__7_0_OFFSET))(this);
	}
};
