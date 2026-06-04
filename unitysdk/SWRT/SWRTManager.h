#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SWRT { class SWRT; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SWRT_SWRTMANAGER_GETACTIVEBINDER_OFFSET UNITYSDK_OFFSET(0x18F23020)
#define SWRT_SWRTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18F31230)
#define SWRT_SWRTMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x18F31080)
#define SWRT_SWRTMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x18F311C0)
#define SWRT_SWRTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F312A0)
#define SWRT_SWRTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F31260)

namespace SWRT
{
	inline static constexpr unsigned int SWRTManager_TypeDefinitionIndex = 35182;

	class SWRTManager : public ::System::Object
	{
	public:
		static ::SWRT::SWRTManager** StaticGet_s_Instance()
		{
			return (::SWRT::SWRTManager**)Il2CppClass::FromTypeDefinitionIndex(SWRTManager_TypeDefinitionIndex)->GetStaticField(0x63110);
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

		::System::Void Register(::SWRT::SWRT* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::SWRT*))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_REGISTER_OFFSET))(this, a1);
		}

		::System::Void Unregister(::SWRT::SWRT* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::SWRT*))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_UNREGISTER_OFFSET))(this, a1);
		}

		::SWRT::SWRT* GetActiveBinder()
		{
			return ((::SWRT::SWRT*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_GETACTIVEBINDER_OFFSET))(this);
		}
	};
}
