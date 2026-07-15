#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
class Class_1_DCDA150C051A028F;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class BattleCardBuffSelectionDialogInitParam; }
namespace RPG::GameCore { class BattleCardSelectItemGroup; }
namespace RPG::GameCore { class ShowBattleCardBuffSelection; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_56AB6DAE479DFF59_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140DD4D0)
#define CLASS_2_56AB6DAE479DFF59_METHOD_2_28F3AF2D57193AC1_OFFSET UNITYSDK_OFFSET(0x140DD740)
#define CLASS_2_56AB6DAE479DFF59_METHOD_2_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x140DCF40)
#define CLASS_2_56AB6DAE479DFF59_METHOD_2_6AECDE8D55A52B83_OFFSET UNITYSDK_OFFSET(0x140DD1F0)
#define CLASS_2_56AB6DAE479DFF59_METHOD_2_73147E571292E3F1_OFFSET UNITYSDK_OFFSET(0x140DD8D0)
#define CLASS_2_56AB6DAE479DFF59_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x140DD400)
#define CLASS_2_56AB6DAE479DFF59_METHOD_2_90E79EA3C42DC1E4_OFFSET UNITYSDK_OFFSET(0x140DD960)
#define CLASS_2_56AB6DAE479DFF59_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x140DD280)
#define CLASS_2_56AB6DAE479DFF59_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x140DD300)
#define CLASS_2_56AB6DAE479DFF59_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x140DCB20)
#define CLASS_2_56AB6DAE479DFF59_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x140DD350)
#define CLASS_2_56AB6DAE479DFF59_TICK_OFFSET UNITYSDK_OFFSET(0x140DD580)
#define CLASS_2_56AB6DAE479DFF59__CTOR_OFFSET UNITYSDK_OFFSET(0x140DCAE0)

inline static constexpr unsigned int Class_2_56AB6DAE479DFF59_TypeDefinitionIndex = 55979;

class Class_2_56AB6DAE479DFF59 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_1_DCDA150C051A028F* Field_2_1; // 0x18
	::RPG::GameCore::ShowBattleCardBuffSelection* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_3; // 0x28
	::RPG::GameCore::BattleCardBuffSelectionDialogInitParam* Field_2_4; // 0x30
	::RPG::Client::UIController* Field_2_5; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleCardBuffSelection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleCardBuffSelection*))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_METHOD_2_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_2_6AECDE8D55A52B83()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_METHOD_2_6AECDE8D55A52B83_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_28F3AF2D57193AC1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_METHOD_2_28F3AF2D57193AC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_73147E571292E3F1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_METHOD_2_73147E571292E3F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_2_90E79EA3C42DC1E4(::RPG::GameCore::BattleCardSelectItemGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItemGroup*))((::PBYTE)hIl2Cpp + CLASS_2_56AB6DAE479DFF59_METHOD_2_90E79EA3C42DC1E4_OFFSET))(this, a1);
	}
};
