#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C1DC709EFDF25E3D_Struct_2_03315CF1422390A1.h"
#include "unitysdk/Struct_2_2442E7E8181DD9B5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ClockParkStoryAnimState; }
namespace Spine::Unity { class SkeletonGraphic; }

#define CLASS_1_C1DC709EFDF25E3D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158340D0)
#define CLASS_1_C1DC709EFDF25E3D_METHOD_1_116DF8AD61D40E0D_OFFSET UNITYSDK_OFFSET(0x15833FB0)
#define CLASS_1_C1DC709EFDF25E3D_METHOD_1_16482F05628C7EA8_OFFSET UNITYSDK_OFFSET(0x15833DE0)
#define CLASS_1_C1DC709EFDF25E3D_METHOD_1_407B69A444CA13A6_OFFSET UNITYSDK_OFFSET(0x15833E40)
#define CLASS_1_C1DC709EFDF25E3D_METHOD_1_572CD15A5A4B0443_OFFSET UNITYSDK_OFFSET(0x15834120)
#define CLASS_1_C1DC709EFDF25E3D__CTOR_OFFSET UNITYSDK_OFFSET(0x15833DD0)

inline static constexpr unsigned int Class_1_C1DC709EFDF25E3D_TypeDefinitionIndex = 60394;

class Class_1_C1DC709EFDF25E3D : public ::System::Object
{
public:
	::Spine::Unity::SkeletonGraphic* PMJCJFGNLCN; // 0x10
	::Class_1_C1DC709EFDF25E3D_Struct_2_03315CF1422390A1 JJBOPOPCOCH; // 0x18
	::RPG::GameCore::ClockParkStoryAnimState* LJCLINDGLLH; // 0x28

	::System::Void _ctor(::Spine::Unity::SkeletonGraphic* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + CLASS_1_C1DC709EFDF25E3D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_16482F05628C7EA8(::RPG::GameCore::ClockParkStoryAnimState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkStoryAnimState*))((::PBYTE)hIl2Cpp + CLASS_1_C1DC709EFDF25E3D_METHOD_1_16482F05628C7EA8_OFFSET))(this, a1);
	}

	::System::Void Method_1_407B69A444CA13A6(::RPG::GameCore::ClockParkStoryAnimState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkStoryAnimState*))((::PBYTE)hIl2Cpp + CLASS_1_C1DC709EFDF25E3D_METHOD_1_407B69A444CA13A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_116DF8AD61D40E0D(::RPG::GameCore::ClockParkStoryAnimState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkStoryAnimState*))((::PBYTE)hIl2Cpp + CLASS_1_C1DC709EFDF25E3D_METHOD_1_116DF8AD61D40E0D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1DC709EFDF25E3D_DISPOSE_OFFSET))(this);
	}

	::Struct_2_2442E7E8181DD9B5 Method_1_572CD15A5A4B0443()
	{
		return ((::Struct_2_2442E7E8181DD9B5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1DC709EFDF25E3D_METHOD_1_572CD15A5A4B0443_OFFSET))(this);
	}
};
