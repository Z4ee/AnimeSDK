#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_27E38B1A892A490A;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMovePaused; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_2_F2E3AAF4C7D409DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1706BF80)
#define CLASS_2_F2E3AAF4C7D409DF_METHOD_2_7B12090AF6D76E60_OFFSET UNITYSDK_OFFSET(0x1706C470)
#define CLASS_2_F2E3AAF4C7D409DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1706C210)
#define CLASS_2_F2E3AAF4C7D409DF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1706C0F0)
#define CLASS_2_F2E3AAF4C7D409DF_TICK_OFFSET UNITYSDK_OFFSET(0x1706C390)
#define CLASS_2_F2E3AAF4C7D409DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1706BE60)

inline static constexpr unsigned int Class_2_F2E3AAF4C7D409DF_TypeDefinitionIndex = 59064;

class Class_2_F2E3AAF4C7D409DF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitPropCurveMovePaused* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x28
	::System::WeakReference_1<::Class_1_27E38B1A892A490A*>* HPIHLICKLAD; // 0x30
	::Class_3_07C3C4D2990C49EE* HFOFIODMFGB; // 0x38
	::System::String* IJMGEMMNNPI; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropCurveMovePaused* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropCurveMovePaused*))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B12090AF6D76E60(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF_METHOD_2_7B12090AF6D76E60_OFFSET))(this, a1);
	}
};
