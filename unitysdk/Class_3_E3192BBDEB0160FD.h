#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveMiniEmoEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E3192BBDEB0160FD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10648D70)
#define CLASS_3_E3192BBDEB0160FD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10648DB0)
#define CLASS_3_E3192BBDEB0160FD__CTOR_OFFSET UNITYSDK_OFFSET(0x10648D40)
#define CLASS_3_E3192BBDEB0160FD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10649280)

inline static constexpr unsigned int Class_3_E3192BBDEB0160FD_TypeDefinitionIndex = 51663;

class Class_3_E3192BBDEB0160FD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveMiniEmoEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveMiniEmoEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveMiniEmoEffect*))((::PBYTE)hIl2Cpp + CLASS_3_E3192BBDEB0160FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3192BBDEB0160FD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3192BBDEB0160FD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3192BBDEB0160FD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
