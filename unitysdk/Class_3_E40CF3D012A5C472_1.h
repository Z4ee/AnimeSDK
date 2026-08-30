#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_29E838C92FC61B7A.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define CLASS_3_E40CF3D012A5C472_1_METHOD_3_0AD194604E14DF25_OFFSET UNITYSDK_OFFSET(0x162DB690)
#define CLASS_3_E40CF3D012A5C472_1_METHOD_3_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x162DB190)
#define CLASS_3_E40CF3D012A5C472_1_METHOD_3_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x162DB4F0)
#define CLASS_3_E40CF3D012A5C472_1_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x162DB5D0)
#define CLASS_3_E40CF3D012A5C472_1_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x162DB630)
#define CLASS_3_E40CF3D012A5C472_1__CTOR_OFFSET UNITYSDK_OFFSET(0x162DB140)
#define CLASS_3_E40CF3D012A5C472_1__PLAYTRANSITION_B__1_0_OFFSET UNITYSDK_OFFSET(0x162DB880)

inline static constexpr unsigned int Class_3_E40CF3D012A5C472_1_TypeDefinitionIndex = 73017;

class Class_3_E40CF3D012A5C472_1 : public ::Class_2_29E838C92FC61B7A
{
public:
	::RPG::Client::Promises::Promise* OBLMKODKNCA; // 0x28
	::RPG::Client::UIController* HKJLKMCDMGB; // 0x30
	::RPG::Client::Promises::Promise* NFEBMNGKADJ; // 0x38
	::RPG::Client::Promises::Promise* ECDCAFKFIFJ; // 0x40
	::RPG::Client::UIController* IBLBKLNHKLL; // 0x48

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_1_METHOD_3_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Boolean Method_3_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_1_METHOD_3_8F059A365E90744C_OFFSET))(this);
	}

	::System::Void Method_3_0AD194604E14DF25(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_1_METHOD_3_0AD194604E14DF25_OFFSET))(this, a1);
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
