#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1499;
class Class_0_16E4307DCC419505_1500;
class Class_0_16E4307DCC419505_397;
class Class_1_04E767430AD06AF5;
class Class_1_8A7282DF079FF8B3;
class Class_1_9532A7052BD07626;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentTreeEntranceViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_98E68E4FC3F60295_ADD_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0xB9A8E40)
#define CLASS_1_98E68E4FC3F60295_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9A8F00)
#define CLASS_1_98E68E4FC3F60295_GET_FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0xB9A8C10)
#define CLASS_1_98E68E4FC3F60295_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xB9A8C30)
#define CLASS_1_98E68E4FC3F60295_GET_PARTNERS_OFFSET UNITYSDK_OFFSET(0xB9A8C70)
#define CLASS_1_98E68E4FC3F60295_GET_REQUIREMENTINFOS_OFFSET UNITYSDK_OFFSET(0xB9A8C50)
#define CLASS_1_98E68E4FC3F60295_GET_TALENTENTRANCE_OFFSET UNITYSDK_OFFSET(0xB9A8C90)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB9A9130)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xB9A8D00)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB9A90D0)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_4E0CCFC7E8FEF732_OFFSET UNITYSDK_OFFSET(0xB9A8CB0)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0xB9A93C0)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_A40738130934C79F_1_OFFSET UNITYSDK_OFFSET(0xB9A8DD0)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_A40738130934C79F_OFFSET UNITYSDK_OFFSET(0xB9A8D60)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0xB9A9340)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0xB9A9010)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0xB9A8F50)
#define CLASS_1_98E68E4FC3F60295_REMOVE_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0xB9A8EA0)
#define CLASS_1_98E68E4FC3F60295_SET_FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0xB9A8C20)
#define CLASS_1_98E68E4FC3F60295_SET_MODEL_OFFSET UNITYSDK_OFFSET(0xB9A8C40)
#define CLASS_1_98E68E4FC3F60295_SET_PARTNERS_OFFSET UNITYSDK_OFFSET(0xB9A8C80)
#define CLASS_1_98E68E4FC3F60295_SET_REQUIREMENTINFOS_OFFSET UNITYSDK_OFFSET(0xB9A8C60)
#define CLASS_1_98E68E4FC3F60295_SET_TALENTENTRANCE_OFFSET UNITYSDK_OFFSET(0xB9A8CA0)
#define CLASS_1_98E68E4FC3F60295__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A9440)
#define CLASS_1_98E68E4FC3F60295___ONCONFIRM_B__39_0_OFFSET UNITYSDK_OFFSET(0xB9A9450)

inline static constexpr unsigned int Class_1_98E68E4FC3F60295_TypeDefinitionIndex = 79637;

class Class_1_98E68E4FC3F60295 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1500*>* _RequirementInfos_k__BackingField; // 0x10
	::Sofa::Core::SimpleCommand* GDFKILNCNBC; // 0x18
	::Class_1_8A7282DF079FF8B3* _Partners_k__BackingField; // 0x20
	::System::Action* ExitHandler; // 0x28
	::Sofa::Core::SimpleCommand* FGHLGECDPMB; // 0x30
	::Class_1_9532A7052BD07626* _Model_k__BackingField; // 0x38
	::Class_0_16E4307DCC419505_1499* _FlowCoordinator_k__BackingField; // 0x40
	::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* _TalentEntrance_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1499* get_FlowCoordinator()
	{
		return ((::Class_0_16E4307DCC419505_1499*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_GET_FLOWCOORDINATOR_OFFSET))(this);
	}

	::System::Void set_FlowCoordinator(::Class_0_16E4307DCC419505_1499* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1499*))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_SET_FLOWCOORDINATOR_OFFSET))(this, a1);
	}

	::Class_1_9532A7052BD07626* get_Model()
	{
		return ((::Class_1_9532A7052BD07626*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_GET_MODEL_OFFSET))(this);
	}

	::System::Void set_Model(::Class_1_9532A7052BD07626* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9532A7052BD07626*))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_SET_MODEL_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1500*>* get_RequirementInfos()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1500*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_GET_REQUIREMENTINFOS_OFFSET))(this);
	}

	::System::Void set_RequirementInfos(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1500*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1500*>*))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_SET_REQUIREMENTINFOS_OFFSET))(this, a1);
	}

	::Class_1_8A7282DF079FF8B3* get_Partners()
	{
		return ((::Class_1_8A7282DF079FF8B3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_GET_PARTNERS_OFFSET))(this);
	}

	::System::Void set_Partners(::Class_1_8A7282DF079FF8B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A7282DF079FF8B3*))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_SET_PARTNERS_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* get_TalentEntrance()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_GET_TALENTENTRANCE_OFFSET))(this);
	}

	::System::Void set_TalentEntrance(::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_SET_TALENTENTRANCE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_04E767430AD06AF5*>* Method_1_4E0CCFC7E8FEF732()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_04E767430AD06AF5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_METHOD_1_4E0CCFC7E8FEF732_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_A40738130934C79F()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_METHOD_1_A40738130934C79F_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_A40738130934C79F_1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_METHOD_1_A40738130934C79F_1_OFFSET))(this);
	}

	::System::Void add_ExitHandler(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_ADD_EXITHANDLER_OFFSET))(this, a1);
	}

	::System::Void remove_ExitHandler(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_REMOVE_EXITHANDLER_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_DISPOSE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_1()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_METHOD_1_B213056103887067_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_1_A5809AB80389F7DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295_METHOD_1_A5809AB80389F7DE_OFFSET))(this);
	}

	::System::Void __OnConfirm_b__39_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_98E68E4FC3F60295___ONCONFIRM_B__39_0_OFFSET))(this, a1);
	}
};
