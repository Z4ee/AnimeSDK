#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator_Type.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_JSONNODE_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x229CB50)
#define MIHOYO_SDK_JSONNODE_ENUMERATOR_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1030)
#define MIHOYO_SDK_JSONNODE_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x229CBB0)
#define MIHOYO_SDK_JSONNODE_ENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1090)
#define MIHOYO_SDK_JSONNODE_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1040)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNode_Enumerator_TypeDefinitionIndex = 7164;

	struct alignas(8) JSONNode_Enumerator
	{
		::MiHoYo::SDK::JSONNode_Enumerator_Type type; // 0x10
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYo::SDK::JSONNode*> m_Object; // 0x18
		::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::JSONNode*> m_Array; // 0x40

		::System::Void _ctor(::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::JSONNode*> aArrayEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1_Enumerator<::MiHoYo::SDK::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ENUMERATOR__CTOR_OFFSET))(this, aArrayEnum);
		}

		::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYo::SDK::JSONNode*> aDictEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYo::SDK::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ENUMERATOR__CTOR_1_OFFSET))(this, aDictEnum);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ENUMERATOR_GET_ISVALID_OFFSET))(this);
		}

		/*
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*> get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*>(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
		*/

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}
	};
}
