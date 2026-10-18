#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_EB0D6451515C5549;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_8B3B6C00C175FAAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF875020)
#define CLASS_2_8B3B6C00C175FAAB_METHOD_2_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0xF875EA0)
#define CLASS_2_8B3B6C00C175FAAB_METHOD_2_1E83AA69B5F34824_OFFSET UNITYSDK_OFFSET(0xF875740)
#define CLASS_2_8B3B6C00C175FAAB_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xF875150)
#define CLASS_2_8B3B6C00C175FAAB_METHOD_2_5DF8A193E0F647B6_OFFSET UNITYSDK_OFFSET(0xF875FB0)
#define CLASS_2_8B3B6C00C175FAAB_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xF875F60)
#define CLASS_2_8B3B6C00C175FAAB_METHOD_2_77D3C96DC388AD54_OFFSET UNITYSDK_OFFSET(0xF875A30)
#define CLASS_2_8B3B6C00C175FAAB_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xF875E40)
#define CLASS_2_8B3B6C00C175FAAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF8751C0)
#define CLASS_2_8B3B6C00C175FAAB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF875CA0)
#define CLASS_2_8B3B6C00C175FAAB_TICK_OFFSET UNITYSDK_OFFSET(0xF875DE0)
#define CLASS_2_8B3B6C00C175FAAB__CTOR_OFFSET UNITYSDK_OFFSET(0xF875010)

inline static constexpr unsigned int Class_2_8B3B6C00C175FAAB_TypeDefinitionIndex = 58276;

class Class_2_8B3B6C00C175FAAB : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* JPJAMENFBKD; // 0x0
	// static const ::System::String* LFMEPFFAJHG; // 0x0
	::System::String* INEKCEFFNCL; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_EB0D6451515C5549* OFKGLJOAMLD; // 0x28
	::System::Boolean GHPHJKOBOJI; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EB0D6451515C5549* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EB0D6451515C5549*))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB_METHOD_2_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_1E83AA69B5F34824(::RPG::GameCore::GameEntity* a1, ::System::String*& a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB_METHOD_2_1E83AA69B5F34824_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_77D3C96DC388AD54(::RPG::GameCore::BubbleTalkInfo* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB_METHOD_2_77D3C96DC388AD54_OFFSET))(this, a1, a2, a3);
	}

	static ::Il2CppArray<::System::Object*>* Method_2_5DF8A193E0F647B6(::System::Object* a1)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B3B6C00C175FAAB_METHOD_2_5DF8A193E0F647B6_OFFSET))(a1);
	}
};
