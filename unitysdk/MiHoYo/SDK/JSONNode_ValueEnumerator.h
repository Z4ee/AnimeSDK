#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x47DA80)
#define MIHOYO_SDK_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8E3C60)
#define MIHOYO_SDK_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x81CA90)
#define MIHOYO_SDK_JSONNODE_VALUEENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x896310)
#define MIHOYO_SDK_JSONNODE_VALUEENUMERATOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x66F210)
#define MIHOYO_SDK_JSONNODE_VALUEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8962D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNode_ValueEnumerator_TypeDefinitionIndex = 18992;

	struct alignas(8) JSONNode_ValueEnumerator
	{
		::MiHoYo::SDK::JSONNode_Enumerator m_Enumerator; // 0x10

		/*
		::System::Void _ctor(::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::JSONNode*> aArrayEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_VALUEENUMERATOR__CTOR_OFFSET))(this, aArrayEnum);
		}
		*/

		/*
		::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYo::SDK::JSONNode*> aDictEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYo::SDK::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_VALUEENUMERATOR__CTOR_1_OFFSET))(this, aDictEnum);
		}
		*/

		::System::Void _ctor_2(::MiHoYo::SDK::JSONNode_Enumerator aEnumerator)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode_Enumerator))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_VALUEENUMERATOR__CTOR_2_OFFSET))(this, aEnumerator);
		}

		::MiHoYo::SDK::JSONNode* get_Current()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_ValueEnumerator GetEnumerator()
		{
			return ((::MiHoYo::SDK::JSONNode_ValueEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}
	};
}
