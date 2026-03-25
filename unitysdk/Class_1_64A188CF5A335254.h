#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2F9E039F03C74CC1;
class Class_1_A043D803AC652E6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_64A188CF5A335254_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x116E6530)
#define CLASS_1_64A188CF5A335254_METHOD_1_5D5D9498DCED3F66_OFFSET UNITYSDK_OFFSET(0x116E5E60)
#define CLASS_1_64A188CF5A335254_METHOD_1_69B9D38F5C09E7D2_OFFSET UNITYSDK_OFFSET(0x116E60E0)
#define CLASS_1_64A188CF5A335254_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x116E65E0)
#define CLASS_1_64A188CF5A335254_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x116E5BA0)
#define CLASS_1_64A188CF5A335254_METHOD_1_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x116E6290)
#define CLASS_1_64A188CF5A335254_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x116E6590)
#define CLASS_1_64A188CF5A335254_METHOD_1_D97CDF059CC668F7_OFFSET UNITYSDK_OFFSET(0x116E6650)
#define CLASS_1_64A188CF5A335254_METHOD_1_FA4705C6DAF5170C_OFFSET UNITYSDK_OFFSET(0x116E5C00)
#define CLASS_1_64A188CF5A335254__CTOR_OFFSET UNITYSDK_OFFSET(0x116E5AC0)

inline static constexpr unsigned int Class_1_64A188CF5A335254_TypeDefinitionIndex = 60255;

class Class_1_64A188CF5A335254 : public ::System::Object
{
public:
	::Class_1_2F9E039F03C74CC1* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::Class_1_2F9E039F03C74CC1*>* Field_1_0; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::System::Single Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64A188CF5A335254__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64A188CF5A335254_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_FA4705C6DAF5170C(::Class_1_A043D803AC652E6E* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A043D803AC652E6E*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_64A188CF5A335254_METHOD_1_FA4705C6DAF5170C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5D5D9498DCED3F66(::Class_1_A043D803AC652E6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A043D803AC652E6E*))((::PBYTE)hIl2Cpp + CLASS_1_64A188CF5A335254_METHOD_1_5D5D9498DCED3F66_OFFSET))(this, a1);
	}

	::System::Void Method_1_69B9D38F5C09E7D2(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_64A188CF5A335254_METHOD_1_69B9D38F5C09E7D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64A188CF5A335254_METHOD_1_B799DB9989A18F1D_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_64A188CF5A335254_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64A188CF5A335254_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64A188CF5A335254_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_D97CDF059CC668F7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_64A188CF5A335254_METHOD_1_D97CDF059CC668F7_OFFSET))(this, a1);
	}
};
