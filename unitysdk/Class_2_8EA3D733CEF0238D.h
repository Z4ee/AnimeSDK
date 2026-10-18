#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client::Prop { class WolfBroPuzzleBoard; }
namespace RPG::GameCore { class RestoreWolfBroPuzzleArchive; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8EA3D733CEF0238D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C14490)
#define CLASS_2_8EA3D733CEF0238D_METHOD_2_90ED9EE1B14DE0E1_OFFSET UNITYSDK_OFFSET(0x15C148F0)
#define CLASS_2_8EA3D733CEF0238D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C140D0)
#define CLASS_2_8EA3D733CEF0238D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C14340)
#define CLASS_2_8EA3D733CEF0238D_TICK_OFFSET UNITYSDK_OFFSET(0x15C14670)
#define CLASS_2_8EA3D733CEF0238D__CTOR_OFFSET UNITYSDK_OFFSET(0x15C13FF0)

inline static constexpr unsigned int Class_2_8EA3D733CEF0238D_TypeDefinitionIndex = 58401;

class Class_2_8EA3D733CEF0238D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::RestoreWolfBroPuzzleArchive* IGHAHBNLIJA; // 0x20
	::Class_3_07C3C4D2990C49EE* EHOAHCNLNAN; // 0x28
	::RPG::Client::Prop::WolfBroPuzzleBoard* PNMFAOJNNIC; // 0x30
	::Class_3_07C3C4D2990C49EE* BBLAHCCDCDH; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RestoreWolfBroPuzzleArchive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RestoreWolfBroPuzzleArchive*))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_90ED9EE1B14DE0E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8EA3D733CEF0238D_METHOD_2_90ED9EE1B14DE0E1_OFFSET))(this, a1);
	}
};
