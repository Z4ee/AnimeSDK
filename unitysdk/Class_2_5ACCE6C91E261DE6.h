#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1E4F9B0ED3BF21DE;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_5ACCE6C91E261DE6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DBDA730)
#define CLASS_2_5ACCE6C91E261DE6_METHOD_2_8660C3A27B56FE60_OFFSET UNITYSDK_OFFSET(0x1DBDA820)
#define CLASS_2_5ACCE6C91E261DE6_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DBDA610)
#define CLASS_2_5ACCE6C91E261DE6__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBDABD0)

inline static constexpr unsigned int Class_2_5ACCE6C91E261DE6_TypeDefinitionIndex = 41891;

class Class_2_5ACCE6C91E261DE6 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* NCIHCMEFKMP; // 0x338
	::RPG::PoolHashSet_1<::UnityEngine::Collider*>* NILFBBGIHGI; // 0x340
	::UnityEngine::Vector3 KEJAHHOADEC; // 0x348
	::System::Single GPGIEFKLNKA; // 0x354
	::System::Boolean OCPOPEDLBBI; // 0x358
	::System::Boolean FKDDHNAOOHJ; // 0x359
	::System::Single MFALMACPJPJ; // 0x35C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ACCE6C91E261DE6__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ACCE6C91E261DE6_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ACCE6C91E261DE6_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_8660C3A27B56FE60(::Class_3_1E4F9B0ED3BF21DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_5ACCE6C91E261DE6_METHOD_2_8660C3A27B56FE60_OFFSET))(this, a1);
	}
};
