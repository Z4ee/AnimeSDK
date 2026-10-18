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

#define CLASS_1_98E68E4FC3F60295_ADD_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0xB9AECE0)
#define CLASS_1_98E68E4FC3F60295_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9AEDA0)
#define CLASS_1_98E68E4FC3F60295_GET_FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0xB9AEAB0)
#define CLASS_1_98E68E4FC3F60295_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xB9AEAD0)
#define CLASS_1_98E68E4FC3F60295_GET_PARTNERS_OFFSET UNITYSDK_OFFSET(0xB9AEB10)
#define CLASS_1_98E68E4FC3F60295_GET_REQUIREMENTINFOS_OFFSET UNITYSDK_OFFSET(0xB9AEAF0)
#define CLASS_1_98E68E4FC3F60295_GET_TALENTENTRANCE_OFFSET UNITYSDK_OFFSET(0xB9AEB30)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB9AEFD0)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xB9AEBA0)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB9AEF70)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_4E0CCFC7E8FEF732_OFFSET UNITYSDK_OFFSET(0xB9AEB50)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0xB9AF260)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_A40738130934C79F_1_OFFSET UNITYSDK_OFFSET(0xB9AEC70)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_A40738130934C79F_OFFSET UNITYSDK_OFFSET(0xB9AEC00)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0xB9AF1E0)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0xB9AEEB0)
#define CLASS_1_98E68E4FC3F60295_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0xB9AEDF0)
#define CLASS_1_98E68E4FC3F60295_REMOVE_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0xB9AED40)
#define CLASS_1_98E68E4FC3F60295_SET_FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0xB9AEAC0)
#define CLASS_1_98E68E4FC3F60295_SET_MODEL_OFFSET UNITYSDK_OFFSET(0xB9AEAE0)
#define CLASS_1_98E68E4FC3F60295_SET_PARTNERS_OFFSET UNITYSDK_OFFSET(0xB9AEB20)
#define CLASS_1_98E68E4FC3F60295_SET_REQUIREMENTINFOS_OFFSET UNITYSDK_OFFSET(0xB9AEB00)
#define CLASS_1_98E68E4FC3F60295_SET_TALENTENTRANCE_OFFSET UNITYSDK_OFFSET(0xB9AEB40)
#define CLASS_1_98E68E4FC3F60295__CTOR_OFFSET UNITYSDK_OFFSET(0xB9AF2E0)
#define CLASS_1_98E68E4FC3F60295___ONCONFIRM_B__39_0_OFFSET UNITYSDK_OFFSET(0xB9AF2F0)

inline static constexpr unsigned int Class_1_98E68E4FC3F60295_TypeDefinitionIndex = 79638;

class Class_1_98E68E4FC3F60295 : public ::System::Object
{
public:
	::Class_1_8A7282DF079FF8B3* _Partners_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_1499* _FlowCoordinator_k__BackingField; // 0x18
	::System::Action* ExitHandler; // 0x20
	::Class_1_9532A7052BD07626* _Model_k__BackingField; // 0x28
	::Sofa::Core::SimpleCommand* GDFKILNCNBC; // 0x30
	::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* _TalentEntrance_k__BackingField; // 0x38
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1500*>* _RequirementInfos_k__BackingField; // 0x40
	::Sofa::Core::SimpleCommand* FGHLGECDPMB; // 0x48

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
