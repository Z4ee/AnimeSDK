#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_166;
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringCollider; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class Transform; }

#define CLASS_1_411C76A6422C8F62_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F845B0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x17F84160)
#define CLASS_1_411C76A6422C8F62_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17F83760)
#define CLASS_1_411C76A6422C8F62_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x17F841C0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_4B5F926BE68F2FC6_OFFSET UNITYSDK_OFFSET(0x17F83770)
#define CLASS_1_411C76A6422C8F62_METHOD_1_4E33F9FBA4DC33F2_OFFSET UNITYSDK_OFFSET(0x17F83BA0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_1_OFFSET UNITYSDK_OFFSET(0x17F83790)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_2_OFFSET UNITYSDK_OFFSET(0x17F837B0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_3_OFFSET UNITYSDK_OFFSET(0x17F837C0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_5B17C4B976530A33_OFFSET UNITYSDK_OFFSET(0x17F83780)
#define CLASS_1_411C76A6422C8F62_METHOD_1_6B2FF0308F7D3BFA_OFFSET UNITYSDK_OFFSET(0x17F837D0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0x17F84530)
#define CLASS_1_411C76A6422C8F62_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x17F84450)
#define CLASS_1_411C76A6422C8F62_METHOD_1_90B52FBF1D025FEC_OFFSET UNITYSDK_OFFSET(0x17F837A0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_971DAF87368385CC_OFFSET UNITYSDK_OFFSET(0x17F844C0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_C1E0405EEC95DC65_OFFSET UNITYSDK_OFFSET(0x17F83CE0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_D6004C962CEB957B_OFFSET UNITYSDK_OFFSET(0x17F839B0)
#define CLASS_1_411C76A6422C8F62_METHOD_1_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x17F83C80)
#define CLASS_1_411C76A6422C8F62__CTOR_OFFSET UNITYSDK_OFFSET(0x17F838C0)

inline static constexpr unsigned int Class_1_411C76A6422C8F62_TypeDefinitionIndex = 65417;

class Class_1_411C76A6422C8F62 : public ::System::Object
{
public:
	::RootMotion::IKJob::IKThreadProxyContext* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_5; // 0x38
	::Class_1_43BD383C98B4C0C5_166* Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x4C
	::System::Single Field_1_9; // 0x50

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62__CTOR_OFFSET))(this, a1);
	}

	::Class_1_43BD383C98B4C0C5_166* Method_1_24748FC20F375725()
	{
		return ((::Class_1_43BD383C98B4C0C5_166*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_411C76A6422C8F62_METHOD_1_24748FC20F375725_OFFSET))(this);
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
