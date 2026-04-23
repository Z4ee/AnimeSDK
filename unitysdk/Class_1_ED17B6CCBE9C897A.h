#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED17B6CCBE9C897A_EEffectorSpace.h"
#include "unitysdk/Struct_2_4410677EEF4776E6.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_ED17B6CCBE9C897A_Class_1_9EABF2B790586FE2;
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x12938520)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x129384B0)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_363BD7C9D66CD9F8_OFFSET UNITYSDK_OFFSET(0x129385D0)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_489C4B840AC0B841_OFFSET UNITYSDK_OFFSET(0x129387E0)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x129384A0)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_6287030D53179AEE_OFFSET UNITYSDK_OFFSET(0x129392A0)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0x12938560)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_A035C618C38DCF11_OFFSET UNITYSDK_OFFSET(0x12939450)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_DB6CA4A20DE1FB9D_OFFSET UNITYSDK_OFFSET(0x12939F80)
#define CLASS_1_ED17B6CCBE9C897A_METHOD_1_F22773CFEB4B61E4_OFFSET UNITYSDK_OFFSET(0x12938760)
#define CLASS_1_ED17B6CCBE9C897A__CTOR_OFFSET UNITYSDK_OFFSET(0x1293A330)

inline static constexpr unsigned int Class_1_ED17B6CCBE9C897A_TypeDefinitionIndex = 63112;

class Class_1_ED17B6CCBE9C897A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_ED17B6CCBE9C897A_Class_1_9EABF2B790586FE2*>* Field_1_5; // 0x18
	::UnityEngine::Transform* Field_1_4; // 0x20
	::UnityEngine::Transform* Field_1_0; // 0x28
	::UnityEngine::Transform* Field_1_7; // 0x30
	::System::Single Field_1_2; // 0x38
	::UnityEngine::Vector3 Field_1_8; // 0x3C
	::System::Single Field_1_1; // 0x48
	::Class_1_ED17B6CCBE9C897A_EEffectorSpace Field_1_6; // 0x4C

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

	::UnityEngine::Transform* Method_1_6D5F59BCE8B4A09A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_6D5F59BCE8B4A09A_OFFSET))(this);
	}

	::System::Void Method_1_363BD7C9D66CD9F8(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_363BD7C9D66CD9F8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F22773CFEB4B61E4(::Class_1_ED17B6CCBE9C897A_EEffectorSpace a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED17B6CCBE9C897A_EEffectorSpace, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_F22773CFEB4B61E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_489C4B840AC0B841(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_489C4B840AC0B841_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6287030D53179AEE(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_6287030D53179AEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB6CA4A20DE1FB9D(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_4410677EEF4776E6& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_4410677EEF4776E6&))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_DB6CA4A20DE1FB9D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A035C618C38DCF11(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_METHOD_1_A035C618C38DCF11_OFFSET))(this, a1, a2);
	}
};
