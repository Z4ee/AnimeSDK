#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StoryVFX.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
namespace RPGTools { class MonoTimelineEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4097D1784FF03B79_CLASS_1_35110A488AF98562_GET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x141BA110)
#define CLASS_1_4097D1784FF03B79_CLASS_1_35110A488AF98562_METHOD_1_24886E26DA7D7A1C_OFFSET UNITYSDK_OFFSET(0x141BA180)
#define CLASS_1_4097D1784FF03B79_CLASS_1_35110A488AF98562_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x141BA130)
#define CLASS_1_4097D1784FF03B79_CLASS_1_35110A488AF98562_SET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x141BA120)
#define CLASS_1_4097D1784FF03B79_CLASS_1_35110A488AF98562__CTOR_OFFSET UNITYSDK_OFFSET(0x141B73A0)

inline static constexpr unsigned int Class_1_4097D1784FF03B79_Class_1_35110A488AF98562_TypeDefinitionIndex = 56742;

class Class_1_4097D1784FF03B79_Class_1_35110A488AF98562 : public ::System::Object
{
public:
	::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX Field_1_0; // 0x10
	::RPGTools::MonoTimelineEffect* Field_1_1; // 0x20
	::System::Single _FadeProgress_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_35110A488AF98562__CTOR_OFFSET))(this);
	}

	::System::Single get_FadeProgress()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_35110A488AF98562_GET_FADEPROGRESS_OFFSET))(this);
	}

	::System::Void set_FadeProgress(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_35110A488AF98562_SET_FADEPROGRESS_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_35110A488AF98562_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_24886E26DA7D7A1C(::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_35110A488AF98562_METHOD_1_24886E26DA7D7A1C_OFFSET))(this, a1);
	}
};
