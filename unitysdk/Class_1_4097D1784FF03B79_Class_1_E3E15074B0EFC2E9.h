#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StageItem.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_4097D1784FF03B79_CLASS_1_E3E15074B0EFC2E9_GET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x141B9C10)
#define CLASS_1_4097D1784FF03B79_CLASS_1_E3E15074B0EFC2E9_METHOD_1_90C6BAB19FFC189E_OFFSET UNITYSDK_OFFSET(0x141B9C80)
#define CLASS_1_4097D1784FF03B79_CLASS_1_E3E15074B0EFC2E9_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x141B9C30)
#define CLASS_1_4097D1784FF03B79_CLASS_1_E3E15074B0EFC2E9_SET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x141B9C20)
#define CLASS_1_4097D1784FF03B79_CLASS_1_E3E15074B0EFC2E9__CTOR_OFFSET UNITYSDK_OFFSET(0x141B75F0)

inline static constexpr unsigned int Class_1_4097D1784FF03B79_Class_1_E3E15074B0EFC2E9_TypeDefinitionIndex = 56743;

class Class_1_4097D1784FF03B79_Class_1_E3E15074B0EFC2E9 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem Field_1_1; // 0x18
	::System::Single _FadeProgress_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_E3E15074B0EFC2E9__CTOR_OFFSET))(this);
	}

	::System::Single get_FadeProgress()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_E3E15074B0EFC2E9_GET_FADEPROGRESS_OFFSET))(this);
	}

	::System::Void set_FadeProgress(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_E3E15074B0EFC2E9_SET_FADEPROGRESS_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_E3E15074B0EFC2E9_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_90C6BAB19FFC189E(::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_E3E15074B0EFC2E9_METHOD_1_90C6BAB19FFC189E_OFFSET))(this, a1);
	}
};
