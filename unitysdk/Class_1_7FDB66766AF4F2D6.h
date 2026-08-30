#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_735;
class Class_1_0BCDBB6467B5097D;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_7FDB66766AF4F2D6_METHOD_1_250203490119AF47_OFFSET UNITYSDK_OFFSET(0x17919FA0)
#define CLASS_1_7FDB66766AF4F2D6_METHOD_1_4F7A67986AD09CEB_1_OFFSET UNITYSDK_OFFSET(0x1791A1B0)
#define CLASS_1_7FDB66766AF4F2D6_METHOD_1_4F7A67986AD09CEB_OFFSET UNITYSDK_OFFSET(0x1791A080)
#define CLASS_1_7FDB66766AF4F2D6_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x1791A030)
#define CLASS_1_7FDB66766AF4F2D6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1791A210)
#define CLASS_1_7FDB66766AF4F2D6_METHOD_1_DA436898D541FC7D_OFFSET UNITYSDK_OFFSET(0x1791A0E0)
#define CLASS_1_7FDB66766AF4F2D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A020)

inline static constexpr unsigned int Class_1_7FDB66766AF4F2D6_TypeDefinitionIndex = 62459;

class Class_1_7FDB66766AF4F2D6 : public ::System::Object
{
public:
	::Class_1_0BCDBB6467B5097D* APBKPGMCPLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FDB66766AF4F2D6__CTOR_OFFSET))(this);
	}

	static ::Class_1_7FDB66766AF4F2D6* Method_1_250203490119AF47(::Class_1_0BCDBB6467B5097D* a1)
	{
		return ((::Class_1_7FDB66766AF4F2D6*(*)(::Class_1_0BCDBB6467B5097D*))((::PBYTE)hIl2Cpp + CLASS_1_7FDB66766AF4F2D6_METHOD_1_250203490119AF47_OFFSET))(a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_735* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_735*))((::PBYTE)hIl2Cpp + CLASS_1_7FDB66766AF4F2D6_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F7A67986AD09CEB(::Class_0_16E4307DCC419505_735* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_735*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_7FDB66766AF4F2D6_METHOD_1_4F7A67986AD09CEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4F7A67986AD09CEB_1(::Class_0_16E4307DCC419505_735* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_735*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_7FDB66766AF4F2D6_METHOD_1_4F7A67986AD09CEB_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FDB66766AF4F2D6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_DA436898D541FC7D(::Class_0_16E4307DCC419505_735* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_735*))((::PBYTE)hIl2Cpp + CLASS_1_7FDB66766AF4F2D6_METHOD_1_DA436898D541FC7D_OFFSET))(this, a1);
	}
};
