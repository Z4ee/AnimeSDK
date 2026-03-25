#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_147;
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringCollider; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class Transform; }

#define CLASS_1_411C76A6422C8F62_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113759E0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_0EAFE72DD9AA7D3A_OFFSET UNITYSDK_OFFSET(0x113758F0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x11374C20)
#define CLASS_1_411C76A6422C8F62_METHOD_1_4B5F926BE68F2FC6_OFFSET UNITYSDK_OFFSET(0x11374C30)
#define CLASS_1_411C76A6422C8F62_METHOD_1_4E33F9FBA4DC33F2_OFFSET UNITYSDK_OFFSET(0x11375060)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_1_OFFSET UNITYSDK_OFFSET(0x11374C50)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_2_OFFSET UNITYSDK_OFFSET(0x11374C70)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_3_OFFSET UNITYSDK_OFFSET(0x11374C80)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_OFFSET UNITYSDK_OFFSET(0x11374C40)
#define CLASS_1_411C76A6422C8F62_METHOD_1_6B2FF0308F7D3BFA_OFFSET UNITYSDK_OFFSET(0x11374C90)
#define CLASS_1_411C76A6422C8F62_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x11375880)
#define CLASS_1_411C76A6422C8F62_METHOD_1_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0x11375140)
#define CLASS_1_411C76A6422C8F62_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x11375660)
#define CLASS_1_411C76A6422C8F62_METHOD_1_90B52FBF1D025FEC_OFFSET UNITYSDK_OFFSET(0x11374C60)
#define CLASS_1_411C76A6422C8F62_METHOD_1_C1E0405EEC95DC65_OFFSET UNITYSDK_OFFSET(0x113751A0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_D001E91AEC8A16BE_OFFSET UNITYSDK_OFFSET(0x11375600)
#define CLASS_1_411C76A6422C8F62_METHOD_1_D6004C962CEB957B_OFFSET UNITYSDK_OFFSET(0x11374E80)
#define CLASS_1_411C76A6422C8F62_METHOD_1_EB12C4C03B306C03_OFFSET UNITYSDK_OFFSET(0x11375960)
#define CLASS_1_411C76A6422C8F62__CTOR_OFFSET UNITYSDK_OFFSET(0x11374D90)

inline static constexpr unsigned int Class_1_411C76A6422C8F62_TypeDefinitionIndex = 55895;

class Class_1_411C76A6422C8F62 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_8; // 0x10
	::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_6; // 0x20
	::RootMotion::IKJob::IKThreadProxyContext* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_5; // 0x30
	::Class_1_43BD383C98B4C0C5_147* Field_1_3; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_9; // 0x40
	::System::UInt32 Field_1_0; // 0x48
	::System::Single Field_1_2; // 0x4C
	::System::Boolean Field_1_1; // 0x50

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62__CTOR_OFFSET))(this, a1);
	}

	::Class_1_43BD383C98B4C0C5_147* Method_1_24748FC20F375725()
	{
		return ((::Class_1_43BD383C98B4C0C5_147*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::RootMotion::IKJob::IKThreadProxyContext* Method_1_4B5F926BE68F2FC6()
	{
		return ((::RootMotion::IKJob::IKThreadProxyContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_4B5F926BE68F2FC6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_1_5B17C4B976530A33()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_1_5B17C4B976530A33_1()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* Method_1_90B52FBF1D025FEC()
	{
		return ((::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_90B52FBF1D025FEC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_1_5B17C4B976530A33_2()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_1_5B17C4B976530A33_3()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_3_OFFSET))(this);
	}

	::RootMotion::IKJob::IKTransformRef Method_1_6B2FF0308F7D3BFA(::UnityEngine::Transform* a1)
	{
		return ((::RootMotion::IKJob::IKTransformRef(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_6B2FF0308F7D3BFA_OFFSET))(this, a1);
	}

	::System::Void Method_1_D6004C962CEB957B(::UnityChan::SpringManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_D6004C962CEB957B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E33F9FBA4DC33F2(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_4E33F9FBA4DC33F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_8894E534FED3129C_OFFSET))(this);
	}

	::System::Void Method_1_C1E0405EEC95DC65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_C1E0405EEC95DC65_OFFSET))(this);
	}

	::System::Void Method_1_D001E91AEC8A16BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_D001E91AEC8A16BE_OFFSET))(this);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_0EAFE72DD9AA7D3A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_0EAFE72DD9AA7D3A_OFFSET))(this, a1);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_EB12C4C03B306C03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_EB12C4C03B306C03_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_DISPOSE_OFFSET))(this);
	}
};
