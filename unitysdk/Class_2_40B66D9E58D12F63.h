#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class SetEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_40B66D9E58D12F63_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D8CBE0)
#define CLASS_2_40B66D9E58D12F63_METHOD_2_4AD3C45D81B35B70_OFFSET UNITYSDK_OFFSET(0x17D8D720)
#define CLASS_2_40B66D9E58D12F63_METHOD_2_CD0979951400C3FD_OFFSET UNITYSDK_OFFSET(0x17D8D6C0)
#define CLASS_2_40B66D9E58D12F63_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D8CC20)
#define CLASS_2_40B66D9E58D12F63_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D8D780)
#define CLASS_2_40B66D9E58D12F63_TICK_OFFSET UNITYSDK_OFFSET(0x17D8D7D0)
#define CLASS_2_40B66D9E58D12F63__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8CBD0)

inline static constexpr unsigned int Class_2_40B66D9E58D12F63_TypeDefinitionIndex = 52985;

class Class_2_40B66D9E58D12F63 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetEnergyBarState* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEnergyBarState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_40B66D9E58D12F63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40B66D9E58D12F63_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40B66D9E58D12F63_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40B66D9E58D12F63_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_40B66D9E58D12F63_TICK_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_2_4AD3C45D81B35B70(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_40B66D9E58D12F63_METHOD_2_4AD3C45D81B35B70_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Boolean> Method_2_CD0979951400C3FD(::RPG::GameCore::BoolEx a1)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CLASS_2_40B66D9E58D12F63_METHOD_2_CD0979951400C3FD_OFFSET))(this, a1);
	}
};
