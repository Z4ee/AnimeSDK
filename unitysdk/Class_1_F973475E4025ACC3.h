#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_F973475E4025ACC3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B5BC60)
#define CLASS_1_F973475E4025ACC3_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x14B5BCB0)
#define CLASS_1_F973475E4025ACC3_METHOD_1_851D9C99F5325FF9_OFFSET UNITYSDK_OFFSET(0x14B5B980)
#define CLASS_1_F973475E4025ACC3_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x14B5B7D0)
#define CLASS_1_F973475E4025ACC3_METHOD_1_EDCA216BAAE60E47_OFFSET UNITYSDK_OFFSET(0x14B5BB70)
#define CLASS_1_F973475E4025ACC3__CTOR_OFFSET UNITYSDK_OFFSET(0x14B5BCC0)

inline static constexpr unsigned int Class_1_F973475E4025ACC3_TypeDefinitionIndex = 54351;

class Class_1_F973475E4025ACC3 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x24
	::System::Single Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F973475E4025ACC3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F973475E4025ACC3_METHOD_1_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Void Method_1_851D9C99F5325FF9(::System::Single a1, ::System::Single a2, ::System::String* a3, ::RPG::MVector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_F973475E4025ACC3_METHOD_1_851D9C99F5325FF9_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_EDCA216BAAE60E47(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F973475E4025ACC3_METHOD_1_EDCA216BAAE60E47_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F973475E4025ACC3_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F973475E4025ACC3_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
