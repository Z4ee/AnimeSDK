#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define CLASS_1_7C29193D2C5F9FDC_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x198C4700)
#define CLASS_1_7C29193D2C5F9FDC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x198C46C0)
#define CLASS_1_7C29193D2C5F9FDC_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x198C47A0)
#define CLASS_1_7C29193D2C5F9FDC_METHOD_1_BDCAD5FB3137D000_OFFSET UNITYSDK_OFFSET(0x198C47F0)
#define CLASS_1_7C29193D2C5F9FDC_METHOD_1_D49E48D60DF7674D_OFFSET UNITYSDK_OFFSET(0x198C4840)
#define CLASS_1_7C29193D2C5F9FDC_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x198C4740)
#define CLASS_1_7C29193D2C5F9FDC__CTOR_OFFSET UNITYSDK_OFFSET(0x198C4690)

inline static constexpr unsigned int Class_1_7C29193D2C5F9FDC_TypeDefinitionIndex = 72588;

class Class_1_7C29193D2C5F9FDC : public ::System::Object
{
public:
	::UnityEngine::UI::HorizontalLayoutGroup* MOJFCKDFDIG; // 0x10

	::System::Void _ctor(::UnityEngine::UI::HorizontalLayoutGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::HorizontalLayoutGroup*))((::PBYTE)hIl2Cpp + CLASS_1_7C29193D2C5F9FDC__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C29193D2C5F9FDC_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C29193D2C5F9FDC_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C29193D2C5F9FDC_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C29193D2C5F9FDC_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* Method_1_BDCAD5FB3137D000()
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C29193D2C5F9FDC_METHOD_1_BDCAD5FB3137D000_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* Method_1_D49E48D60DF7674D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C29193D2C5F9FDC_METHOD_1_D49E48D60DF7674D_OFFSET))(this);
	}
};
