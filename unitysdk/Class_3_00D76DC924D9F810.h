#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class StartLevelGraph; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_00D76DC924D9F810_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD422D0)
#define CLASS_3_00D76DC924D9F810_METHOD_3_EFAE6171FF3CE93B_OFFSET UNITYSDK_OFFSET(0xAD42920)
#define CLASS_3_00D76DC924D9F810_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD424C0)
#define CLASS_3_00D76DC924D9F810__CTOR_OFFSET UNITYSDK_OFFSET(0xAD422A0)
#define CLASS_3_00D76DC924D9F810___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD429E0)

inline static constexpr unsigned int Class_3_00D76DC924D9F810_TypeDefinitionIndex = 54865;

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

	::RPG::GameCore::LevelGraphComponent* Method_3_EFAE6171FF3CE93B(::System::String* a1)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_00D76DC924D9F810_METHOD_3_EFAE6171FF3CE93B_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00D76DC924D9F810___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
