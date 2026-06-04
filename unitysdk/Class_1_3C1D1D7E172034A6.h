#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_3C1D1D7E172034A6_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x12ABD030)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_25966D0212530B06_OFFSET UNITYSDK_OFFSET(0x12ABD0F0)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_2C927E534C9662EA_OFFSET UNITYSDK_OFFSET(0x12ABD550)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x12ABD390)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0x12ABD2B0)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x12ABD4A0)
#define CLASS_1_3C1D1D7E172034A6_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x12ABD3E0)
#define CLASS_1_3C1D1D7E172034A6__CTOR_OFFSET UNITYSDK_OFFSET(0x12ABD0A0)

inline static constexpr unsigned int Class_1_3C1D1D7E172034A6_TypeDefinitionIndex = 53412;

class Class_1_3C1D1D7E172034A6 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Object* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Action_1<::Class_1_3C1D1D7E172034A6*>* Field_1_4; // 0x30
	::UnityEngine::Object* Field_1_5; // 0x38
	::RPG::Client::OnAssetOperationDelegate* Field_1_6; // 0x40
	::RPG::Client::IAssetOperation* Field_1_7; // 0x48
	::RPG::Client::IAssetOperation* Field_1_8; // 0x50
	::System::Int32 Field_1_9; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_25966D0212530B06(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_25966D0212530B06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_1_7A150941533E8F96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_7A150941533E8F96_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_A239DF324AF4215D_1_OFFSET))(this);
	}

	::System::Boolean Method_1_2C927E534C9662EA(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_3C1D1D7E172034A6_METHOD_1_2C927E534C9662EA_OFFSET))(this, a1);
	}
};
