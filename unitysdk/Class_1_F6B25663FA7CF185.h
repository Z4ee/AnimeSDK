#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_F6B25663FA7CF185_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x11C68EB0)
#define CLASS_1_F6B25663FA7CF185_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x11C68DD0)
#define CLASS_1_F6B25663FA7CF185_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x11C68F30)
#define CLASS_1_F6B25663FA7CF185__CTOR_OFFSET UNITYSDK_OFFSET(0x11C68DB0)

inline static constexpr unsigned int Class_1_F6B25663FA7CF185_TypeDefinitionIndex = 67683;

class Class_1_F6B25663FA7CF185 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x1C

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

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6B25663FA7CF185_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}
};
