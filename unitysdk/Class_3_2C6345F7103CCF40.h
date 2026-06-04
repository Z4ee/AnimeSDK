#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_3F4D673D3F90D12C;
namespace RPG::GameCore { class AdvSetNpcVisionsConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VisionBaseConfig; }

#define CLASS_3_2C6345F7103CCF40_METHOD_3_DC2BF54A2A3B31B5_OFFSET UNITYSDK_OFFSET(0x141BD3F0)
#define CLASS_3_2C6345F7103CCF40_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x141BD4E0)
#define CLASS_3_2C6345F7103CCF40_METHOD_3_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x141BD270)
#define CLASS_3_2C6345F7103CCF40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141BD580)
#define CLASS_3_2C6345F7103CCF40__CTOR_OFFSET UNITYSDK_OFFSET(0x141BD240)

inline static constexpr unsigned int Class_3_2C6345F7103CCF40_TypeDefinitionIndex = 49101;

class Class_3_2C6345F7103CCF40 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetNpcVisionsConfig*>
{
public:
	::Class_2_3F4D673D3F90D12C* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetNpcVisionsConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetNpcVisionsConfig*))((::PBYTE)hIl2Cpp + CLASS_3_2C6345F7103CCF40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C6345F7103CCF40_METHOD_3_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C6345F7103CCF40_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_3_DC2BF54A2A3B31B5(::RPG::GameCore::VisionBaseConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VisionBaseConfig*))((::PBYTE)hIl2Cpp + CLASS_3_2C6345F7103CCF40_METHOD_3_DC2BF54A2A3B31B5_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C6345F7103CCF40_ONTASKBEGIN_OFFSET))(this);
	}
};
