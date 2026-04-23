#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class CreateServant; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_26144B603B6D60EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12345930)
#define CLASS_3_26144B603B6D60EF_METHOD_3_5B8EE3FCB7064768_OFFSET UNITYSDK_OFFSET(0x12344D90)
#define CLASS_3_26144B603B6D60EF_METHOD_3_A0FB414665BFE43F_OFFSET UNITYSDK_OFFSET(0x12345840)
#define CLASS_3_26144B603B6D60EF_METHOD_3_C6FB737CA211F5FA_OFFSET UNITYSDK_OFFSET(0x123455F0)
#define CLASS_3_26144B603B6D60EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12344D00)
#define CLASS_3_26144B603B6D60EF__CTOR_OFFSET UNITYSDK_OFFSET(0x12344C60)
#define CLASS_3_26144B603B6D60EF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123459A0)

inline static constexpr unsigned int Class_3_26144B603B6D60EF_TypeDefinitionIndex = 53544;

class Class_3_26144B603B6D60EF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateServant*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateServant* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateServant*))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_5B8EE3FCB7064768(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF_METHOD_3_5B8EE3FCB7064768_OFFSET))(this, a1);
	}

	::System::Void Method_3_C6FB737CA211F5FA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF_METHOD_3_C6FB737CA211F5FA_OFFSET))(this, a1);
	}

	::System::Void Method_3_A0FB414665BFE43F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF_METHOD_3_A0FB414665BFE43F_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
