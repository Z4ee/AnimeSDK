#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SWRT { class SWRT; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SWRT_SWRTMANAGER_GETACTIVEBINDER_OFFSET UNITYSDK_OFFSET(0x1818B020)
#define SWRT_SWRTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1818AFF0)
#define SWRT_SWRTMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1818AE80)
#define SWRT_SWRTMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1818AF80)
#define SWRT_SWRTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1818B0E0)
#define SWRT_SWRTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1818B0A0)

namespace SWRT
{
	inline static constexpr unsigned int SWRTManager_TypeDefinitionIndex = 34899;

	class SWRTManager : public ::System::Object
	{
	public:
		static ::SWRT::SWRTManager** StaticGet_s_Instance()
		{
			return (::SWRT::SWRTManager**)Il2CppClass::FromTypeDefinitionIndex(SWRTManager_TypeDefinitionIndex)->GetStaticField(0xF90);
		}
		::System::Collections::Generic::List_1<::SWRT::SWRT*>* _Binders; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER__CCTOR_OFFSET))();
		}

		static ::SWRT::SWRTManager* get_Instance()
		{
			return ((::SWRT::SWRTManager*(*)())((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Register(::SWRT::SWRT* binder)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::SWRT*))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_REGISTER_OFFSET))(this, binder);
		}

		::System::Void Unregister(::SWRT::SWRT* binder)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::SWRT*))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_UNREGISTER_OFFSET))(this, binder);
		}

		::SWRT::SWRT* GetActiveBinder()
		{
			return ((::SWRT::SWRT*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_GETACTIVEBINDER_OFFSET))(this);
		}
	};
}
