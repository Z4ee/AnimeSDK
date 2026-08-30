#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define CLASS_1_C92397EFA3C50959_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0x16EFBD50)
#define CLASS_1_C92397EFA3C50959_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16EFBE30)
#define CLASS_1_C92397EFA3C50959_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x16EFC090)
#define CLASS_1_C92397EFA3C50959_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16EFBE90)
#define CLASS_1_C92397EFA3C50959_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x16EFC280)
#define CLASS_1_C92397EFA3C50959_METHOD_1_62DF1EBE90234E13_OFFSET UNITYSDK_OFFSET(0x16EFBD70)
#define CLASS_1_C92397EFA3C50959_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x16EFC180)
#define CLASS_1_C92397EFA3C50959_METHOD_1_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x16EFBEE0)
#define CLASS_1_C92397EFA3C50959_METHOD_1_FB65499351C37BFD_OFFSET UNITYSDK_OFFSET(0x16EFC110)
#define CLASS_1_C92397EFA3C50959_SET_ISENDED_OFFSET UNITYSDK_OFFSET(0x16EFBD60)
#define CLASS_1_C92397EFA3C50959__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFC480)

inline static constexpr unsigned int Class_1_C92397EFA3C50959_TypeDefinitionIndex = 68890;

class Class_1_C92397EFA3C50959 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* IGLNACMFMHF; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* NKAAOPLPBMN; // 0x18
	::System::Boolean EJDEKKEOHBE; // 0x20
	::System::Boolean _IsEnded_k__BackingField; // 0x21
	::System::Single FLBLLMPABOJ; // 0x24
	::System::Single GIOOOEBJKBB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C92397EFA3C50959__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsEnded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C92397EFA3C50959_GET_ISENDED_OFFSET))(this);
	}

	::System::Void set_IsEnded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C92397EFA3C50959_SET_ISENDED_OFFSET))(this, a1);
	}

	::System::Void Method_1_62DF1EBE90234E13(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_C92397EFA3C50959_METHOD_1_62DF1EBE90234E13_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C92397EFA3C50959_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C92397EFA3C50959_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C92397EFA3C50959_METHOD_1_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C92397EFA3C50959_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_FB65499351C37BFD()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C92397EFA3C50959_METHOD_1_FB65499351C37BFD_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C92397EFA3C50959_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C92397EFA3C50959_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}
};
