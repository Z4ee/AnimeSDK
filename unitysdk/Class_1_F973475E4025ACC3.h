#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_F973475E4025ACC3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB10790)
#define CLASS_1_F973475E4025ACC3_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xBB107E0)
#define CLASS_1_F973475E4025ACC3_METHOD_1_851D9C99F5325FF9_OFFSET UNITYSDK_OFFSET(0xBB104B0)
#define CLASS_1_F973475E4025ACC3_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0xBB10300)
#define CLASS_1_F973475E4025ACC3_METHOD_1_EDCA216BAAE60E47_OFFSET UNITYSDK_OFFSET(0xBB106A0)
#define CLASS_1_F973475E4025ACC3__CTOR_OFFSET UNITYSDK_OFFSET(0xBB107F0)

inline static constexpr unsigned int Class_1_F973475E4025ACC3_TypeDefinitionIndex = 56903;

class Class_1_F973475E4025ACC3 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* PNOHBBMHGLB; // 0x10
	::UnityEngine::Vector3 BGNACBGBMHG; // 0x18
	::System::Single HBDJCFFDGDD; // 0x24
	::System::Single MDBDBFKFJEG; // 0x28

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
