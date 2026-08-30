#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"

namespace RPG::Client { class FlexibleLayoutGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_EC061C9698750DBE_METHOD_1_2AF2955D647E74C4_OFFSET UNITYSDK_OFFSET(0xB78D340)
#define CLASS_1_EC061C9698750DBE_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB78D1B0)
#define CLASS_1_EC061C9698750DBE_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB78D170)
#define CLASS_1_EC061C9698750DBE_METHOD_1_EB5DBAA6F96AF9C9_OFFSET UNITYSDK_OFFSET(0xB78D2D0)
#define CLASS_1_EC061C9698750DBE_METHOD_1_F026F9F94BAA5E1F_1_OFFSET UNITYSDK_OFFSET(0xB78D260)
#define CLASS_1_EC061C9698750DBE_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xB78D1F0)
#define CLASS_1_EC061C9698750DBE__CTOR_OFFSET UNITYSDK_OFFSET(0xB78D150)

inline static constexpr unsigned int Class_1_EC061C9698750DBE_TypeDefinitionIndex = 72591;

class Class_1_EC061C9698750DBE : public ::System::Object
{
public:
	::RPG::Client::FlexibleLayoutGroup* MOJFCKDFDIG; // 0x10

	::System::Void _ctor(::RPG::Client::FlexibleLayoutGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FlexibleLayoutGroup*))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_F026F9F94BAA5E1F_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* Method_1_EB5DBAA6F96AF9C9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_EB5DBAA6F96AF9C9_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* Method_1_2AF2955D647E74C4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC061C9698750DBE_METHOD_1_2AF2955D647E74C4_OFFSET))(this);
	}
};
