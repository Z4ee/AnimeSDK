#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_DA3382F1929EE34F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetSkillTargetFormationByPos; }
namespace RPG::GameCore { class TargetFormationPosConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_0C367E7A441A3864_OFFSET UNITYSDK_OFFSET(0x1766C250)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_118921CEC5352D3A_OFFSET UNITYSDK_OFFSET(0x17669E20)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_332307E0A12B94F5_OFFSET UNITYSDK_OFFSET(0x1766A800)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_5DB3A18E804CCCE2_OFFSET UNITYSDK_OFFSET(0x1766C450)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_6C6650F65B954613_OFFSET UNITYSDK_OFFSET(0x1766BCA0)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_8552105155480496_OFFSET UNITYSDK_OFFSET(0x1766A270)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_89EB0E484B632E68_OFFSET UNITYSDK_OFFSET(0x17669270)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_8D51B202FC5EE713_OFFSET UNITYSDK_OFFSET(0x17668FF0)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_96A71CBCA23D7A3B_OFFSET UNITYSDK_OFFSET(0x1766B7B0)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_B70FC811D3DE1D47_OFFSET UNITYSDK_OFFSET(0x17668DB0)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_C0E2C76D45FEB7AF_OFFSET UNITYSDK_OFFSET(0x1766C650)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_CEADB24BF4FA453B_OFFSET UNITYSDK_OFFSET(0x17669F10)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_D460460D84D0F4A2_OFFSET UNITYSDK_OFFSET(0x1766B820)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_D73266C901E8AB89_OFFSET UNITYSDK_OFFSET(0x17669500)
#define CLASS_1_3DE83D320AD4AA4D_METHOD_1_DF27DAC2364334B7_OFFSET UNITYSDK_OFFSET(0x1766C500)

inline static constexpr unsigned int Class_1_3DE83D320AD4AA4D_TypeDefinitionIndex = 59192;

class Class_1_3DE83D320AD4AA4D : public ::System::Object
{
public:
	// static const ::System::Int32 GJFCPEHMGJE = 0x5; // 0x0

	static ::System::Void Method_1_B70FC811D3DE1D47(::RPG::GameCore::SetSkillTargetFormationByPos* a1, ::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>*& a2, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>*& a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::SetSkillTargetFormationByPos*, ::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>*&, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>*&))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_B70FC811D3DE1D47_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_3<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntity*> Method_1_8D51B202FC5EE713(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormationByPos* a2)
	{
		return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntity*>(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormationByPos*))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_8D51B202FC5EE713_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single> Method_1_89EB0E484B632E68(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_89EB0E484B632E68_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D73266C901E8AB89(::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>* a1, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>* a2, ::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* a3, ::System::Collections::Generic::LinkedListNode_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>*, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>*, ::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_D73266C901E8AB89_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_118921CEC5352D3A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_118921CEC5352D3A_OFFSET))(a1);
	}

	static ::System::Void Method_1_CEADB24BF4FA453B(::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_CEADB24BF4FA453B_OFFSET))(a1);
	}

	static ::System::Void Method_1_8552105155480496(::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* a1, ::System::Single a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>*, ::System::Single, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_8552105155480496_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_332307E0A12B94F5(::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_332307E0A12B94F5_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_96A71CBCA23D7A3B(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::MVector3 a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_96A71CBCA23D7A3B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D460460D84D0F4A2(::Struct_2_DA3382F1929EE34F& a1)
	{
		return ((::System::Void(*)(::Struct_2_DA3382F1929EE34F&))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_D460460D84D0F4A2_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C6650F65B954613(::Struct_2_DA3382F1929EE34F& a1)
	{
		return ((::System::Void(*)(::Struct_2_DA3382F1929EE34F&))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_6C6650F65B954613_OFFSET))(a1);
	}

	static ::System::Void Method_1_0C367E7A441A3864(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TeamType a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_0C367E7A441A3864_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_5DB3A18E804CCCE2(::System::Boolean a1, ::RPG::GameCore::TeamType a2)
	{
		return ((::System::Int32(*)(::System::Boolean, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_5DB3A18E804CCCE2_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_DF27DAC2364334B7(::RPG::GameCore::BattleInstance* a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_DF27DAC2364334B7_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_C0E2C76D45FEB7AF(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_METHOD_1_C0E2C76D45FEB7AF_OFFSET))(a1);
	}
};
