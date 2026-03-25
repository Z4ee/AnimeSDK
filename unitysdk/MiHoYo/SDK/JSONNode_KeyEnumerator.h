#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_JSONNODE_KEYENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1300)
#define MIHOYO_SDK_JSONNODE_KEYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27550)
#define MIHOYO_SDK_JSONNODE_KEYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20CAE60)
#define MIHOYO_SDK_JSONNODE_KEYENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1210)
#define MIHOYO_SDK_JSONNODE_KEYENUMERATOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1270)
#define MIHOYO_SDK_JSONNODE_KEYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNode_KeyEnumerator_TypeDefinitionIndex = 7124;

	struct alignas(8) JSONNode_KeyEnumerator
	{
		::MiHoYo::SDK::JSONNode_Enumerator m_Enumerator; // 0x10

		/*
		::System::Void _ctor(::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::JSONNode*> aArrayEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_KEYENUMERATOR__CTOR_OFFSET))(this, aArrayEnum);
		}
		*/

		/*
		::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYo::SDK::JSONNode*> aDictEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYo::SDK::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_KEYENUMERATOR__CTOR_1_OFFSET))(this, aDictEnum);
		}
		*/

		::System::Void _ctor_2(::MiHoYo::SDK::JSONNode_Enumerator aEnumerator)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode_Enumerator))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_KEYENUMERATOR__CTOR_2_OFFSET))(this, aEnumerator);
		}

		::System::String* get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_KEYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_KEYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_KeyEnumerator GetEnumerator()
		{
			return ((::MiHoYo::SDK::JSONNode_KeyEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_KEYENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}
	};
}
