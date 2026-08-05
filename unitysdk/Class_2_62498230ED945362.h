#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_62498230ED945362_Class_1_BE6256DFB158D139;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }

#define CLASS_2_62498230ED945362_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B346F20)
#define CLASS_2_62498230ED945362_METHOD_2_2ADD3023D9AB0116_OFFSET UNITYSDK_OFFSET(0x1B347060)
#define CLASS_2_62498230ED945362_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1B3474A0)
#define CLASS_2_62498230ED945362_METHOD_2_6C38876328B3711C_OFFSET UNITYSDK_OFFSET(0x1B3472C0)
#define CLASS_2_62498230ED945362_METHOD_2_B600972ED5B4AF29_OFFSET UNITYSDK_OFFSET(0x1B347210)
#define CLASS_2_62498230ED945362_METHOD_2_CE7DD1A4F75322E2_OFFSET UNITYSDK_OFFSET(0x1B346D90)
#define CLASS_2_62498230ED945362_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1B346F70)
#define CLASS_2_62498230ED945362_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1B346C50)
#define CLASS_2_62498230ED945362_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B346D30)
#define CLASS_2_62498230ED945362__CTOR_OFFSET UNITYSDK_OFFSET(0x1B347040)

inline static constexpr unsigned int Class_2_62498230ED945362_TypeDefinitionIndex = 82757;

class Class_2_62498230ED945362 : public ::Foundation::SingletonDisposable_1<::Class_2_62498230ED945362*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_62498230ED945362_Class_1_BE6256DFB158D139*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_62498230ED945362_Class_1_BE6256DFB158D139*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_62498230ED945362_TypeDefinitionIndex)->GetStaticField(0x4B9C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2ADD3023D9AB0116(::System::String* a1, ::UnityEngine::AnimationClip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_METHOD_2_2ADD3023D9AB0116_OFFSET))(this, a1, a2);
	}

	::System::Double Method_2_B600972ED5B4AF29(::System::Double a1, ::System::Double a2, ::System::Double a3)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_METHOD_2_B600972ED5B4AF29_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CE7DD1A4F75322E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_METHOD_2_CE7DD1A4F75322E2_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_2_6C38876328B3711C(::System::String* a1)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_METHOD_2_6C38876328B3711C_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
