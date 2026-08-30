#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class HeartDialTraceConsumeRow; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceHeartDialNPC; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_4DA2A7AEF05E708C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A43C7F0)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x1A43D0F0)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x1A43D730)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x1A43D040)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A43D4F0)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x1A43D7E0)
#define CLASS_2_4DA2A7AEF05E708C_METHOD_2_E49FC3D0AC1CB0F6_OFFSET UNITYSDK_OFFSET(0x1A43D540)
#define CLASS_2_4DA2A7AEF05E708C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A43CAE0)
#define CLASS_2_4DA2A7AEF05E708C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A43D320)
#define CLASS_2_4DA2A7AEF05E708C_TICK_OFFSET UNITYSDK_OFFSET(0x1A43D3B0)
#define CLASS_2_4DA2A7AEF05E708C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A43C690)

inline static constexpr unsigned int Class_2_4DA2A7AEF05E708C_TypeDefinitionIndex = 53669;

class Class_2_4DA2A7AEF05E708C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* HKBOGHBKDCN; // 0x0
	::Class_3_07C3C4D2990C49EE* KPHGLEKEALH; // 0x18
	::Class_3_07C3C4D2990C49EE* JLMINPAEHAN; // 0x20
	::RPG::Client::MapNpcDef* MBBMEOAMAAI; // 0x28
	::RPG::GameCore::TraceHeartDialNPC* OFKGLJOAMLD; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::Class_3_07C3C4D2990C49EE* JOABCNLPPGI; // 0x40
	::Class_3_07C3C4D2990C49EE* JAPONKDHKLJ; // 0x48
	::RPG::GameCore::HeartDialTraceConsumeRow* LANNOKBOPJO; // 0x50
	::System::UInt32 BOKIMKHHGOI; // 0x58
	::System::UInt32 ALKIFAJPBFN; // 0x5C

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

	::System::Void Method_2_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_METHOD_2_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_2_E49FC3D0AC1CB0F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_METHOD_2_E49FC3D0AC1CB0F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4DA2A7AEF05E708C_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
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
