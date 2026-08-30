#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CRPVCBackground; }
namespace RPG::Client { class SmallWindowVCControl; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CLASS_2_2E9294067799BBD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x189FD710)
#define CLASS_2_2E9294067799BBD7_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x189FC620)
#define CLASS_2_2E9294067799BBD7_METHOD_2_155EBEDB7DB8B929_OFFSET UNITYSDK_OFFSET(0x189FDB00)
#define CLASS_2_2E9294067799BBD7_METHOD_2_19B14977ABA39612_OFFSET UNITYSDK_OFFSET(0x189FC670)
#define CLASS_2_2E9294067799BBD7_METHOD_2_2AEC92CC1DC59B8B_OFFSET UNITYSDK_OFFSET(0x189FC5B0)
#define CLASS_2_2E9294067799BBD7_METHOD_2_3FA1D91279A7F0C8_OFFSET UNITYSDK_OFFSET(0x189FDC00)
#define CLASS_2_2E9294067799BBD7_METHOD_2_6FCD5ED083C67CF0_OFFSET UNITYSDK_OFFSET(0x189FDA60)
#define CLASS_2_2E9294067799BBD7_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x189FD1E0)
#define CLASS_2_2E9294067799BBD7_METHOD_2_BA00D508D791624D_OFFSET UNITYSDK_OFFSET(0x189FD9C0)
#define CLASS_2_2E9294067799BBD7_METHOD_2_DB4D7D07EC5D0482_OFFSET UNITYSDK_OFFSET(0x189FD960)
#define CLASS_2_2E9294067799BBD7__CTOR_OFFSET UNITYSDK_OFFSET(0x189FDD00)

inline static constexpr unsigned int Class_2_2E9294067799BBD7_TypeDefinitionIndex = 69676;

class Class_2_2E9294067799BBD7 : public ::RPG::Client::BehaviorBase
{
public:
	::System::String* EEGNPMNAFFH; // 0x18
	::Il2CppArray<::UnityEngine::Vector2>* CMGDDDMAHJN; // 0x20
	::UnityEngine::Texture2D* FIHHFOKOMPJ; // 0x28
	::System::Nullable_1<::UnityEngine::Vector2> CMKEKJKNIKE; // 0x30
	::System::Nullable_1<::System::Single> BFHMKJJCKKG; // 0x3C
	::System::Nullable_1<::UnityEngine::Vector2> CFJAJIHFMIH; // 0x44
	::System::Nullable_1<::UnityEngine::Color> NFAOFJMMFIA; // 0x50
	::System::Single MIJAKIMPCGJ; // 0x64
	::System::Single CMBLMGDPAFN; // 0x68
	::System::Single AOLGEMLDKAE; // 0x6C
	::System::Nullable_1<::System::Boolean> JGMGCPNCLPC; // 0x70
	::System::Boolean FJMFKJEIOIO; // 0x72
	::System::Single CNACJMMOFNL; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E9294067799BBD7__CTOR_OFFSET))(this);
	}

	::RPG::Client::SmallWindowVCControl* Method_2_2AEC92CC1DC59B8B()
	{
		return ((::RPG::Client::SmallWindowVCControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E9294067799BBD7_METHOD_2_2AEC92CC1DC59B8B_OFFSET))(this);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E9294067799BBD7_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E9294067799BBD7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_19B14977ABA39612()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E9294067799BBD7_METHOD_2_19B14977ABA39612_OFFSET))(this);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E9294067799BBD7_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_BA00D508D791624D(::RPG::Client::CRPVCBackground* a1, ::UnityEngine::Rendering::CRPVirtualCamera* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CRPVCBackground*, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2E9294067799BBD7_METHOD_2_BA00D508D791624D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6FCD5ED083C67CF0(::UnityEngine::Material* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_2E9294067799BBD7_METHOD_2_6FCD5ED083C67CF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_155EBEDB7DB8B929(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Texture2D*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture2D*&))((::PBYTE)hIl2Cpp + CLASS_2_2E9294067799BBD7_METHOD_2_155EBEDB7DB8B929_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3FA1D91279A7F0C8(::UnityEngine::Material* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E9294067799BBD7_METHOD_2_3FA1D91279A7F0C8_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Material* Method_2_DB4D7D07EC5D0482(::UnityEngine::MeshRenderer* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_2E9294067799BBD7_METHOD_2_DB4D7D07EC5D0482_OFFSET))(this, a1);
	}
};
