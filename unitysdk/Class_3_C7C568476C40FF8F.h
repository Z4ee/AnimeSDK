#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetLocalPlayerLookAtTargets; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C7C568476C40FF8F_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE4F87A0)
#define CLASS_3_C7C568476C40FF8F_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE4F8800)
#define CLASS_3_C7C568476C40FF8F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4F8700)
#define CLASS_3_C7C568476C40FF8F__CTOR_OFFSET UNITYSDK_OFFSET(0xE4F86D0)

inline static constexpr unsigned int Class_3_C7C568476C40FF8F_TypeDefinitionIndex = 55814;

class Class_3_C7C568476C40FF8F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetLocalPlayerLookAtTargets*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetLocalPlayerLookAtTargets* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetLocalPlayerLookAtTargets*))((::PBYTE)hIl2Cpp + CLASS_3_C7C568476C40FF8F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C568476C40FF8F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C568476C40FF8F_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C568476C40FF8F_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}
};
