#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_2556A61B9176D25C_Class_1_1D86127F16B40D4B;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2556A61B9176D25C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9CD520)
#define CLASS_2_2556A61B9176D25C_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD9CD310)
#define CLASS_2_2556A61B9176D25C_METHOD_2_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0xD9CD0C0)
#define CLASS_2_2556A61B9176D25C_METHOD_2_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0xD9CCFE0)
#define CLASS_2_2556A61B9176D25C_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0xD9CD380)
#define CLASS_2_2556A61B9176D25C_METHOD_2_8FAD5BE3925F662E_OFFSET UNITYSDK_OFFSET(0xD9CCD10)
#define CLASS_2_2556A61B9176D25C_METHOD_2_98F5AAA93BF786AA_OFFSET UNITYSDK_OFFSET(0xD9CD070)
#define CLASS_2_2556A61B9176D25C_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xD9CD600)
#define CLASS_2_2556A61B9176D25C_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xD9CCC20)
#define CLASS_2_2556A61B9176D25C__CTOR_OFFSET UNITYSDK_OFFSET(0xD9CD610)
#define CLASS_2_2556A61B9176D25C___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD9CD710)

inline static constexpr unsigned int Class_2_2556A61B9176D25C_TypeDefinitionIndex = 52496;

class Class_2_2556A61B9176D25C : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_2556A61B9176D25C_Class_1_1D86127F16B40D4B*>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2556A61B9176D25C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2556A61B9176D25C_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_8FAD5BE3925F662E(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2556A61B9176D25C_METHOD_2_8FAD5BE3925F662E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4C2ACACD89F4EF1A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2556A61B9176D25C_METHOD_2_4C2ACACD89F4EF1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_98F5AAA93BF786AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2556A61B9176D25C_METHOD_2_98F5AAA93BF786AA_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2556A61B9176D25C_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2556A61B9176D25C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2556A61B9176D25C_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_2_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2556A61B9176D25C_METHOD_2_159CB55E631AFCB9_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2556A61B9176D25C_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2556A61B9176D25C___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
