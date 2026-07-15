#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetVersusBar; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_DADF6E2264D3431E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176D4070)
#define CLASS_2_DADF6E2264D3431E_METHOD_2_71436269021F921C_OFFSET UNITYSDK_OFFSET(0x176D44A0)
#define CLASS_2_DADF6E2264D3431E_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x176D41A0)
#define CLASS_2_DADF6E2264D3431E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176D40B0)
#define CLASS_2_DADF6E2264D3431E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x176D43F0)
#define CLASS_2_DADF6E2264D3431E_TICK_OFFSET UNITYSDK_OFFSET(0x176D4440)
#define CLASS_2_DADF6E2264D3431E__CTOR_OFFSET UNITYSDK_OFFSET(0x176D4060)

inline static constexpr unsigned int Class_2_DADF6E2264D3431E_TypeDefinitionIndex = 53076;

class Class_2_DADF6E2264D3431E : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetVersusBar* Field_2_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetVersusBar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetVersusBar*))((::PBYTE)hIl2Cpp + CLASS_2_DADF6E2264D3431E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DADF6E2264D3431E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DADF6E2264D3431E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DADF6E2264D3431E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DADF6E2264D3431E_TICK_OFFSET))(this, a1);
	}

	::System::Nullable_1<::RPG::GameCore::FixPoint> Method_2_71436269021F921C(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_DADF6E2264D3431E_METHOD_2_71436269021F921C_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DADF6E2264D3431E_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}
};
