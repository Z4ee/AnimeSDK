#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_29E838C92FC61B7A.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define CLASS_3_E40CF3D012A5C472_1_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x9739640)
#define CLASS_3_E40CF3D012A5C472_1_METHOD_3_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x9739990)
#define CLASS_3_E40CF3D012A5C472_1_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x9739A70)
#define CLASS_3_E40CF3D012A5C472_1_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9739AD0)
#define CLASS_3_E40CF3D012A5C472_1_METHOD_3_BE5CE60A38BF9255_OFFSET UNITYSDK_OFFSET(0x9739B30)
#define CLASS_3_E40CF3D012A5C472_1__CTOR_OFFSET UNITYSDK_OFFSET(0x97395F0)
#define CLASS_3_E40CF3D012A5C472_1__PLAYTRANSITION_B__1_0_OFFSET UNITYSDK_OFFSET(0x9739C40)

inline static constexpr unsigned int Class_3_E40CF3D012A5C472_1_TypeDefinitionIndex = 67318;

class Class_3_E40CF3D012A5C472_1 : public ::Class_2_29E838C92FC61B7A
{
public:
	::RPG::Client::UIController* Field_3_3; // 0x28
	::RPG::Client::UIController* Field_3_4; // 0x30
	::RPG::Client::Promises::Promise* Field_3_2; // 0x38
	::RPG::Client::Promises::Promise* Field_3_1; // 0x40
	::RPG::Client::Promises::Promise* Field_3_0; // 0x48

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_1_METHOD_3_18982EFD3B740683_OFFSET))(this);
	}

	::System::Boolean Method_3_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_1_METHOD_3_8F059A365E90744C_OFFSET))(this);
	}

	::System::Void Method_3_BE5CE60A38BF9255(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_1_METHOD_3_BE5CE60A38BF9255_OFFSET))(this, a1);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_1_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_1_METHOD_3_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void _PlayTransition_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_1__PLAYTRANSITION_B__1_0_OFFSET))(this);
	}
};
