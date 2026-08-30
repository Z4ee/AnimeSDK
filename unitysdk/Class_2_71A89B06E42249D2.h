#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_DDD940BBACB32274;
namespace RPG::Client { class LimaoNewsDutyCheckOptionTalkInfo; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_71A89B06E42249D2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188C43C0)
#define CLASS_2_71A89B06E42249D2_METHOD_2_5D5C6ADC3D1D0DDC_OFFSET UNITYSDK_OFFSET(0x188C4B80)
#define CLASS_2_71A89B06E42249D2_METHOD_2_722D24E25B6856C2_OFFSET UNITYSDK_OFFSET(0x188C4860)
#define CLASS_2_71A89B06E42249D2_METHOD_2_7411494DA7276605_OFFSET UNITYSDK_OFFSET(0x188C46F0)
#define CLASS_2_71A89B06E42249D2_METHOD_2_8B320F9C06FC45D4_OFFSET UNITYSDK_OFFSET(0x188C4A30)
#define CLASS_2_71A89B06E42249D2_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x188C40B0)
#define CLASS_2_71A89B06E42249D2_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x188C48D0)
#define CLASS_2_71A89B06E42249D2_METHOD_2_F5ADBA366C2EA507_OFFSET UNITYSDK_OFFSET(0x188C4B00)
#define CLASS_2_71A89B06E42249D2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188C3E10)
#define CLASS_2_71A89B06E42249D2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x188C4550)
#define CLASS_2_71A89B06E42249D2_TICK_OFFSET UNITYSDK_OFFSET(0x188C45D0)
#define CLASS_2_71A89B06E42249D2__CTOR_OFFSET UNITYSDK_OFFSET(0x188C3DA0)

inline static constexpr unsigned int Class_2_71A89B06E42249D2_TypeDefinitionIndex = 53225;

class Class_2_71A89B06E42249D2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_DDD940BBACB32274* OFKGLJOAMLD; // 0x18
	::System::String* HJLHFOPGJMI; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* FIEMBFNHGEH; // 0x38
	::System::Boolean FJBAHEOKFII; // 0x40
	::System::Boolean HMBGEPKBBBJ; // 0x41

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DDD940BBACB32274* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DDD940BBACB32274*))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_722D24E25B6856C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2_METHOD_2_722D24E25B6856C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B320F9C06FC45D4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2_METHOD_2_8B320F9C06FC45D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5ADBA366C2EA507(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2_METHOD_2_F5ADBA366C2EA507_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_2_5D5C6ADC3D1D0DDC(::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2_METHOD_2_5D5C6ADC3D1D0DDC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7411494DA7276605(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_71A89B06E42249D2_METHOD_2_7411494DA7276605_OFFSET))(this, a1);
	}
};
