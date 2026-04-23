#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_EBE6530799B0DEF6;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_0A601DE0056E216D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12ACF9E0)
#define CLASS_3_0A601DE0056E216D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12ACFA20)
#define CLASS_3_0A601DE0056E216D__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACF9B0)
#define CLASS_3_0A601DE0056E216D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12ACFC70)

inline static constexpr unsigned int Class_3_0A601DE0056E216D_TypeDefinitionIndex = 49601;

class Class_3_0A601DE0056E216D : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_EBE6530799B0DEF6*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EBE6530799B0DEF6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EBE6530799B0DEF6*))((::PBYTE)hIl2Cpp + CLASS_3_0A601DE0056E216D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A601DE0056E216D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A601DE0056E216D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A601DE0056E216D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
