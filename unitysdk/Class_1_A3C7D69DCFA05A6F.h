#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraDeleteEffect; }

#define CLASS_1_A3C7D69DCFA05A6F_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x18807360)
#define CLASS_1_A3C7D69DCFA05A6F_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x18807320)
#define CLASS_1_A3C7D69DCFA05A6F__CTOR_OFFSET UNITYSDK_OFFSET(0x188072F0)

inline static constexpr unsigned int Class_1_A3C7D69DCFA05A6F_TypeDefinitionIndex = 77939;

class Class_1_A3C7D69DCFA05A6F : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDeleteEffect* IGHAHBNLIJA; // 0x10
	::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChimeraDeleteEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDeleteEffect*))((::PBYTE)hIl2Cpp + CLASS_1_A3C7D69DCFA05A6F__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C7D69DCFA05A6F_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C7D69DCFA05A6F_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}
};
