#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityLodDetail; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_2379D5F848524120_OFFSET UNITYSDK_OFFSET(0x11909270)
#define CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x119040F0)
#define CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_5890180A07FDA990_OFFSET UNITYSDK_OFFSET(0x11905110)
#define CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x119051A0)
#define CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x11903320)
#define CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_FFBA317F4D1B70EB_OFFSET UNITYSDK_OFFSET(0x119048E0)
#define CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A__CTOR_OFFSET UNITYSDK_OFFSET(0x11903EE0)

inline static constexpr unsigned int Class_2_54F841945D52EDAE_Class_1_651CA6A4B4E0070A_TypeDefinitionIndex = 53565;

class Class_2_54F841945D52EDAE_Class_1_651CA6A4B4E0070A : public ::System::Object
{
public:
	::UnityEngine::SkinnedMeshRenderer* Field_1_0; // 0x10
	::System::Action_1<::UnityEngine::Mesh*>* Field_1_1; // 0x18
	::System::Action_2<::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*>* Field_1_2; // 0x20
	::Il2CppArray<::System::String*>* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x34
	::System::Int32 Field_1_6; // 0x38

	::System::Void _ctor(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2, ::System::Action_2<::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*, ::System::Action_2<::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_FFBA317F4D1B70EB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_FFBA317F4D1B70EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_5890180A07FDA990(::RPG::GameCore::EntityLodDetail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_5890180A07FDA990_OFFSET))(this, a1);
	}

	::System::Void Method_1_2379D5F848524120(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_CLASS_1_651CA6A4B4E0070A_METHOD_1_2379D5F848524120_OFFSET))(this, a1);
	}
};
