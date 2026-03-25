#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TopViewCameraChange; }

#define CLASS_2_36B0311AA3D42337_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA6E220)
#define CLASS_2_36B0311AA3D42337_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEA6E260)
#define CLASS_2_36B0311AA3D42337_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEA6E590)
#define CLASS_2_36B0311AA3D42337_TICK_OFFSET UNITYSDK_OFFSET(0xEA6E5E0)
#define CLASS_2_36B0311AA3D42337__CTOR_OFFSET UNITYSDK_OFFSET(0xEA6E210)

inline static constexpr unsigned int Class_2_36B0311AA3D42337_TypeDefinitionIndex = 45214;

class Class_2_36B0311AA3D42337 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TopViewCameraChange* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TopViewCameraChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TopViewCameraChange*))((::PBYTE)hIl2Cpp + CLASS_2_36B0311AA3D42337__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36B0311AA3D42337_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36B0311AA3D42337_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36B0311AA3D42337_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_36B0311AA3D42337_TICK_OFFSET))(this, a1);
	}
};
