#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StageItem.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_30163A2B0962161E_CLASS_1_D1A35168415AF2B1_GET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x18B31F00)
#define CLASS_1_30163A2B0962161E_CLASS_1_D1A35168415AF2B1_METHOD_1_0DF235EADEC33AA7_OFFSET UNITYSDK_OFFSET(0x18B31F70)
#define CLASS_1_30163A2B0962161E_CLASS_1_D1A35168415AF2B1_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x18B31F20)
#define CLASS_1_30163A2B0962161E_CLASS_1_D1A35168415AF2B1_SET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x18B31F10)
#define CLASS_1_30163A2B0962161E_CLASS_1_D1A35168415AF2B1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2F700)

inline static constexpr unsigned int Class_1_30163A2B0962161E_Class_1_D1A35168415AF2B1_TypeDefinitionIndex = 57990;

class Class_1_30163A2B0962161E_Class_1_D1A35168415AF2B1 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem Field_1_1; // 0x18
	::System::Single _FadeProgress_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_D1A35168415AF2B1__CTOR_OFFSET))(this);
	}

	::System::Single get_FadeProgress()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_D1A35168415AF2B1_GET_FADEPROGRESS_OFFSET))(this);
	}

	::System::Void set_FadeProgress(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_D1A35168415AF2B1_SET_FADEPROGRESS_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_D1A35168415AF2B1_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_0DF235EADEC33AA7(::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_D1A35168415AF2B1_METHOD_1_0DF235EADEC33AA7_OFFSET))(this, a1);
	}
};
