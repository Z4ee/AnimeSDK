#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddIsometricConnector; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_78DF9D0B854D1426_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113A1C70)
#define CLASS_3_78DF9D0B854D1426__CTOR_OFFSET UNITYSDK_OFFSET(0x113A1C40)

inline static constexpr unsigned int Class_3_78DF9D0B854D1426_TypeDefinitionIndex = 42339;

class Class_3_78DF9D0B854D1426 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddIsometricConnector*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddIsometricConnector* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddIsometricConnector*))((::PBYTE)hIl2Cpp + CLASS_3_78DF9D0B854D1426__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78DF9D0B854D1426_ONTASKBEGIN_OFFSET))(this);
	}
};
