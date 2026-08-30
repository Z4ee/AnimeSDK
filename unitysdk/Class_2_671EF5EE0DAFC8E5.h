#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class PlayLimaoNewsOptionTalk; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_671EF5EE0DAFC8E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD823EB0)
#define CLASS_2_671EF5EE0DAFC8E5_METHOD_2_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0xD823DC0)
#define CLASS_2_671EF5EE0DAFC8E5_METHOD_2_722D24E25B6856C2_OFFSET UNITYSDK_OFFSET(0xD824360)
#define CLASS_2_671EF5EE0DAFC8E5_METHOD_2_7411494DA7276605_OFFSET UNITYSDK_OFFSET(0xD8241B0)
#define CLASS_2_671EF5EE0DAFC8E5_METHOD_2_8B320F9C06FC45D4_OFFSET UNITYSDK_OFFSET(0xD8243D0)
#define CLASS_2_671EF5EE0DAFC8E5_METHOD_2_F5ADBA366C2EA507_OFFSET UNITYSDK_OFFSET(0xD8244A0)
#define CLASS_2_671EF5EE0DAFC8E5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD823A50)
#define CLASS_2_671EF5EE0DAFC8E5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD824000)
#define CLASS_2_671EF5EE0DAFC8E5_TICK_OFFSET UNITYSDK_OFFSET(0xD824090)
#define CLASS_2_671EF5EE0DAFC8E5__CTOR_OFFSET UNITYSDK_OFFSET(0xD8239C0)

inline static constexpr unsigned int Class_2_671EF5EE0DAFC8E5_TypeDefinitionIndex = 53226;

class Class_2_671EF5EE0DAFC8E5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* FIEMBFNHGEH; // 0x20
	::RPG::Client::PlayLimaoNewsOptionTalk* OFKGLJOAMLD; // 0x28
	::System::String* HJLHFOPGJMI; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::System::Boolean FJBAHEOKFII; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlayLimaoNewsOptionTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlayLimaoNewsOptionTalk*))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_722D24E25B6856C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_METHOD_2_722D24E25B6856C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B320F9C06FC45D4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_METHOD_2_8B320F9C06FC45D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5ADBA366C2EA507(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_METHOD_2_F5ADBA366C2EA507_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_METHOD_2_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Boolean Method_2_7411494DA7276605(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_671EF5EE0DAFC8E5_METHOD_2_7411494DA7276605_OFFSET))(this, a1);
	}
};
