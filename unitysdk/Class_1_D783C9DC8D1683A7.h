#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_2_584A6534C6157D2A;
class Class_3_9CC081640FF54415;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::Client { class BattleShowUIPageTextParam; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D783C9DC8D1683A7_METHOD_1_37A6562FFB01B3D2_OFFSET UNITYSDK_OFFSET(0x10CA5010)
#define CLASS_1_D783C9DC8D1683A7_METHOD_1_3A1B38DEBCBFD4BE_OFFSET UNITYSDK_OFFSET(0x10CA4CA0)
#define CLASS_1_D783C9DC8D1683A7_METHOD_1_66D55382271A02C7_OFFSET UNITYSDK_OFFSET(0x10CA4950)
#define CLASS_1_D783C9DC8D1683A7_METHOD_1_6DCDBD1BBE0E207E_OFFSET UNITYSDK_OFFSET(0x10CA49E0)
#define CLASS_1_D783C9DC8D1683A7_METHOD_1_BA6B648FFA4D8B56_OFFSET UNITYSDK_OFFSET(0x10CA4DB0)
#define CLASS_1_D783C9DC8D1683A7_METHOD_1_D3CDE7A94912ECB6_OFFSET UNITYSDK_OFFSET(0x10CA4F70)
#define CLASS_1_D783C9DC8D1683A7__CTOR_OFFSET UNITYSDK_OFFSET(0x10CA4C90)

inline static constexpr unsigned int Class_1_D783C9DC8D1683A7_TypeDefinitionIndex = 58744;

class Class_1_D783C9DC8D1683A7 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_4; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::BattleShowUIPageTextParam*>* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D783C9DC8D1683A7__CTOR_OFFSET))(this);
	}

	static ::Class_1_D783C9DC8D1683A7* Method_1_66D55382271A02C7(::Class_2_584A6534C6157D2A* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_D783C9DC8D1683A7*(*)(::Class_2_584A6534C6157D2A*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D783C9DC8D1683A7_METHOD_1_66D55382271A02C7_OFFSET))(a1, a2);
	}

	static ::Class_1_D783C9DC8D1683A7* Method_1_6DCDBD1BBE0E207E(::Class_3_9CC081640FF54415* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_D783C9DC8D1683A7*(*)(::Class_3_9CC081640FF54415*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D783C9DC8D1683A7_METHOD_1_6DCDBD1BBE0E207E_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_BA6B648FFA4D8B56(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D783C9DC8D1683A7_METHOD_1_BA6B648FFA4D8B56_OFFSET))(a1);
	}

	static ::System::String* Method_1_D3CDE7A94912ECB6(::RPG::GameCore::TargetEvaluator* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D783C9DC8D1683A7_METHOD_1_D3CDE7A94912ECB6_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_1_3A1B38DEBCBFD4BE(::Il2CppArray<::RPG::GameCore::DynamicFloat*>* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::Il2CppArray<::RPG::GameCore::DynamicFloat*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D783C9DC8D1683A7_METHOD_1_3A1B38DEBCBFD4BE_OFFSET))(a1, a2);
	}

	::RPG::Client::BattleShowUIPageParam* Method_1_37A6562FFB01B3D2()
	{
		return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D783C9DC8D1683A7_METHOD_1_37A6562FFB01B3D2_OFFSET))(this);
	}
};
