#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class StartTutorialGraph; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D37558F57F204A7E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11190D10)
#define CLASS_3_D37558F57F204A7E_METHOD_3_FF55884589608AE4_OFFSET UNITYSDK_OFFSET(0x11191220)
#define CLASS_3_D37558F57F204A7E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11190EE0)
#define CLASS_3_D37558F57F204A7E__CTOR_OFFSET UNITYSDK_OFFSET(0x11190CE0)
#define CLASS_3_D37558F57F204A7E___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111912D0)

inline static constexpr unsigned int Class_3_D37558F57F204A7E_TypeDefinitionIndex = 54147;

class Class_3_D37558F57F204A7E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartTutorialGraph*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::LevelGraphComponent*>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartTutorialGraph* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartTutorialGraph*))((::PBYTE)hIl2Cpp + CLASS_3_D37558F57F204A7E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37558F57F204A7E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37558F57F204A7E_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraphComponent* Method_3_FF55884589608AE4(::System::String* a1)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D37558F57F204A7E_METHOD_3_FF55884589608AE4_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37558F57F204A7E___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
