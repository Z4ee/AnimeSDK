#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { class FrameProvider; }
namespace System { class Exception; }
namespace System { class TimeProvider; }
namespace System { template <typename T> class Action_1; }

#define R3_OBSERVABLESYSTEM_DEFAULTUNHANDLEDEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1C423C50)
#define R3_OBSERVABLESYSTEM_GETUNHANDLEDEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1C423BF0)
#define R3_OBSERVABLESYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C423D40)

namespace R3
{
	inline static constexpr unsigned int ObservableSystem_TypeDefinitionIndex = 35924;

	class ObservableSystem : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet_unhandledException()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(ObservableSystem_TypeDefinitionIndex)->GetStaticField(0xA40);
		}
		static ::System::TimeProvider** StaticGet_defaultTimeProvider()
		{
			return (::System::TimeProvider**)Il2CppClass::FromTypeDefinitionIndex(ObservableSystem_TypeDefinitionIndex)->GetStaticField(0xA48);
		}
		static ::R3::FrameProvider** StaticGet_defaultFrameProvider()
		{
			return (::R3::FrameProvider**)Il2CppClass::FromTypeDefinitionIndex(ObservableSystem_TypeDefinitionIndex)->GetStaticField(0xA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_OBSERVABLESYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Action_1<::System::Exception*>* GetUnhandledExceptionHandler()
		{
			return ((::System::Action_1<::System::Exception*>*(*)())((::PBYTE)hIl2Cpp + R3_OBSERVABLESYSTEM_GETUNHANDLEDEXCEPTIONHANDLER_OFFSET))();
		}

		static ::System::Void DefaultUnhandledExceptionHandler(::System::Exception* a1)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + R3_OBSERVABLESYSTEM_DEFAULTUNHANDLEDEXCEPTIONHANDLER_OFFSET))(a1);
		}
	};
}
