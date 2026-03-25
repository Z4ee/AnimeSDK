#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_71A8A906AAB73A12_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x108D7E00)
#define CLASS_1_71A8A906AAB73A12_METHOD_1_2C927E534C9662EA_OFFSET UNITYSDK_OFFSET(0x108D8310)
#define CLASS_1_71A8A906AAB73A12_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x108D8150)
#define CLASS_1_71A8A906AAB73A12_METHOD_1_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0x108D8070)
#define CLASS_1_71A8A906AAB73A12_METHOD_1_806D34A23927302C_OFFSET UNITYSDK_OFFSET(0x108D7EB0)
#define CLASS_1_71A8A906AAB73A12_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x108D8260)
#define CLASS_1_71A8A906AAB73A12_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x108D81A0)
#define CLASS_1_71A8A906AAB73A12__CTOR_OFFSET UNITYSDK_OFFSET(0x108D7E70)

inline static constexpr unsigned int Class_1_71A8A906AAB73A12_TypeDefinitionIndex = 46046;

class Class_1_71A8A906AAB73A12 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_71A8A906AAB73A12*>* Field_1_6; // 0x10
	::UnityEngine::Object* Field_1_4; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::String* Field_1_1; // 0x28
	::System::String* Field_1_3; // 0x30
	::UnityEngine::Object* Field_1_7; // 0x38
	::RPG::Client::IAssetOperation* Field_1_5; // 0x40
	::RPG::Client::IAssetOperation* Field_1_8; // 0x48
	::RPG::Client::OnAssetOperationDelegate* Field_1_9; // 0x50
	::System::Int32 Field_1_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71A8A906AAB73A12__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71A8A906AAB73A12_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_806D34A23927302C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_71A8A906AAB73A12_METHOD_1_806D34A23927302C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71A8A906AAB73A12_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_1_7A150941533E8F96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71A8A906AAB73A12_METHOD_1_7A150941533E8F96_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71A8A906AAB73A12_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71A8A906AAB73A12_METHOD_1_A239DF324AF4215D_1_OFFSET))(this);
	}

	::System::Boolean Method_1_2C927E534C9662EA(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_71A8A906AAB73A12_METHOD_1_2C927E534C9662EA_OFFSET))(this, a1);
	}
};
