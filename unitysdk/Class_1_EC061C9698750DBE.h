#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"

namespace RPG::Client { class FlexibleLayoutGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_EC061C9698750DBE_METHOD_1_05B00B3640B6EF22_OFFSET UNITYSDK_OFFSET(0x10903720)
#define CLASS_1_EC061C9698750DBE_METHOD_1_5203AD37BF8E7CD7_OFFSET UNITYSDK_OFFSET(0x10903740)
#define CLASS_1_EC061C9698750DBE_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x109036D0)
#define CLASS_1_EC061C9698750DBE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x109036C0)
#define CLASS_1_EC061C9698750DBE_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x10903700)
#define CLASS_1_EC061C9698750DBE_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x109036E0)
#define CLASS_1_EC061C9698750DBE__CTOR_OFFSET UNITYSDK_OFFSET(0x109036A0)

inline static constexpr unsigned int Class_1_EC061C9698750DBE_TypeDefinitionIndex = 59560;

class Class_1_EC061C9698750DBE : public ::System::Object
{
public:
	::RPG::Client::FlexibleLayoutGroup* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::FlexibleLayoutGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FlexibleLayoutGroup*))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* Method_1_05B00B3640B6EF22()
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_05B00B3640B6EF22_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* Method_1_5203AD37BF8E7CD7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_5203AD37BF8E7CD7_OFFSET))(this);
	}
};
