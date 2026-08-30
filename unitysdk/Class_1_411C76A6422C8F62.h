#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_180;
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringCollider; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class Transform; }

#define CLASS_1_411C76A6422C8F62_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198DABE0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x198DA7A0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x198D9DB0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x198DA800)
#define CLASS_1_411C76A6422C8F62_METHOD_1_4B5F926BE68F2FC6_OFFSET UNITYSDK_OFFSET(0x198D9DC0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_4E33F9FBA4DC33F2_OFFSET UNITYSDK_OFFSET(0x198DA1E0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_1_OFFSET UNITYSDK_OFFSET(0x198D9DE0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_2_OFFSET UNITYSDK_OFFSET(0x198D9E00)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_3_OFFSET UNITYSDK_OFFSET(0x198D9E10)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_OFFSET UNITYSDK_OFFSET(0x198D9DD0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_6B2FF0308F7D3BFA_OFFSET UNITYSDK_OFFSET(0x198D9E20)
#define CLASS_1_411C76A6422C8F62_METHOD_1_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0x198DAB60)
#define CLASS_1_411C76A6422C8F62_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x198DAA80)
#define CLASS_1_411C76A6422C8F62_METHOD_1_90B52FBF1D025FEC_OFFSET UNITYSDK_OFFSET(0x198D9DF0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_971DAF87368385CC_OFFSET UNITYSDK_OFFSET(0x198DAAF0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_C1E0405EEC95DC65_OFFSET UNITYSDK_OFFSET(0x198DA320)
#define CLASS_1_411C76A6422C8F62_METHOD_1_D6004C962CEB957B_OFFSET UNITYSDK_OFFSET(0x198DA000)
#define CLASS_1_411C76A6422C8F62_METHOD_1_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x198DA2C0)
#define CLASS_1_411C76A6422C8F62__CTOR_OFFSET UNITYSDK_OFFSET(0x198D9F10)

inline static constexpr unsigned int Class_1_411C76A6422C8F62_TypeDefinitionIndex = 68431;

class Class_1_411C76A6422C8F62 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* OKCAKGNICCG; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* JLMMLHEOMJB; // 0x18
	::Class_1_43BD383C98B4C0C5_180* APPIHABBCGK; // 0x20
	::RootMotion::IKJob::IKThreadProxyContext* EEFMDEHLLFI; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* CMLADIHAHAK; // 0x30
	::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* LNKMBJLODPG; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* IFBNCKCIAAG; // 0x40
	::System::UInt32 PHFMCACHFIJ; // 0x48
	::System::Boolean FAJMPJCBHIO; // 0x4C
	::System::Single MMNELBFMJOF; // 0x50

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62__CTOR_OFFSET))(this, a1);
	}

	::Class_1_43BD383C98B4C0C5_180* Method_1_24748FC20F375725()
	{
		return ((::Class_1_43BD383C98B4C0C5_180*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_24748FC20F375725_OFFSET))(this);
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

	::System::Void Method_1_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Method_1_C1E0405EEC95DC65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_C1E0405EEC95DC65_OFFSET))(this);
	}

	::System::Void Method_1_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_1092C5537716905B_OFFSET))(this);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_1_971DAF87368385CC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_971DAF87368385CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_70484F0C4668EBF2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_70484F0C4668EBF2_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_DISPOSE_OFFSET))(this);
	}
};
