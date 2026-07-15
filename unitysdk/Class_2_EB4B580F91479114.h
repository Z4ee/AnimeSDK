#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2668DA02E674CE7.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EB4B580F91479114_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A47060)
#define CLASS_2_EB4B580F91479114_METHOD_2_379E39002F4429A3_OFFSET UNITYSDK_OFFSET(0x13A46DA0)
#define CLASS_2_EB4B580F91479114_METHOD_2_A845167B6E660A57_OFFSET UNITYSDK_OFFSET(0x13A46FA0)
#define CLASS_2_EB4B580F91479114__CTOR_OFFSET UNITYSDK_OFFSET(0x13A46D40)

inline static constexpr unsigned int Class_2_EB4B580F91479114_TypeDefinitionIndex = 66308;

class Class_2_EB4B580F91479114 : public ::Class_1_A2668DA02E674CE7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB4B580F91479114__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_379E39002F4429A3(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EB4B580F91479114_METHOD_2_379E39002F4429A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A845167B6E660A57(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_EB4B580F91479114_METHOD_2_A845167B6E660A57_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB4B580F91479114_DISPOSE_OFFSET))(this);
	}
};
