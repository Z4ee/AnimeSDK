#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_1_14033F1652615DE2;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class BattleCardBuffSelectionDialogInitParam; }
namespace RPG::GameCore { class BattleCardSelectItemGroup; }
namespace RPG::GameCore { class ShowBattleCardBuffSelection; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_DED90ADB422CA5BC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13F0BDC0)
#define CLASS_2_DED90ADB422CA5BC_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x13F0BCD0)
#define CLASS_2_DED90ADB422CA5BC_METHOD_2_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x13F0B7D0)
#define CLASS_2_DED90ADB422CA5BC_METHOD_2_6AECDE8D55A52B83_OFFSET UNITYSDK_OFFSET(0x13F0BAB0)
#define CLASS_2_DED90ADB422CA5BC_METHOD_2_73147E571292E3F1_OFFSET UNITYSDK_OFFSET(0x13F0C210)
#define CLASS_2_DED90ADB422CA5BC_METHOD_2_90E79EA3C42DC1E4_OFFSET UNITYSDK_OFFSET(0x13F0C2A0)
#define CLASS_2_DED90ADB422CA5BC_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13F0BB40)
#define CLASS_2_DED90ADB422CA5BC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13F0BBC0)
#define CLASS_2_DED90ADB422CA5BC_METHOD_2_FF2C9EB2FC419998_OFFSET UNITYSDK_OFFSET(0x13F0C030)
#define CLASS_2_DED90ADB422CA5BC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13F0B3A0)
#define CLASS_2_DED90ADB422CA5BC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13F0BC10)
#define CLASS_2_DED90ADB422CA5BC_TICK_OFFSET UNITYSDK_OFFSET(0x13F0BE70)
#define CLASS_2_DED90ADB422CA5BC__CTOR_OFFSET UNITYSDK_OFFSET(0x13F0B340)

inline static constexpr unsigned int Class_2_DED90ADB422CA5BC_TypeDefinitionIndex = 58754;

class Class_2_DED90ADB422CA5BC : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* NCKHBCKGAFP; // 0x0
	::RPG::Client::UIController* DPIIPLPHGHF; // 0x18
	::RPG::GameCore::ShowBattleCardBuffSelection* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_1_14033F1652615DE2* CLHEBPFIGEM; // 0x30
	::RPG::GameCore::BattleCardBuffSelectionDialogInitParam* PNOEHMMPIKI; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleCardBuffSelection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleCardBuffSelection*))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_METHOD_2_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_2_6AECDE8D55A52B83()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_METHOD_2_6AECDE8D55A52B83_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF2C9EB2FC419998(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_METHOD_2_FF2C9EB2FC419998_OFFSET))(this, a1);
	}

	::System::Void Method_2_73147E571292E3F1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_METHOD_2_73147E571292E3F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_90E79EA3C42DC1E4(::RPG::GameCore::BattleCardSelectItemGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItemGroup*))((::PBYTE)hIl2Cpp + CLASS_2_DED90ADB422CA5BC_METHOD_2_90E79EA3C42DC1E4_OFFSET))(this, a1);
	}
};
