#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueTournEnterNextRoom; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_C59A1D161FC17DB6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E78630)
#define CLASS_2_C59A1D161FC17DB6_METHOD_2_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0x16E78680)
#define CLASS_2_C59A1D161FC17DB6_METHOD_2_A7E8B52E9ABB8DB9_1_OFFSET UNITYSDK_OFFSET(0x16E78860)
#define CLASS_2_C59A1D161FC17DB6_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x16E78790)
#define CLASS_2_C59A1D161FC17DB6_METHOD_2_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x16E77C30)
#define CLASS_2_C59A1D161FC17DB6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E77BE0)
#define CLASS_2_C59A1D161FC17DB6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E785E0)
#define CLASS_2_C59A1D161FC17DB6_TICK_OFFSET UNITYSDK_OFFSET(0x16E77B80)
#define CLASS_2_C59A1D161FC17DB6__CTOR_OFFSET UNITYSDK_OFFSET(0x16E77B70)

inline static constexpr unsigned int Class_2_C59A1D161FC17DB6_TypeDefinitionIndex = 55861;

class Class_2_C59A1D161FC17DB6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournEnterNextRoom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournEnterNextRoom*))((::PBYTE)hIl2Cpp + CLASS_2_C59A1D161FC17DB6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C59A1D161FC17DB6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C59A1D161FC17DB6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C59A1D161FC17DB6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C59A1D161FC17DB6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C59A1D161FC17DB6_METHOD_2_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C59A1D161FC17DB6_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C59A1D161FC17DB6_METHOD_2_A7E8B52E9ABB8DB9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C59A1D161FC17DB6_METHOD_2_7FD7D34994C88765_OFFSET))(this);
	}
};
