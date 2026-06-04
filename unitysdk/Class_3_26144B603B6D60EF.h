#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CreateServant; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_26144B603B6D60EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13574970)
#define CLASS_3_26144B603B6D60EF_METHOD_3_207D0B184A23A8F0_OFFSET UNITYSDK_OFFSET(0x13574630)
#define CLASS_3_26144B603B6D60EF_METHOD_3_95536C3FA20AED6B_OFFSET UNITYSDK_OFFSET(0x13573D90)
#define CLASS_3_26144B603B6D60EF_METHOD_3_AD5CED94BD3CC1D9_OFFSET UNITYSDK_OFFSET(0x13574880)
#define CLASS_3_26144B603B6D60EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13573CF0)
#define CLASS_3_26144B603B6D60EF__CTOR_OFFSET UNITYSDK_OFFSET(0x13573C50)
#define CLASS_3_26144B603B6D60EF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x135749E0)

inline static constexpr unsigned int Class_3_26144B603B6D60EF_TypeDefinitionIndex = 54257;

class Class_3_26144B603B6D60EF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateServant*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateServant* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateServant*))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_95536C3FA20AED6B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF_METHOD_3_95536C3FA20AED6B_OFFSET))(this, a1);
	}

	::System::Void Method_3_207D0B184A23A8F0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF_METHOD_3_207D0B184A23A8F0_OFFSET))(this, a1);
	}

	::System::Void Method_3_AD5CED94BD3CC1D9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_26144B603B6D60EF_METHOD_3_AD5CED94BD3CC1D9_OFFSET))(this, a1);
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
