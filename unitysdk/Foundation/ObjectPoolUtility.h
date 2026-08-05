#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_OBJECTPOOLUTILITY_GET_MAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1E9C12C0)
#define FOUNDATION_OBJECTPOOLUTILITY_ISTHISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1E9C1510)
#define FOUNDATION_OBJECTPOOLUTILITY_MARKMAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1E9C1380)
#define FOUNDATION_OBJECTPOOLUTILITY_SET_MAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1E9C1320)
#define FOUNDATION_OBJECTPOOLUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C1790)

namespace Foundation
{
	inline static constexpr unsigned int ObjectPoolUtility_TypeDefinitionIndex = 8026;

	class ObjectPoolUtility : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__MainThreadID_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolUtility_TypeDefinitionIndex)->GetStaticField(0x3550);
		}
		static ::System::Boolean* StaticGet_UseObjectPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolUtility_TypeDefinitionIndex)->GetStaticField(0x3554);
		}
		static ::System::Boolean* StaticGet_isOpenThreadCheck()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolUtility_TypeDefinitionIndex)->GetStaticField(0x3555);
		}
		static ::System::Int32* StaticGet_ObjectPoolSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolUtility_TypeDefinitionIndex)->GetStaticField(0x3558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTPOOLUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_MainThreadID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTPOOLUTILITY_GET_MAINTHREADID_OFFSET))();
		}

		static ::System::Void set_MainThreadID(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTPOOLUTILITY_SET_MAINTHREADID_OFFSET))(value);
		}

		static ::System::Void MarkMainThreadID()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTPOOLUTILITY_MARKMAINTHREADID_OFFSET))();
		}

		static ::System::Boolean IsThisMainThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTPOOLUTILITY_ISTHISMAINTHREAD_OFFSET))();
		}
	};
}
