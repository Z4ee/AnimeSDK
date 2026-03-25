#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class StartLevelGraph; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_00D76DC924D9F810_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A243A0)
#define CLASS_3_00D76DC924D9F810_METHOD_3_FF55884589608AE4_OFFSET UNITYSDK_OFFSET(0x10A248B0)
#define CLASS_3_00D76DC924D9F810_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A24570)
#define CLASS_3_00D76DC924D9F810__CTOR_OFFSET UNITYSDK_OFFSET(0x10A24370)
#define CLASS_3_00D76DC924D9F810___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A24970)

inline static constexpr unsigned int Class_3_00D76DC924D9F810_TypeDefinitionIndex = 47404;

class Class_3_00D76DC924D9F810 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartLevelGraph*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::LevelGraphComponent*>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartLevelGraph* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartLevelGraph*))((::PBYTE)hIl2Cpp + CLASS_3_00D76DC924D9F810__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00D76DC924D9F810_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00D76DC924D9F810_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraphComponent* Method_3_FF55884589608AE4(::System::String* a1)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_00D76DC924D9F810_METHOD_3_FF55884589608AE4_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00D76DC924D9F810___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
