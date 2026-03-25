#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_DE4AC8AE3B4F2B78;
namespace RPG::GameCore { class ChessRemoveModifier; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F9F2B1AAE7578639_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89E0CB0)
#define CLASS_3_F9F2B1AAE7578639_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89E0CF0)
#define CLASS_3_F9F2B1AAE7578639__CTOR_OFFSET UNITYSDK_OFFSET(0x89E0C80)
#define CLASS_3_F9F2B1AAE7578639___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89E0FE0)

inline static constexpr unsigned int Class_3_F9F2B1AAE7578639_TypeDefinitionIndex = 45194;

class Class_3_F9F2B1AAE7578639 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChessRemoveModifier*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_2_DE4AC8AE3B4F2B78*> Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessRemoveModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessRemoveModifier*))((::PBYTE)hIl2Cpp + CLASS_3_F9F2B1AAE7578639__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9F2B1AAE7578639_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9F2B1AAE7578639_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9F2B1AAE7578639___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
