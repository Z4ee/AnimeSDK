#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/FollowSideType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9CCB4E0B2BD5996B;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class FollowSlotConfig; }
namespace RPG::GameCore { class FollowSlotConstValue; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F1273BE0DA4ECE9A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB122910)
#define CLASS_2_F1273BE0DA4ECE9A_METHOD_2_25CFFC00A8B9D30D_OFFSET UNITYSDK_OFFSET(0xB122950)
#define CLASS_2_F1273BE0DA4ECE9A_METHOD_2_59676C39DFF5294A_OFFSET UNITYSDK_OFFSET(0xB122630)
#define CLASS_2_F1273BE0DA4ECE9A_METHOD_2_7CBDF6CA1280D0AB_OFFSET UNITYSDK_OFFSET(0xB122B20)
#define CLASS_2_F1273BE0DA4ECE9A_METHOD_2_7D4E1267E8D027F3_OFFSET UNITYSDK_OFFSET(0xB122FA0)
#define CLASS_2_F1273BE0DA4ECE9A_METHOD_2_A841BEF6E9F595ED_OFFSET UNITYSDK_OFFSET(0xB122F30)
#define CLASS_2_F1273BE0DA4ECE9A_METHOD_2_E66A9D821F58B238_OFFSET UNITYSDK_OFFSET(0xB123260)
#define CLASS_2_F1273BE0DA4ECE9A_METHOD_2_EE21139DCAA71AD1_OFFSET UNITYSDK_OFFSET(0xB1230D0)
#define CLASS_2_F1273BE0DA4ECE9A__CTOR_OFFSET UNITYSDK_OFFSET(0xB1225A0)
#define CLASS_2_F1273BE0DA4ECE9A__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB122890)

inline static constexpr unsigned int Class_2_F1273BE0DA4ECE9A_TypeDefinitionIndex = 56988;

class Class_2_F1273BE0DA4ECE9A : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::AdventureCharacterController* GPACEDIFLNG; // 0x18
	::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* BFNMKINHHPC; // 0x20
	::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* AKIFAAKBIMK; // 0x28
	::RPG::GameCore::TransformComponent* GGLEFOFHHCN; // 0x30
	::RPG::GameCore::FollowSlotConstValue* IGHAHBNLIJA; // 0x38
	::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* BOFCMCCNIFP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1273BE0DA4ECE9A__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1273BE0DA4ECE9A__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1273BE0DA4ECE9A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_59676C39DFF5294A(::RPG::GameCore::FollowSlotConstValue* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FollowSlotConstValue*))((::PBYTE)hIl2Cpp + CLASS_2_F1273BE0DA4ECE9A_METHOD_2_59676C39DFF5294A_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* Method_2_25CFFC00A8B9D30D(::Il2CppArray<::RPG::GameCore::FollowSlotConfig*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>*(*)(::Il2CppArray<::RPG::GameCore::FollowSlotConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_F1273BE0DA4ECE9A_METHOD_2_25CFFC00A8B9D30D_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_2_7CBDF6CA1280D0AB(::RPG::GameCore::AdvancedFollowType a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F1273BE0DA4ECE9A_METHOD_2_7CBDF6CA1280D0AB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_7D4E1267E8D027F3(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F1273BE0DA4ECE9A_METHOD_2_7D4E1267E8D027F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EE21139DCAA71AD1(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F1273BE0DA4ECE9A_METHOD_2_EE21139DCAA71AD1_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FollowSideType Method_2_E66A9D821F58B238(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::FollowSideType(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F1273BE0DA4ECE9A_METHOD_2_E66A9D821F58B238_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* Method_2_A841BEF6E9F595ED(::RPG::GameCore::AdvancedFollowType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>*(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType))((::PBYTE)hIl2Cpp + CLASS_2_F1273BE0DA4ECE9A_METHOD_2_A841BEF6E9F595ED_OFFSET))(this, a1);
	}
};
