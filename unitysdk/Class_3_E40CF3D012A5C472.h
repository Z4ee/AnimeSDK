#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_29E838C92FC61B7A.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define CLASS_3_E40CF3D012A5C472_METHOD_3_0AD194604E14DF25_OFFSET UNITYSDK_OFFSET(0x160A7070)
#define CLASS_3_E40CF3D012A5C472_METHOD_3_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x160A6D50)
#define CLASS_3_E40CF3D012A5C472_METHOD_3_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x160A6FE0)
#define CLASS_3_E40CF3D012A5C472__CTOR_OFFSET UNITYSDK_OFFSET(0x160A6D00)
#define CLASS_3_E40CF3D012A5C472__PLAYTRANSITION_B__1_0_OFFSET UNITYSDK_OFFSET(0x160A7260)

inline static constexpr unsigned int Class_3_E40CF3D012A5C472_TypeDefinitionIndex = 73017;

class Class_3_E40CF3D012A5C472 : public ::Class_2_29E838C92FC61B7A
{
public:
	::RPG::Client::Promises::Promise* OBLMKODKNCA; // 0x28
	::RPG::Client::UIController* HKJLKMCDMGB; // 0x30
	::RPG::Client::UIController* IBLBKLNHKLL; // 0x38
	::RPG::Client::Promises::Promise* NFEBMNGKADJ; // 0x40
	::RPG::Client::Promises::Promise* ECDCAFKFIFJ; // 0x48

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_METHOD_3_1F130271093617A5_OFFSET))(this);
	}

	::System::Boolean Method_3_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_METHOD_3_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Void Method_3_0AD194604E14DF25(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472_METHOD_3_0AD194604E14DF25_OFFSET))(this, a1);
	}

	::System::Void _PlayTransition_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E40CF3D012A5C472__PLAYTRANSITION_B__1_0_OFFSET))(this);
	}
};
