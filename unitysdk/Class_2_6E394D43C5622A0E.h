#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayTarotBookOptionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6E394D43C5622A0E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15488720)
#define CLASS_2_6E394D43C5622A0E_METHOD_2_722D24E25B6856C2_OFFSET UNITYSDK_OFFSET(0x15488BD0)
#define CLASS_2_6E394D43C5622A0E_METHOD_2_7411494DA7276605_OFFSET UNITYSDK_OFFSET(0x15488A20)
#define CLASS_2_6E394D43C5622A0E_METHOD_2_8B320F9C06FC45D4_1_OFFSET UNITYSDK_OFFSET(0x15488D10)
#define CLASS_2_6E394D43C5622A0E_METHOD_2_8B320F9C06FC45D4_OFFSET UNITYSDK_OFFSET(0x15488C40)
#define CLASS_2_6E394D43C5622A0E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154884C0)
#define CLASS_2_6E394D43C5622A0E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15488870)
#define CLASS_2_6E394D43C5622A0E_TICK_OFFSET UNITYSDK_OFFSET(0x15488900)
#define CLASS_2_6E394D43C5622A0E__CTOR_OFFSET UNITYSDK_OFFSET(0x15488430)

inline static constexpr unsigned int Class_2_6E394D43C5622A0E_TypeDefinitionIndex = 58435;

class Class_2_6E394D43C5622A0E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* FIEMBFNHGEH; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::PlayTarotBookOptionTalk* OFKGLJOAMLD; // 0x30
	::System::String* HJLHFOPGJMI; // 0x38
	::System::Boolean FJBAHEOKFII; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTarotBookOptionTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTarotBookOptionTalk*))((::PBYTE)hIl2Cpp + CLASS_2_6E394D43C5622A0E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E394D43C5622A0E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E394D43C5622A0E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E394D43C5622A0E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E394D43C5622A0E_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_722D24E25B6856C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6E394D43C5622A0E_METHOD_2_722D24E25B6856C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B320F9C06FC45D4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6E394D43C5622A0E_METHOD_2_8B320F9C06FC45D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B320F9C06FC45D4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6E394D43C5622A0E_METHOD_2_8B320F9C06FC45D4_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7411494DA7276605(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6E394D43C5622A0E_METHOD_2_7411494DA7276605_OFFSET))(this, a1);
	}
};
