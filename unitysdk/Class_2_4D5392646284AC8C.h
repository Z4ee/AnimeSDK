#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_461;
class Class_1_F91AD0C5A85E4AFA_17;
namespace RPG::GameCore { class FinishPerformanceMission; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_4D5392646284AC8C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE88F320)
#define CLASS_2_4D5392646284AC8C_METHOD_2_3CE3A20535BE55E6_OFFSET UNITYSDK_OFFSET(0xE8916B0)
#define CLASS_2_4D5392646284AC8C_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0xE8911C0)
#define CLASS_2_4D5392646284AC8C_METHOD_2_6B4A3A1B5816B81E_1_OFFSET UNITYSDK_OFFSET(0xE88F390)
#define CLASS_2_4D5392646284AC8C_METHOD_2_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xE88FBF0)
#define CLASS_2_4D5392646284AC8C_METHOD_2_88AE33360A2E2D2A_OFFSET UNITYSDK_OFFSET(0xE88FD10)
#define CLASS_2_4D5392646284AC8C_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xE8912A0)
#define CLASS_2_4D5392646284AC8C_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xE890C10)
#define CLASS_2_4D5392646284AC8C_METHOD_2_A3B36CD562D22DD5_OFFSET UNITYSDK_OFFSET(0xE890E40)
#define CLASS_2_4D5392646284AC8C_METHOD_2_AB6BBEA488EEBA32_OFFSET UNITYSDK_OFFSET(0xE890B20)
#define CLASS_2_4D5392646284AC8C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xE88F4B0)
#define CLASS_2_4D5392646284AC8C_METHOD_2_F476304D68944B28_OFFSET UNITYSDK_OFFSET(0xE891360)
#define CLASS_2_4D5392646284AC8C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE88F5B0)
#define CLASS_2_4D5392646284AC8C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE890A20)
#define CLASS_2_4D5392646284AC8C_TICK_OFFSET UNITYSDK_OFFSET(0xE890AC0)
#define CLASS_2_4D5392646284AC8C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE891AB0)
#define CLASS_2_4D5392646284AC8C__CTOR_OFFSET UNITYSDK_OFFSET(0xE88F310)

inline static constexpr unsigned int Class_2_4D5392646284AC8C_TypeDefinitionIndex = 53091;

class Class_2_4D5392646284AC8C : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_IGHKKECNLGO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4D5392646284AC8C_TypeDefinitionIndex)->GetStaticField(0x1650);
	}
	static ::System::Single* StaticGet_CIGIMIPDILE()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4D5392646284AC8C_TypeDefinitionIndex)->GetStaticField(0x1654);
	}
	::RPG::GameCore::FinishPerformanceMission* OFKGLJOAMLD; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F91AD0C5A85E4AFA_17*>* GAFIGJAGCJP; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
	::Class_0_16E4307DCC419505_461* BLDCFMJOMMK; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F91AD0C5A85E4AFA_17*>* JBGICBANKII; // 0x38
	::System::UInt32 IGGEDLCGKBH; // 0x40
	::System::UInt32 DJNJFAJBFCF; // 0x44
	::System::UInt32 ONIGLAHGGIO; // 0x48
	::System::Boolean PLNJDLLDFOP; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishPerformanceMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishPerformanceMission*))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_METHOD_2_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_2_6B4A3A1B5816B81E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_METHOD_2_6B4A3A1B5816B81E_1_OFFSET))(this);
	}

	::System::Void Method_2_AB6BBEA488EEBA32(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_METHOD_2_AB6BBEA488EEBA32_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_88AE33360A2E2D2A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_METHOD_2_88AE33360A2E2D2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F476304D68944B28(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_METHOD_2_F476304D68944B28_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CE3A20535BE55E6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_METHOD_2_3CE3A20535BE55E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A3B36CD562D22DD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_METHOD_2_A3B36CD562D22DD5_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}
};
