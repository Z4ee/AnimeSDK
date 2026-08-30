#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_4720963B3ED3BDD4_METHOD_1_5149645ACE4821C6_OFFSET UNITYSDK_OFFSET(0xC468C00)
#define CLASS_1_4720963B3ED3BDD4_METHOD_1_7CE2E7FC709DD43F_OFFSET UNITYSDK_OFFSET(0xC468AB0)
#define CLASS_1_4720963B3ED3BDD4_METHOD_1_842DFE6460F946FC_OFFSET UNITYSDK_OFFSET(0xC468A10)
#define CLASS_1_4720963B3ED3BDD4_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xC468880)
#define CLASS_1_4720963B3ED3BDD4_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC468D10)
#define CLASS_1_4720963B3ED3BDD4_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xC4688D0)
#define CLASS_1_4720963B3ED3BDD4_METHOD_1_DADD05C6FEB39CCF_OFFSET UNITYSDK_OFFSET(0xC4688E0)
#define CLASS_1_4720963B3ED3BDD4__CTOR_OFFSET UNITYSDK_OFFSET(0xC468D80)

inline static constexpr unsigned int Class_1_4720963B3ED3BDD4_TypeDefinitionIndex = 69956;

class Class_1_4720963B3ED3BDD4 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* HFOOLDDNDLK; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JJDBDLKKDFC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4720963B3ED3BDD4__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4720963B3ED3BDD4_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4720963B3ED3BDD4_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_1_DADD05C6FEB39CCF(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4720963B3ED3BDD4_METHOD_1_DADD05C6FEB39CCF_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_842DFE6460F946FC(::System::Int32 a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4720963B3ED3BDD4_METHOD_1_842DFE6460F946FC_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_7CE2E7FC709DD43F(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4720963B3ED3BDD4_METHOD_1_7CE2E7FC709DD43F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5149645ACE4821C6(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_4720963B3ED3BDD4_METHOD_1_5149645ACE4821C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4720963B3ED3BDD4_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
