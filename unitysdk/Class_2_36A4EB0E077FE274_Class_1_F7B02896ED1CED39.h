#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityLodDetail; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x106A9EF0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x106A8300)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_5890180A07FDA990_OFFSET UNITYSDK_OFFSET(0x106A9F30)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x106AA160)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_CD1053D94D24E10B_OFFSET UNITYSDK_OFFSET(0x106AB8E0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_DDF09B4CDAC0FF26_OFFSET UNITYSDK_OFFSET(0x106A9CF0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39__CTOR_OFFSET UNITYSDK_OFFSET(0x106A9750)

inline static constexpr unsigned int Class_2_36A4EB0E077FE274_Class_1_F7B02896ED1CED39_TypeDefinitionIndex = 46014;

class Class_2_36A4EB0E077FE274_Class_1_F7B02896ED1CED39 : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::Material*>* Field_1_0; // 0x10
	::UnityEngine::Mesh* Field_1_6; // 0x18
	::UnityEngine::SkinnedMeshRenderer* Field_1_2; // 0x20
	::System::Action_1<::UnityEngine::Mesh*>* Field_1_9; // 0x28
	::System::Action_1<::UnityEngine::Mesh*>* Field_1_10; // 0x30
	::System::String* Field_1_3; // 0x38
	::Il2CppArray<::System::String*>* Field_1_7; // 0x40
	::System::Int32 Field_1_5; // 0x48
	::System::Int32 Field_1_4; // 0x4C
	::System::Boolean Field_1_1; // 0x50
	::System::Boolean Field_1_8; // 0x51

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

	::System::Void Method_1_DDF09B4CDAC0FF26(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_DDF09B4CDAC0FF26_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_5890180A07FDA990(::RPG::GameCore::EntityLodDetail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_5890180A07FDA990_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD1053D94D24E10B(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_F7B02896ED1CED39_METHOD_1_CD1053D94D24E10B_OFFSET))(this, a1);
	}
};
