#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::GameCore { class SetCharacterShadowFactor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EE2DCD69B65B1BBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A2AD30)
#define CLASS_3_EE2DCD69B65B1BBE_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x11A2AE50)
#define CLASS_3_EE2DCD69B65B1BBE_METHOD_3_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x11A2AFE0)
#define CLASS_3_EE2DCD69B65B1BBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11A2AD80)
#define CLASS_3_EE2DCD69B65B1BBE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A2AD00)
#define CLASS_3_EE2DCD69B65B1BBE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A2B0F0)

inline static constexpr unsigned int Class_3_EE2DCD69B65B1BBE_TypeDefinitionIndex = 49078;

class Class_3_EE2DCD69B65B1BBE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterShadowFactor*>
{
public:
	::RPG::Client::EnvironmentSystem* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterShadowFactor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterShadowFactor*))((::PBYTE)hIl2Cpp + CLASS_3_EE2DCD69B65B1BBE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE2DCD69B65B1BBE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE2DCD69B65B1BBE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE2DCD69B65B1BBE_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Boolean Method_3_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE2DCD69B65B1BBE_METHOD_3_ADA85C40A3382050_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE2DCD69B65B1BBE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
