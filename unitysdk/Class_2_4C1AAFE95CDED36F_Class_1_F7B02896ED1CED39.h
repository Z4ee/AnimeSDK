#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityLodDetail; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_2379D5F848524120_OFFSET UNITYSDK_OFFSET(0x160B7370)
#define CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x160B5B30)
#define CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x160B3350)
#define CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_5890180A07FDA990_OFFSET UNITYSDK_OFFSET(0x160B5BD0)
#define CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x160B5C60)
#define CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_FFBA317F4D1B70EB_OFFSET UNITYSDK_OFFSET(0x160B5700)
#define CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39__CTOR_OFFSET UNITYSDK_OFFSET(0x160B5100)

inline static constexpr unsigned int Class_2_4C1AAFE95CDED36F_Class_1_F7B02896ED1CED39_TypeDefinitionIndex = 57312;

class Class_2_4C1AAFE95CDED36F_Class_1_F7B02896ED1CED39 : public ::System::Object
{
public:
	::System::String* HMJEPBGJMMO; // 0x10
	::System::Action_1<::UnityEngine::Mesh*>* PCPCKNGGMKD; // 0x18
	::Il2CppArray<::System::String*>* PDPEPGJPNCA; // 0x20
	::UnityEngine::SkinnedMeshRenderer* JFHOEPIHNIO; // 0x28
	::System::Action_1<::UnityEngine::Material*>* ACDCPCEJALF; // 0x30
	::UnityEngine::Mesh* CPNJMKDCAJI; // 0x38
	::System::Action_1<::UnityEngine::Mesh*>* ENENBMJGLKM; // 0x40
	::System::Boolean NEPADOGCPCA; // 0x48
	::System::Boolean IMIBEPFNFLD; // 0x49
	::System::Int32 AJNEPIPLOFJ; // 0x4C
	::System::Int32 JGGELKCKKKM; // 0x50

	::System::Void _ctor(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::UnityEngine::Mesh*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*, ::System::String*, ::System::Action_1<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3E23A2EE3F65066B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_3E23A2EE3F65066B_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_FFBA317F4D1B70EB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_FFBA317F4D1B70EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_5890180A07FDA990(::RPG::GameCore::EntityLodDetail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_5890180A07FDA990_OFFSET))(this, a1);
	}

	::System::Void Method_1_2379D5F848524120(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_CLASS_1_F7B02896ED1CED39_METHOD_1_2379D5F848524120_OFFSET))(this, a1);
	}
};
