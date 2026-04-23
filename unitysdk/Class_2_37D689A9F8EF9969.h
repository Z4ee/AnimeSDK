#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::Client { class BattleShowUIPageTextParam; }
namespace RPG::GameCore { class ShowUIPage; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_37D689A9F8EF9969_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12914860)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x12914AF0)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_166C824F8302428B_OFFSET UNITYSDK_OFFSET(0x12915020)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_2C2429BD86CE8F0D_OFFSET UNITYSDK_OFFSET(0x12914BA0)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12914900)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_C141C8BE46006A37_OFFSET UNITYSDK_OFFSET(0x129151D0)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x12914F60)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_F8A7B1F2F8A72973_OFFSET UNITYSDK_OFFSET(0x12915130)
#define CLASS_2_37D689A9F8EF9969_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12914980)
#define CLASS_2_37D689A9F8EF9969_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12914EC0)
#define CLASS_2_37D689A9F8EF9969_TICK_OFFSET UNITYSDK_OFFSET(0x12914E60)
#define CLASS_2_37D689A9F8EF9969__CTOR_OFFSET UNITYSDK_OFFSET(0x12914850)

inline static constexpr unsigned int Class_2_37D689A9F8EF9969_TypeDefinitionIndex = 54123;

class Class_2_37D689A9F8EF9969 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowUIPage* Field_2_0; // 0x20
	::System::Boolean Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowUIPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowUIPage*))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::RPG::Client::BattleShowUIPageParam* Method_2_2C2429BD86CE8F0D()
	{
		return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_2C2429BD86CE8F0D_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::BattleShowUIPageTextParam*>* Method_2_166C824F8302428B()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::BattleShowUIPageTextParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_166C824F8302428B_OFFSET))(this);
	}

	::RPG::Client::BattleShowUIPageTextParam* Method_2_F8A7B1F2F8A72973(::RPG::GameCore::UITextNode* a1)
	{
		return ((::RPG::Client::BattleShowUIPageTextParam*(*)(::PVOID, ::RPG::GameCore::UITextNode*))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_F8A7B1F2F8A72973_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_2_C141C8BE46006A37(::RPG::GameCore::UITextNode* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::UITextNode*))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_C141C8BE46006A37_OFFSET))(this, a1);
	}
};
