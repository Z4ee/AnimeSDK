#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraTriggerTutorial; }

#define CLASS_1_17C7C0B21CED286E_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xBF1FA60)
#define CLASS_1_17C7C0B21CED286E_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xBF1F9F0)
#define CLASS_1_17C7C0B21CED286E__CTOR_OFFSET UNITYSDK_OFFSET(0xBF1F9B0)

inline static constexpr unsigned int Class_1_17C7C0B21CED286E_TypeDefinitionIndex = 72938;

class Class_1_17C7C0B21CED286E : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraTriggerTutorial* Field_1_0; // 0x10
	::RPG::Client::Promises::Promise* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChimeraTriggerTutorial* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTriggerTutorial*))((::PBYTE)hIl2Cpp + CLASS_1_17C7C0B21CED286E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17C7C0B21CED286E_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17C7C0B21CED286E_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
