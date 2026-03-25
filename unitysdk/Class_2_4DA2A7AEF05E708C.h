#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class HeartDialTraceConsumeRow; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceHeartDialNPC; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_4DA2A7AEF05E708C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10673FD0)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x10674670)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x10674CD0)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x106745C0)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10674AA0)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x10674D80)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_E49FC3D0AC1CB0F6_OFFSET UNITYSDK_OFFSET(0x10674AF0)
#define CLASS_2_4DA2A7AEF05E708C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10674140)
#define CLASS_2_4DA2A7AEF05E708C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x106748D0)
#define CLASS_2_4DA2A7AEF05E708C_TICK_OFFSET UNITYSDK_OFFSET(0x10674960)
#define CLASS_2_4DA2A7AEF05E708C__CTOR_OFFSET UNITYSDK_OFFSET(0x10673E70)

inline static constexpr unsigned int Class_2_4DA2A7AEF05E708C_TypeDefinitionIndex = 43246;

class Class_2_4DA2A7AEF05E708C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_1; // 0x0
	::Class_3_5775A4FEC79026BC* Field_2_6; // 0x18
	::RPG::GameCore::TaskContext* Field_2_3; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_7; // 0x28
	::RPG::Client::MapNpcDef* Field_2_0; // 0x30
	::RPG::GameCore::TraceHeartDialNPC* Field_2_2; // 0x38
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x40
	::Class_3_5775A4FEC79026BC* Field_2_5; // 0x48
	::RPG::GameCore::HeartDialTraceConsumeRow* Field_2_9; // 0x50
	::System::UInt32 Field_2_8; // 0x58
	::System::UInt32 Field_2_10; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TraceHeartDialNPC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TraceHeartDialNPC*))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_E49FC3D0AC1CB0F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_METHOD_2_E49FC3D0AC1CB0F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_METHOD_2_7744894CEC41BF06_1_OFFSET))(this);
	}
};
