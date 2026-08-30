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

#define CLASS_2_37D689A9F8EF9969_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C1D7A0)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x16C1DA60)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_19C4FD663318CEE6_OFFSET UNITYSDK_OFFSET(0x16C1DB10)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_1A96B67A1893F37C_OFFSET UNITYSDK_OFFSET(0x16C1E180)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16C1D850)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_64728E45A4A2DD4A_OFFSET UNITYSDK_OFFSET(0x16C1DF80)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16C1DEB0)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_F8A7B1F2F8A72973_OFFSET UNITYSDK_OFFSET(0x16C1E0F0)
#define CLASS_2_37D689A9F8EF9969_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C1D8E0)
#define CLASS_2_37D689A9F8EF9969_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16C1DDF0)
#define CLASS_2_37D689A9F8EF9969_TICK_OFFSET UNITYSDK_OFFSET(0x16C1DD90)
#define CLASS_2_37D689A9F8EF9969__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1D790)

inline static constexpr unsigned int Class_2_37D689A9F8EF9969_TypeDefinitionIndex = 58855;

class Class_2_37D689A9F8EF9969 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowUIPage* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Boolean POPKOMHDLAD; // 0x28

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

	::RPG::Client::BattleShowUIPageParam* Method_2_19C4FD663318CEE6()
	{
		return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_19C4FD663318CEE6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::BattleShowUIPageTextParam*>* Method_2_64728E45A4A2DD4A()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::BattleShowUIPageTextParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_64728E45A4A2DD4A_OFFSET))(this);
	}

	::RPG::Client::BattleShowUIPageTextParam* Method_2_F8A7B1F2F8A72973(::RPG::GameCore::UITextNode* a1)
	{
		return ((::RPG::Client::BattleShowUIPageTextParam*(*)(::PVOID, ::RPG::GameCore::UITextNode*))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_F8A7B1F2F8A72973_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_2_1A96B67A1893F37C(::RPG::GameCore::UITextNode* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::UITextNode*))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_1A96B67A1893F37C_OFFSET))(this, a1);
	}
};
