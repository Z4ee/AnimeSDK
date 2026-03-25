#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED17B6CCBE9C897A_EEffectorSpace.h"
#include "unitysdk/Struct_2_67CCE52B3528D8A9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_ED17B6CCBE9C897A_Class_1_9EABF2B790586FE2;
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x8817C80)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_1ED53B09AFE91718_OFFSET UNITYSDK_OFFSET(0x8817F60)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8817C10)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_363BD7C9D66CD9F8_OFFSET UNITYSDK_OFFSET(0x8817D50)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x8817C00)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_6287030D53179AEE_OFFSET UNITYSDK_OFFSET(0x8818A40)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_6BC6F493AD85E62D_OFFSET UNITYSDK_OFFSET(0x8819750)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_6BF81B6CD305D3E3_OFFSET UNITYSDK_OFFSET(0x8817CC0)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_F22773CFEB4B61E4_OFFSET UNITYSDK_OFFSET(0x8817EE0)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_F24D19EB8975D3E8_OFFSET UNITYSDK_OFFSET(0x8818BF0)
#define CLASS_1_ED17B6CCBE9C897A__CTOR_OFFSET UNITYSDK_OFFSET(0x8819B00)

inline static constexpr unsigned int Class_1_ED17B6CCBE9C897A_TypeDefinitionIndex = 55878;

class Class_1_ED17B6CCBE9C897A : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_7; // 0x10
	::UnityEngine::Transform* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_ED17B6CCBE9C897A_Class_1_9EABF2B790586FE2*>* Field_1_5; // 0x20
	::UnityEngine::Transform* Field_1_0; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* Field_1_3; // 0x30
	::Class_1_ED17B6CCBE9C897A_EEffectorSpace Field_1_6; // 0x38
	::UnityEngine::Vector3 Field_1_8; // 0x3C
	::System::Single Field_1_2; // 0x48
	::System::Single Field_1_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_6BF81B6CD305D3E3()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_6BF81B6CD305D3E3_OFFSET))(this);
	}

	::System::Void Method_1_363BD7C9D66CD9F8(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_363BD7C9D66CD9F8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F22773CFEB4B61E4(::Class_1_ED17B6CCBE9C897A_EEffectorSpace a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED17B6CCBE9C897A_EEffectorSpace, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_F22773CFEB4B61E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1ED53B09AFE91718(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_1ED53B09AFE91718_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6287030D53179AEE(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_6287030D53179AEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BC6F493AD85E62D(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_67CCE52B3528D8A9& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_67CCE52B3528D8A9&))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_6BC6F493AD85E62D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F24D19EB8975D3E8(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_F24D19EB8975D3E8_OFFSET))(this, a1, a2);
	}
};
