#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_5A62B20BB82BEBF5;
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

#define CLASS_1_4293D57FC8C09DBA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13C1C060)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_1F9DE9833BB75805_OFFSET UNITYSDK_OFFSET(0x13C1EB10)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_2404A785C9F84991_OFFSET UNITYSDK_OFFSET(0x13C1DFE0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x13C1C440)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_459C073F0CEC7726_OFFSET UNITYSDK_OFFSET(0x13C1FEF0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_4AA7827CFB505DDD_OFFSET UNITYSDK_OFFSET(0x13C1D430)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_534CCDF644FB9DD7_OFFSET UNITYSDK_OFFSET(0x13C1F7A0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_539A95FDFDF6C673_OFFSET UNITYSDK_OFFSET(0x13C1D220)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_5477F1A41451B700_OFFSET UNITYSDK_OFFSET(0x13C1CA80)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_59AD45407DE31C4F_OFFSET UNITYSDK_OFFSET(0x13C1E9E0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_5D307139D6E0A19D_OFFSET UNITYSDK_OFFSET(0x13C20410)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_61FD3B9C0D9CB619_OFFSET UNITYSDK_OFFSET(0x13C1D490)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_6ED52388A49459A8_OFFSET UNITYSDK_OFFSET(0x13C1ED30)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_868AEE498FC5E9DF_OFFSET UNITYSDK_OFFSET(0x13C207B0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_9100CB4E31994B68_OFFSET UNITYSDK_OFFSET(0x13C1F420)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_98322C1E60391C5D_OFFSET UNITYSDK_OFFSET(0x13C1F380)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_A9D675469BFEA4B7_OFFSET UNITYSDK_OFFSET(0x13C1FA20)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_AA5C7F38E330D27E_OFFSET UNITYSDK_OFFSET(0x13C1C2D0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_AB1FFCA8EF89FB20_OFFSET UNITYSDK_OFFSET(0x13C1E1B0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_C2074E4F7DEFFE27_OFFSET UNITYSDK_OFFSET(0x13C1EE70)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_DE25FD5BFE850651_OFFSET UNITYSDK_OFFSET(0x13C1FD00)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_DF7960F9635E4EEF_OFFSET UNITYSDK_OFFSET(0x13C20090)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_E28B6E31CE3395EC_OFFSET UNITYSDK_OFFSET(0x13C205B0)
#define CLASS_1_4293D57FC8C09DBA_METHOD_1_FF816DC3F260E91A_OFFSET UNITYSDK_OFFSET(0x13C1DC50)
#define CLASS_1_4293D57FC8C09DBA__CTOR_OFFSET UNITYSDK_OFFSET(0x13C1BA00)

inline static constexpr unsigned int Class_1_4293D57FC8C09DBA_TypeDefinitionIndex = 72116;

class Class_1_4293D57FC8C09DBA : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelEventType>* Field_1_1; // 0x18
	::Class_3_D637C1E17FCBBFB0* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_3B1EA953A4067E26* a1, ::Class_3_D637C1E17FCBBFB0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_AA5C7F38E330D27E(::System::Int32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_AA5C7F38E330D27E_OFFSET))(this, a1);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::Class_2_B66C1067C0468FBB* Method_1_5477F1A41451B700()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_5477F1A41451B700_OFFSET))(this);
	}

	::System::Int32 Method_1_61FD3B9C0D9CB619(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_61FD3B9C0D9CB619_OFFSET))(this, a1);
	}

	::System::Void Method_1_539A95FDFDF6C673(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_539A95FDFDF6C673_OFFSET))(this, a1);
	}

	::System::Void Method_1_59AD45407DE31C4F(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_59AD45407DE31C4F_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB1FFCA8EF89FB20(::Class_2_B66C1067C0468FBB* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_AB1FFCA8EF89FB20_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2404A785C9F84991(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_2404A785C9F84991_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FF816DC3F260E91A(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_FF816DC3F260E91A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1F9DE9833BB75805(::Class_2_B66C1067C0468FBB* a1, ::Class_1_A92BC063ED2379EB* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_1F9DE9833BB75805_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_534CCDF644FB9DD7(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelModifier* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelModifier*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_534CCDF644FB9DD7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9100CB4E31994B68(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelNodeContainer*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelNodeContainer*&))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_9100CB4E31994B68_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_6ED52388A49459A8(::Class_2_B66C1067C0468FBB* a1, ::Class_1_A92BC063ED2379EB* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_6ED52388A49459A8_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_A9D675469BFEA4B7(::Class_2_B66C1067C0468FBB* a1, ::Class_1_A92BC063ED2379EB* a2, ::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_A92BC063ED2379EB*, ::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_A9D675469BFEA4B7_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_DE25FD5BFE850651(::Class_2_B66C1067C0468FBB* a1, ::Class_1_A92BC063ED2379EB* a2, ::RPG::GameCore::ChimeraDuelModifierContainerNode* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_DE25FD5BFE850651_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_E28B6E31CE3395EC(::Class_2_B66C1067C0468FBB* a1, ::Class_1_A92BC063ED2379EB* a2, ::RPG::GameCore::ChimeraDuelProbabilityNode* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_E28B6E31CE3395EC_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_459C073F0CEC7726(::Class_2_B66C1067C0468FBB* a1, ::Class_1_A92BC063ED2379EB* a2, ::RPG::GameCore::ChimeraDuelBranchNode* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_459C073F0CEC7726_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_DF7960F9635E4EEF(::Class_2_B66C1067C0468FBB* a1, ::Class_1_A92BC063ED2379EB* a2, ::RPG::GameCore::ChimeraDuelRepeatNode* a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_DF7960F9635E4EEF_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ChimeraDuelModifier*>* Method_1_5D307139D6E0A19D(::Class_2_B66C1067C0468FBB* a1, ::Class_1_A92BC063ED2379EB* a2, ::RPG::GameCore::ChimeraDuelParallelNode* a3)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ChimeraDuelModifier*>*(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelParallelNode*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_5D307139D6E0A19D_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>* Method_1_98322C1E60391C5D(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>*(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_98322C1E60391C5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2074E4F7DEFFE27(::Class_2_B66C1067C0468FBB* a1, ::Class_1_A92BC063ED2379EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_C2074E4F7DEFFE27_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_868AEE498FC5E9DF(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2, ::Class_1_A92BC063ED2379EB* a3, ::Class_2_B66C1067C0468FBB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*, ::Class_1_A92BC063ED2379EB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_868AEE498FC5E9DF_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_3_5A62B20BB82BEBF5* Method_1_4AA7827CFB505DDD()
	{
		return ((::Class_3_5A62B20BB82BEBF5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA_METHOD_1_4AA7827CFB505DDD_OFFSET))(this);
	}
};
