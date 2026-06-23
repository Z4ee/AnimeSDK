#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { class IObject; }
namespace Foundation { class ObjectService; }

#define FOUNDATION_OBJECTHANDLE_DESTROY_OFFSET UNITYSDK_OFFSET(0x9CAA10)
#define FOUNDATION_OBJECTHANDLE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x9CAA00)
#define FOUNDATION_OBJECTHANDLE_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x1CFFE3C0)
#define FOUNDATION_OBJECTHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0x9CD150)
#define FOUNDATION_OBJECTHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D001330)
#define FOUNDATION_OBJECTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)

namespace Foundation
{
	inline static constexpr unsigned int ObjectHandle_TypeDefinitionIndex = 8745;

	struct alignas(4) ObjectHandle
	{
		static ::Foundation::ObjectHandle* StaticGet_Null()
		{
			return (::Foundation::ObjectHandle*)Il2CppClass::FromTypeDefinitionIndex(ObjectHandle_TypeDefinitionIndex)->GetStaticField(0x3AC0);
		}
		::System::Int32 Index; // 0x10
		::System::Int32 Id; // 0x14

		::System::Void _ctor(::System::Int32 index, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTHANDLE__CTOR_OFFSET))(this, index, id);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTHANDLE__CCTOR_OFFSET))();
		}

		static ::Foundation::ObjectService* get_Manager()
		{
			return ((::Foundation::ObjectService*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTHANDLE_GET_MANAGER_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTHANDLE_GET_ISNULL_OFFSET))(this);
		}

		::System::Void Destroy(::System::Boolean immediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTHANDLE_DESTROY_OFFSET))(this, immediately);
		}

		::System::Void Reset(::Foundation::IObject* objectInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IObject*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTHANDLE_RESET_OFFSET))(this, objectInstance);
		}
	};
}
