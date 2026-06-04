#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class RandomSelectMonsterIDFromPool; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1627CEF0E374D403_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B9FB00)
#define CLASS_3_1627CEF0E374D403__CTOR_OFFSET UNITYSDK_OFFSET(0x13B9F9D0)

inline static constexpr unsigned int Class_3_1627CEF0E374D403_TypeDefinitionIndex = 51632;

class Class_3_1627CEF0E374D403 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RandomSelectMonsterIDFromPool*>
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectMonsterIDFromPool* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectMonsterIDFromPool*))((::PBYTE)hIl2Cpp + CLASS_3_1627CEF0E374D403__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1627CEF0E374D403_ONTASKBEGIN_OFFSET))(this);
	}
};
