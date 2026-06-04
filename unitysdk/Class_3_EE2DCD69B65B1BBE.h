#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::GameCore { class SetCharacterShadowFactor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EE2DCD69B65B1BBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9F13C0)
#define CLASS_3_EE2DCD69B65B1BBE_METHOD_3_209E4250CA87B30E_OFFSET UNITYSDK_OFFSET(0xB9F1670)
#define CLASS_3_EE2DCD69B65B1BBE_METHOD_3_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0xB9F14D0)
#define CLASS_3_EE2DCD69B65B1BBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9F1410)
#define CLASS_3_EE2DCD69B65B1BBE__CTOR_OFFSET UNITYSDK_OFFSET(0xB9F1390)
#define CLASS_3_EE2DCD69B65B1BBE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9F1790)

inline static constexpr unsigned int Class_3_EE2DCD69B65B1BBE_TypeDefinitionIndex = 49745;

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

	::System::Void Method_3_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE2DCD69B65B1BBE_METHOD_3_2ED6C3773AA1E488_OFFSET))(this);
	}

	::System::Boolean Method_3_209E4250CA87B30E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE2DCD69B65B1BBE_METHOD_3_209E4250CA87B30E_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE2DCD69B65B1BBE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
