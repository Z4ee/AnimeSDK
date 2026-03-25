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

#define CLASS_2_8B9A326D781E1653_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10563F20)
#define CLASS_2_8B9A326D781E1653_METHOD_2_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x10563C90)
#define CLASS_2_8B9A326D781E1653_METHOD_2_6DD5A8AC0E26FA02_OFFSET UNITYSDK_OFFSET(0x105644D0)
#define CLASS_2_8B9A326D781E1653_METHOD_2_B4D726B1CCBC8947_OFFSET UNITYSDK_OFFSET(0x10564640)
#define CLASS_2_8B9A326D781E1653_METHOD_2_C78BDE3AF528F1B1_OFFSET UNITYSDK_OFFSET(0x105643A0)
#define CLASS_2_8B9A326D781E1653_METHOD_2_D1741D8BDBC238C3_OFFSET UNITYSDK_OFFSET(0x105642F0)
#define CLASS_2_8B9A326D781E1653_METHOD_2_F6C51BEA6E90101F_OFFSET UNITYSDK_OFFSET(0x10563F60)
#define CLASS_2_8B9A326D781E1653__CTOR_OFFSET UNITYSDK_OFFSET(0x10563C30)
#define CLASS_2_8B9A326D781E1653__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x10563EA0)
#define CLASS_2_8B9A326D781E1653___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x105646A0)

inline static constexpr unsigned int Class_2_8B9A326D781E1653_TypeDefinitionIndex = 45861;

class Class_2_8B9A326D781E1653 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_0; // 0x18
	::RPG::GameCore::TransformComponent* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B9A326D781E1653__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B9A326D781E1653__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B9A326D781E1653_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B9A326D781E1653_METHOD_2_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F6C51BEA6E90101F(::RPG::GameCore::AdvancedFollowType a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8B9A326D781E1653_METHOD_2_F6C51BEA6E90101F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D1741D8BDBC238C3(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B9A326D781E1653_METHOD_2_D1741D8BDBC238C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C78BDE3AF528F1B1(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8B9A326D781E1653_METHOD_2_C78BDE3AF528F1B1_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FollowSideType Method_2_6DD5A8AC0E26FA02(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::FollowSideType(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8B9A326D781E1653_METHOD_2_6DD5A8AC0E26FA02_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>* Method_2_B4D726B1CCBC8947(::RPG::GameCore::AdvancedFollowType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9CCB4E0B2BD5996B*>*(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType))((::PBYTE)hIl2Cpp + CLASS_2_8B9A326D781E1653_METHOD_2_B4D726B1CCBC8947_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B9A326D781E1653___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
