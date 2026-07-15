#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityLodDetail; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_2379D5F848524120_OFFSET UNITYSDK_OFFSET(0x18B0E910)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18B0C220)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x18B0E730)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_5890180A07FDA990_OFFSET UNITYSDK_OFFSET(0x18B0C460)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18B0C690)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_FFBA317F4D1B70EB_OFFSET UNITYSDK_OFFSET(0x18B0BBA0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39__CTOR_OFFSET UNITYSDK_OFFSET(0x18B0B320)

inline static constexpr unsigned int Class_2_36A4EB0E077FE274_Class_1_F7B02896ED1CED39_TypeDefinitionIndex = 54591;

class Class_2_36A4EB0E077FE274_Class_1_F7B02896ED1CED39 : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::Mesh*>* Field_1_0; // 0x10
	::UnityEngine::SkinnedMeshRenderer* Field_1_1; // 0x18
	::System::Action_1<::UnityEngine::Mesh*>* Field_1_2; // 0x20
	::UnityEngine::Mesh* Field_1_3; // 0x28
	::System::Action_1<::UnityEngine::Material*>* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::Il2CppArray<::System::String*>* Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x49
	::System::Int32 Field_1_9; // 0x4C
	::System::Int32 Field_1_10; // 0x50

	::System::Void _ctor(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::UnityEngine::Mesh*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*, ::System::String*, ::System::Action_1<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3E23A2EE3F65066B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_3E23A2EE3F65066B_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_FFBA317F4D1B70EB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_FFBA317F4D1B70EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_5890180A07FDA990(::RPG::GameCore::EntityLodDetail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_5890180A07FDA990_OFFSET))(this, a1);
	}

	::System::Void Method_1_2379D5F848524120(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_2379D5F848524120_OFFSET))(this, a1);
	}
};
