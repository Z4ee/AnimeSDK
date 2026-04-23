#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraTriggerTutorial; }

#define CLASS_1_17C7C0B21CED286E_METHOD_1_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x129C9500)
#define CLASS_1_17C7C0B21CED286E_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x129C9570)
#define CLASS_1_17C7C0B21CED286E__CTOR_OFFSET UNITYSDK_OFFSET(0x129C94C0)

inline static constexpr unsigned int Class_1_17C7C0B21CED286E_TypeDefinitionIndex = 71916;

class Class_1_17C7C0B21CED286E : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraTriggerTutorial* Field_1_1; // 0x10
	::RPG::Client::Promises::Promise* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChimeraTriggerTutorial* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTriggerTutorial*))((::PBYTE)hIl2Cpp + CLASS_1_17C7C0B21CED286E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17C7C0B21CED286E_METHOD_1_0D372435D9CAE4BC_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17C7C0B21CED286E_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
