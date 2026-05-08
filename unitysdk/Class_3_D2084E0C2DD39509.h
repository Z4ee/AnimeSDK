#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_D2084E0C2DD39509_Enum_3_900AA3496E658287.h"
#include "unitysdk/UnityEngine/AI/ObstacleAvoidanceType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::AI { class NavMeshAgent; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_3_D2084E0C2DD39509_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1326E050)
#define CLASS_3_D2084E0C2DD39509_METHOD_3_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x1326E200)
#define CLASS_3_D2084E0C2DD39509_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1326E390)
#define CLASS_3_D2084E0C2DD39509_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1326E1B0)
#define CLASS_3_D2084E0C2DD39509_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1326E300)
#define CLASS_3_D2084E0C2DD39509_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1326DEA0)
#define CLASS_3_D2084E0C2DD39509__CCTOR_OFFSET UNITYSDK_OFFSET(0x1326E0A0)
#define CLASS_3_D2084E0C2DD39509__CTOR_OFFSET UNITYSDK_OFFSET(0x1326E120)

inline static constexpr unsigned int Class_3_D2084E0C2DD39509_TypeDefinitionIndex = 81136;

class Class_3_D2084E0C2DD39509 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_13 = 0x20; // 0x0
	::Il2CppArray<::UnityEngine::Vector3>* Field_3_3; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_3_5; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_3_4; // 0x58
	::UnityEngine::AI::NavMeshAgent* Field_3_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_6; // 0x68
	::UnityEngine::AI::NavMeshPath* Field_3_2; // 0x70
	::UnityEngine::AI::ObstacleAvoidanceType Field_3_10; // 0x78
	::System::Int32 Field_3_8; // 0x7C
	::System::Single Field_3_1; // 0x80
	::Class_3_D2084E0C2DD39509_Enum_3_900AA3496E658287 Field_3_9; // 0x84
	::System::Boolean Field_3_7; // 0x88
	::System::Boolean Field_3_12; // 0x89
	::System::Boolean Field_3_11; // 0x8A

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D2084E0C2DD39509__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2084E0C2DD39509__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2084E0C2DD39509_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2084E0C2DD39509_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2084E0C2DD39509_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	static ::Class_3_D2084E0C2DD39509* Method_3_323F95926A2F616E()
	{
		return ((::Class_3_D2084E0C2DD39509*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D2084E0C2DD39509_METHOD_3_323F95926A2F616E_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2084E0C2DD39509_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2084E0C2DD39509_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
	}
};
