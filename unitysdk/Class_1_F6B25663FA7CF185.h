#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_F6B25663FA7CF185_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x1277DB90)
#define CLASS_1_F6B25663FA7CF185_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x1277DC10)
#define CLASS_1_F6B25663FA7CF185_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1277DAB0)
#define CLASS_1_F6B25663FA7CF185__CTOR_OFFSET UNITYSDK_OFFSET(0x1277DA90)

inline static constexpr unsigned int Class_1_F6B25663FA7CF185_TypeDefinitionIndex = 82418;

class Class_1_F6B25663FA7CF185 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F6B25663FA7CF185__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6B25663FA7CF185_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6B25663FA7CF185_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6B25663FA7CF185_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
