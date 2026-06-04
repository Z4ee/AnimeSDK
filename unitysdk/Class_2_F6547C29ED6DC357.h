#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_859C8B90384D9B45.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F6547C29ED6DC357_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA939190)
#define CLASS_2_F6547C29ED6DC357_METHOD_2_2E24602706D93F1A_OFFSET UNITYSDK_OFFSET(0xA939310)
#define CLASS_2_F6547C29ED6DC357_METHOD_2_379E39002F4429A3_OFFSET UNITYSDK_OFFSET(0xA938ED0)
#define CLASS_2_F6547C29ED6DC357_METHOD_2_A845167B6E660A57_OFFSET UNITYSDK_OFFSET(0xA9390D0)
#define CLASS_2_F6547C29ED6DC357__CTOR_OFFSET UNITYSDK_OFFSET(0xA938E70)
#define CLASS_2_F6547C29ED6DC357___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA939390)

inline static constexpr unsigned int Class_2_F6547C29ED6DC357_TypeDefinitionIndex = 64906;

class Class_2_F6547C29ED6DC357 : public ::Class_1_859C8B90384D9B45
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_379E39002F4429A3(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357_METHOD_2_379E39002F4429A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A845167B6E660A57(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357_METHOD_2_A845167B6E660A57_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2E24602706D93F1A(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357_METHOD_2_2E24602706D93F1A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
