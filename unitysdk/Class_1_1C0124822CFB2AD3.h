#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_035E64350CD0085F;
class Class_1_A043D803AC652E6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1C0124822CFB2AD3_METHOD_1_164C5366022F262D_OFFSET UNITYSDK_OFFSET(0x15080D80)
#define CLASS_1_1C0124822CFB2AD3_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15081650)
#define CLASS_1_1C0124822CFB2AD3_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x15081400)
#define CLASS_1_1C0124822CFB2AD3_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x15081700)
#define CLASS_1_1C0124822CFB2AD3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15080D20)
#define CLASS_1_1C0124822CFB2AD3_METHOD_1_A626182236CC1532_OFFSET UNITYSDK_OFFSET(0x15081260)
#define CLASS_1_1C0124822CFB2AD3_METHOD_1_B85F667AE369605C_OFFSET UNITYSDK_OFFSET(0x15081060)
#define CLASS_1_1C0124822CFB2AD3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x150816B0)
#define CLASS_1_1C0124822CFB2AD3_METHOD_1_D28AFFFEBFAEF41E_OFFSET UNITYSDK_OFFSET(0x15081770)
#define CLASS_1_1C0124822CFB2AD3__CTOR_OFFSET UNITYSDK_OFFSET(0x15080C40)

inline static constexpr unsigned int Class_1_1C0124822CFB2AD3_TypeDefinitionIndex = 70129;

class Class_1_1C0124822CFB2AD3 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::Class_1_035E64350CD0085F*>* Field_1_1; // 0x18
	::Class_1_035E64350CD0085F* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0124822CFB2AD3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0124822CFB2AD3_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_164C5366022F262D(::Class_1_A043D803AC652E6E* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A043D803AC652E6E*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C0124822CFB2AD3_METHOD_1_164C5366022F262D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B85F667AE369605C(::Class_1_A043D803AC652E6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A043D803AC652E6E*))((::PBYTE)hIl2Cpp + CLASS_1_1C0124822CFB2AD3_METHOD_1_B85F667AE369605C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A626182236CC1532(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_1C0124822CFB2AD3_METHOD_1_A626182236CC1532_OFFSET))(this, a1);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0124822CFB2AD3_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C0124822CFB2AD3_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0124822CFB2AD3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0124822CFB2AD3_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_D28AFFFEBFAEF41E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C0124822CFB2AD3_METHOD_1_D28AFFFEBFAEF41E_OFFSET))(this, a1);
	}
};
