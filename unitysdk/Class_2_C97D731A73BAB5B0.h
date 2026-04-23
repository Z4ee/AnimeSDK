#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class SetSummonerEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C97D731A73BAB5B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1003ADE0)
#define CLASS_2_C97D731A73BAB5B0_METHOD_2_4AD3C45D81B35B70_OFFSET UNITYSDK_OFFSET(0x1003B5B0)
#define CLASS_2_C97D731A73BAB5B0_METHOD_2_A4CFEC9B24D035DA_OFFSET UNITYSDK_OFFSET(0x1003B610)
#define CLASS_2_C97D731A73BAB5B0_METHOD_2_CD0979951400C3FD_OFFSET UNITYSDK_OFFSET(0x1003B550)
#define CLASS_2_C97D731A73BAB5B0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1003AE20)
#define CLASS_2_C97D731A73BAB5B0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1003B670)
#define CLASS_2_C97D731A73BAB5B0_TICK_OFFSET UNITYSDK_OFFSET(0x1003B6C0)
#define CLASS_2_C97D731A73BAB5B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1003ADD0)

inline static constexpr unsigned int Class_2_C97D731A73BAB5B0_TypeDefinitionIndex = 51233;

class Class_2_C97D731A73BAB5B0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetSummonerEnergyBarState* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSummonerEnergyBarState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSummonerEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_C97D731A73BAB5B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C97D731A73BAB5B0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C97D731A73BAB5B0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C97D731A73BAB5B0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C97D731A73BAB5B0_TICK_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_2_4AD3C45D81B35B70(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C97D731A73BAB5B0_METHOD_2_4AD3C45D81B35B70_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Boolean> Method_2_CD0979951400C3FD(::RPG::GameCore::BoolEx a1)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CLASS_2_C97D731A73BAB5B0_METHOD_2_CD0979951400C3FD_OFFSET))(this, a1);
	}

	::System::Nullable_1<::RPG::GameCore::SummonerEnergyBarType> Method_2_A4CFEC9B24D035DA(::RPG::GameCore::SummonerEnergyBarType a1)
	{
		return ((::System::Nullable_1<::RPG::GameCore::SummonerEnergyBarType>(*)(::PVOID, ::RPG::GameCore::SummonerEnergyBarType))((::PBYTE)hIl2Cpp + CLASS_2_C97D731A73BAB5B0_METHOD_2_A4CFEC9B24D035DA_OFFSET))(this, a1);
	}
};
