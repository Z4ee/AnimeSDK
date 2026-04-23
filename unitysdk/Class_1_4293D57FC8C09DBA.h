#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_74E033A84A8D01A9;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace RPG::GameCore { class BaseChimeraDuelSaveEntitySelectionConfig; }
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelModifier; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace RPG::GameCore { class ChimeraDuelParallelNode; }
namespace RPG::GameCore { class ChimeraDuelProbabilityNode; }
namespace RPG::GameCore { class ChimeraDuelRepeatNode; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4293D57FC8C09DBA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCD4E170)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_0E68FFAC04CB5CDC_OFFSET UNITYSDK_OFFSET(0xCD507D0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_293208827D3D07E7_OFFSET UNITYSDK_OFFSET(0xCD4FB00)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_293725AD0F2A8313_OFFSET UNITYSDK_OFFSET(0xCD515B0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_454C72B9E9CAF1D8_OFFSET UNITYSDK_OFFSET(0xCD50AD0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_459C073F0CEC7726_OFFSET UNITYSDK_OFFSET(0xCD51A00)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_4AA7827CFB505DDD_OFFSET UNITYSDK_OFFSET(0xCD4F4B0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_520A1D9B7AF0684E_OFFSET UNITYSDK_OFFSET(0xCD51310)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_539A95FDFDF6C673_OFFSET UNITYSDK_OFFSET(0xCD4F2B0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_5D307139D6E0A19D_OFFSET UNITYSDK_OFFSET(0xCD51F40)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_621026CAEBAB2406_OFFSET UNITYSDK_OFFSET(0xCD51BA0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_6ED52388A49459A8_OFFSET UNITYSDK_OFFSET(0xCD50990)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_71E2A6E992E329E7_OFFSET UNITYSDK_OFFSET(0xCD51860)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_868AEE498FC5E9DF_OFFSET UNITYSDK_OFFSET(0xCD522F0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_8F268267CC30BC0E_OFFSET UNITYSDK_OFFSET(0xCD4FF70)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_9100CB4E31994B68_OFFSET UNITYSDK_OFFSET(0xCD50F90)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_98322C1E60391C5D_OFFSET UNITYSDK_OFFSET(0xCD50EF0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_AA7F37D5CC033329_OFFSET UNITYSDK_OFFSET(0xCD4EB60)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_AEA49496C256D00F_OFFSET UNITYSDK_OFFSET(0xCD4E3E0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xCD4E550)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_DC4591A4B86F3155_OFFSET UNITYSDK_OFFSET(0xCD4FDF0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_E28B6E31CE3395EC_OFFSET UNITYSDK_OFFSET(0xCD520F0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_E360D63C55A15E48_OFFSET UNITYSDK_OFFSET(0xCD506A0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_F54E91A1BE6A6495_OFFSET UNITYSDK_OFFSET(0xCD4F510)
#define CLASS_1_4293D57FC8C09DBA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD4DFE0)

inline static constexpr unsigned int Class_1_4293D57FC8C09DBA_TypeDefinitionIndex = 71178;

class Class_1_4293D57FC8C09DBA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelEventType>* Field_1_2; // 0x10
	::Class_1_3B1EA953A4067E26* Field_1_0; // 0x18
	::Class_3_D637C1E17FCBBFB0* Field_1_1; // 0x20

	::System::Void _ctor(::Class_1_3B1EA953A4067E26* a1, ::Class_3_D637C1E17FCBBFB0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_AEA49496C256D00F(::System::Int32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_AEA49496C256D00F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::Class_2_49CAB3DE74280C58* Method_1_AA7F37D5CC033329()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_AA7F37D5CC033329_OFFSET))(this);
	}

	::System::Int32 Method_1_F54E91A1BE6A6495(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_F54E91A1BE6A6495_OFFSET))(this, a1);
	}

	::System::Void Method_1_539A95FDFDF6C673(::Class_2_49CAB3DE74280C58* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_539A95FDFDF6C673_OFFSET))(this, a1);
	}

	::System::Void Method_1_E360D63C55A15E48(::Class_2_49CAB3DE74280C58* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_E360D63C55A15E48_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F268267CC30BC0E(::Class_2_49CAB3DE74280C58* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_8F268267CC30BC0E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DC4591A4B86F3155(::Class_2_49CAB3DE74280C58* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_DC4591A4B86F3155_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_293208827D3D07E7(::Class_2_49CAB3DE74280C58* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_293208827D3D07E7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0E68FFAC04CB5CDC(::Class_2_49CAB3DE74280C58* a1, ::Class_1_C4FD36003027AC99* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_0E68FFAC04CB5CDC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_520A1D9B7AF0684E(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelModifier* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelModifier*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_520A1D9B7AF0684E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9100CB4E31994B68(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelNodeContainer*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelNodeContainer*&))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_9100CB4E31994B68_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_6ED52388A49459A8(::Class_2_49CAB3DE74280C58* a1, ::Class_1_C4FD36003027AC99* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_6ED52388A49459A8_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_293725AD0F2A8313(::Class_2_49CAB3DE74280C58* a1, ::Class_1_C4FD36003027AC99* a2, ::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_C4FD36003027AC99*, ::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_293725AD0F2A8313_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_71E2A6E992E329E7(::Class_2_49CAB3DE74280C58* a1, ::Class_1_C4FD36003027AC99* a2, ::RPG::GameCore::ChimeraDuelModifierContainerNode* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_71E2A6E992E329E7_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_E28B6E31CE3395EC(::Class_2_49CAB3DE74280C58* a1, ::Class_1_C4FD36003027AC99* a2, ::RPG::GameCore::ChimeraDuelProbabilityNode* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_E28B6E31CE3395EC_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_459C073F0CEC7726(::Class_2_49CAB3DE74280C58* a1, ::Class_1_C4FD36003027AC99* a2, ::RPG::GameCore::ChimeraDuelBranchNode* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_459C073F0CEC7726_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_621026CAEBAB2406(::Class_2_49CAB3DE74280C58* a1, ::Class_1_C4FD36003027AC99* a2, ::RPG::GameCore::ChimeraDuelRepeatNode* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_621026CAEBAB2406_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_5D307139D6E0A19D(::Class_2_49CAB3DE74280C58* a1, ::Class_1_C4FD36003027AC99* a2, ::RPG::GameCore::ChimeraDuelParallelNode* a3)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelParallelNode*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_5D307139D6E0A19D_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>* Method_1_98322C1E60391C5D(::Class_2_49CAB3DE74280C58* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>*(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_98322C1E60391C5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_454C72B9E9CAF1D8(::Class_2_49CAB3DE74280C58* a1, ::Class_1_C4FD36003027AC99* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_454C72B9E9CAF1D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_868AEE498FC5E9DF(::Class_2_49CAB3DE74280C58* a1, ::Class_2_49CAB3DE74280C58* a2, ::Class_1_C4FD36003027AC99* a3, ::Class_2_49CAB3DE74280C58* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*, ::Class_1_C4FD36003027AC99*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_868AEE498FC5E9DF_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_3_74E033A84A8D01A9* Method_1_4AA7827CFB505DDD()
	{
		return ((::Class_3_74E033A84A8D01A9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_4AA7827CFB505DDD_OFFSET))(this);
	}
};
