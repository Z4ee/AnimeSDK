#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_81F181762B95C3EC;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_TOASTQUEUEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3221F0)
#define RPG_CLIENT_TOASTQUEUEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB322220)
#define RPG_CLIENT_TOASTQUEUEMODULE___C___DOACTIONS_B__8_0_OFFSET UNITYSDK_OFFSET(0xB322230)

namespace RPG::Client
{
	inline static constexpr unsigned int ToastQueueModule___c_TypeDefinitionIndex = 62833;

	class ToastQueueModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_81F181762B95C3EC*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::Class_1_81F181762B95C3EC*>**)Il2CppClass::FromTypeDefinitionIndex(ToastQueueModule___c_TypeDefinitionIndex)->GetStaticField(0x3D550);
		}
		static ::RPG::Client::ToastQueueModule___c** StaticGet___9()
		{
			return (::RPG::Client::ToastQueueModule___c**)Il2CppClass::FromTypeDefinitionIndex(ToastQueueModule___c_TypeDefinitionIndex)->GetStaticField(0x3D558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __DoActions_b__8_0(::Class_1_81F181762B95C3EC* x, ::Class_1_81F181762B95C3EC* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_81F181762B95C3EC*, ::Class_1_81F181762B95C3EC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE___C___DOACTIONS_B__8_0_OFFSET))(this, x, y);
		}
	};
}
