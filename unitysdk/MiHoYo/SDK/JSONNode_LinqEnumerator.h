#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYO_SDK_JSONNODE_LINQENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1834C560)
#define MIHOYO_SDK_JSONNODE_LINQENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1834C580)
#define MIHOYO_SDK_JSONNODE_LINQENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1834C3C0)
#define MIHOYO_SDK_JSONNODE_LINQENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1834C4C0)
#define MIHOYO_SDK_JSONNODE_LINQENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1834C5D0)
#define MIHOYO_SDK_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1834C700)
#define MIHOYO_SDK_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1834C420)
#define MIHOYO_SDK_JSONNODE_LINQENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1834A260)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNode_LinqEnumerator_TypeDefinitionIndex = 8071;

	class JSONNode_LinqEnumerator : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* m_Node; // 0x10
		::MiHoYo::SDK::JSONNode_Enumerator m_Enumerator; // 0x18

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_LINQENUMERATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*> get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*>(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_LINQENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_LINQENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_LINQENUMERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_LINQENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_LINQENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
