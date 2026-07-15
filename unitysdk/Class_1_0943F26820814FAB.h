#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class GridLayoutGroup; }

#define CLASS_1_0943F26820814FAB_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x14E5D2C0)
#define CLASS_1_0943F26820814FAB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14E5D260)
#define CLASS_1_0943F26820814FAB_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x14E5D370)
#define CLASS_1_0943F26820814FAB_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x14E5D320)
#define CLASS_1_0943F26820814FAB_METHOD_1_BDCAD5FB3137D000_OFFSET UNITYSDK_OFFSET(0x14E5D3C0)
#define CLASS_1_0943F26820814FAB_METHOD_1_D49E48D60DF7674D_OFFSET UNITYSDK_OFFSET(0x14E5D420)
#define CLASS_1_0943F26820814FAB__CTOR_OFFSET UNITYSDK_OFFSET(0x14E5D240)

inline static constexpr unsigned int Class_1_0943F26820814FAB_TypeDefinitionIndex = 69378;

class Class_1_0943F26820814FAB : public ::System::Object
{
public:
	::UnityEngine::UI::GridLayoutGroup* Field_1_0; // 0x10

	::System::Void _ctor(::UnityEngine::UI::GridLayoutGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup*))((::PBYTE)hIl2Cpp + CLASS_1_0943F26820814FAB__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0943F26820814FAB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0943F26820814FAB_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0943F26820814FAB_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0943F26820814FAB_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* Method_1_BDCAD5FB3137D000()
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0943F26820814FAB_METHOD_1_BDCAD5FB3137D000_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* Method_1_D49E48D60DF7674D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0943F26820814FAB_METHOD_1_D49E48D60DF7674D_OFFSET))(this);
	}
};
