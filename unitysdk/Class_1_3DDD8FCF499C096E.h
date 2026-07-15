#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_697;
class Class_1_0BCDBB6467B5097D;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_3DDD8FCF499C096E_METHOD_1_250203490119AF47_OFFSET UNITYSDK_OFFSET(0x16D85C80)
#define CLASS_1_3DDD8FCF499C096E_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x16D86740)
#define CLASS_1_3DDD8FCF499C096E_METHOD_1_59F97C19B32BF844_1_OFFSET UNITYSDK_OFFSET(0x16D86250)
#define CLASS_1_3DDD8FCF499C096E_METHOD_1_59F97C19B32BF844_OFFSET UNITYSDK_OFFSET(0x16D85D60)
#define CLASS_1_3DDD8FCF499C096E_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x16D85D10)
#define CLASS_1_3DDD8FCF499C096E__CTOR_OFFSET UNITYSDK_OFFSET(0x16D85D00)

inline static constexpr unsigned int Class_1_3DDD8FCF499C096E_TypeDefinitionIndex = 59619;

class Class_1_3DDD8FCF499C096E : public ::System::Object
{
public:
	::Class_1_0BCDBB6467B5097D* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DDD8FCF499C096E__CTOR_OFFSET))(this);
	}

	static ::Class_1_3DDD8FCF499C096E* Method_1_250203490119AF47(::Class_1_0BCDBB6467B5097D* a1)
	{
		return ((::Class_1_3DDD8FCF499C096E*(*)(::Class_1_0BCDBB6467B5097D*))((::PBYTE)hIl2Cpp + CLASS_1_3DDD8FCF499C096E_METHOD_1_250203490119AF47_OFFSET))(a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_697* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_697*))((::PBYTE)hIl2Cpp + CLASS_1_3DDD8FCF499C096E_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_59F97C19B32BF844(::Class_0_16E4307DCC419505_697* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_697*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_3DDD8FCF499C096E_METHOD_1_59F97C19B32BF844_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_59F97C19B32BF844_1(::Class_0_16E4307DCC419505_697* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_697*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_3DDD8FCF499C096E_METHOD_1_59F97C19B32BF844_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DDD8FCF499C096E_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}
};
