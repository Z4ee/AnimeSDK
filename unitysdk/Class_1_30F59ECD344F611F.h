#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_30F59ECD344F611F_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x153E7400)
#define CLASS_1_30F59ECD344F611F_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x153E75E0)
#define CLASS_1_30F59ECD344F611F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x153E7460)
#define CLASS_1_30F59ECD344F611F_METHOD_1_6B3852C78317A589_OFFSET UNITYSDK_OFFSET(0x153E7510)
#define CLASS_1_30F59ECD344F611F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x153E74B0)
#define CLASS_1_30F59ECD344F611F__CCTOR_OFFSET UNITYSDK_OFFSET(0x153E73D0)
#define CLASS_1_30F59ECD344F611F__CTOR_OFFSET UNITYSDK_OFFSET(0x153E73C0)

inline static constexpr unsigned int Class_1_30F59ECD344F611F_TypeDefinitionIndex = 83732;

class Class_1_30F59ECD344F611F : public ::System::Object
{
public:
	static ::UnityEngine::AnimationCurve** StaticGet_Field_1_0()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30F59ECD344F611F_TypeDefinitionIndex)->GetStaticField(0x4BAA0);
	}
	::UnityEngine::AnimationCurve* Field_1_3; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::Single Field_1_1; // 0x1C
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F59ECD344F611F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30F59ECD344F611F__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F59ECD344F611F_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F59ECD344F611F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F59ECD344F611F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6B3852C78317A589(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_30F59ECD344F611F_METHOD_1_6B3852C78317A589_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F59ECD344F611F_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}
};
