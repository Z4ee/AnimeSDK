#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnSceneOperationDelegate; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_D0948460F4810867_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xA9DFDB0)
#define CLASS_1_D0948460F4810867_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA9DF5C0)
#define CLASS_1_D0948460F4810867_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xA9DFB40)
#define CLASS_1_D0948460F4810867_METHOD_1_76A19FAFE4D1F476_OFFSET UNITYSDK_OFFSET(0xA9DFA00)
#define CLASS_1_D0948460F4810867_METHOD_1_89B3F12CC89DAE93_OFFSET UNITYSDK_OFFSET(0xA9DF270)
#define CLASS_1_D0948460F4810867_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA9DFBD0)
#define CLASS_1_D0948460F4810867_METHOD_1_C0424C3F296FC41E_OFFSET UNITYSDK_OFFSET(0xA9DF4E0)
#define CLASS_1_D0948460F4810867_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA9DF200)
#define CLASS_1_D0948460F4810867_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0xA9DFC60)
#define CLASS_1_D0948460F4810867_METHOD_1_FEC75BA9F41E0774_OFFSET UNITYSDK_OFFSET(0xA9DF690)
#define CLASS_1_D0948460F4810867__CTOR_OFFSET UNITYSDK_OFFSET(0xA9DF1C0)

inline static constexpr unsigned int Class_1_D0948460F4810867_TypeDefinitionIndex = 55559;

class Class_1_D0948460F4810867 : public ::System::Object
{
public:
	::RPG::Client::OnSceneOperationDelegate* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::UnityEngine::AsyncOperation* Field_1_2; // 0x20
	::UnityEngine::Coroutine* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::RPG::Client::OnSceneOperationDelegate* Field_1_5; // 0x38
	::RPG::Client::AssetState Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x44
	::System::Boolean Field_1_8; // 0x45
	::System::Single Field_1_9; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_89B3F12CC89DAE93(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867_METHOD_1_89B3F12CC89DAE93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FEC75BA9F41E0774(::System::String* a1, ::RPG::Client::OnSceneOperationDelegate* a2, ::RPG::Client::OnSceneOperationDelegate* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OnSceneOperationDelegate*, ::RPG::Client::OnSceneOperationDelegate*, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867_METHOD_1_FEC75BA9F41E0774_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_C0424C3F296FC41E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867_METHOD_1_C0424C3F296FC41E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_76A19FAFE4D1F476(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867_METHOD_1_76A19FAFE4D1F476_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
