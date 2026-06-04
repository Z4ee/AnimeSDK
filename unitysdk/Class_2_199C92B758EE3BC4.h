#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/FollowSideType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9CCB4E0B2BD5996B;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_199C92B758EE3BC4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3AF5B0)
#define CLASS_2_199C92B758EE3BC4_METHOD_2_7CBDF6CA1280D0AB_OFFSET UNITYSDK_OFFSET(0xA3AF5F0)
#define CLASS_2_199C92B758EE3BC4_METHOD_2_7D4E1267E8D027F3_OFFSET UNITYSDK_OFFSET(0xA3AFA70)
#define CLASS_2_199C92B758EE3BC4_METHOD_2_A841BEF6E9F595ED_OFFSET UNITYSDK_OFFSET(0xA3AFA00)
#define CLASS_2_199C92B758EE3BC4_METHOD_2_E66A9D821F58B238_OFFSET UNITYSDK_OFFSET(0xA3AFD30)
#define CLASS_2_199C92B758EE3BC4_METHOD_2_EE21139DCAA71AD1_OFFSET UNITYSDK_OFFSET(0xA3AFBA0)
#define CLASS_2_199C92B758EE3BC4_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0xA3AF140)
#define CLASS_2_199C92B758EE3BC4__CTOR_OFFSET UNITYSDK_OFFSET(0xA3AF0C0)
#define CLASS_2_199C92B758EE3BC4__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xA3AF530)
#define CLASS_2_199C92B758EE3BC4___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xA3AFEE0)

inline static constexpr unsigned int Class_2_199C92B758EE3BC4_TypeDefinitionIndex = 53219;

class Class_2_199C92B758EE3BC4 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_0; // 0x18
	::RPG::GameCore::TransformComponent* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_199C92B758EE3BC4__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_199C92B758EE3BC4__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_199C92B758EE3BC4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_199C92B758EE3BC4_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7CBDF6CA1280D0AB(::RPG::GameCore::AdvancedFollowType a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_199C92B758EE3BC4_METHOD_2_7CBDF6CA1280D0AB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_7D4E1267E8D027F3(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_199C92B758EE3BC4_METHOD_2_7D4E1267E8D027F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EE21139DCAA71AD1(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_199C92B758EE3BC4_METHOD_2_EE21139DCAA71AD1_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FollowSideType Method_2_E66A9D821F58B238(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::FollowSideType(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_199C92B758EE3BC4_METHOD_2_E66A9D821F58B238_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* Method_2_A841BEF6E9F595ED(::RPG::GameCore::AdvancedFollowType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>*(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType))((::PBYTE)hIl2Cpp + CLASS_2_199C92B758EE3BC4_METHOD_2_A841BEF6E9F595ED_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_199C92B758EE3BC4___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
