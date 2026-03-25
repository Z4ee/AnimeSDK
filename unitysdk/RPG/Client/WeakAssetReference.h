#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_WEAKASSETREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x20DDF70)
#define RPG_CLIENT_WEAKASSETREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20DDF80)
#define RPG_CLIENT_WEAKASSETREFERENCE_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x20DDDE0)
#define RPG_CLIENT_WEAKASSETREFERENCE_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x20DDE40)
#define RPG_CLIENT_WEAKASSETREFERENCE_METHOD_2_374150148187FD76_OFFSET UNITYSDK_OFFSET(0x165599B0)
#define RPG_CLIENT_WEAKASSETREFERENCE_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x20DDEA0)
#define RPG_CLIENT_WEAKASSETREFERENCE_METHOD_2_EDC938276DD38C8F_OFFSET UNITYSDK_OFFSET(0x16559A60)
#define RPG_CLIENT_WEAKASSETREFERENCE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x20DDF30)
#define RPG_CLIENT_WEAKASSETREFERENCE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x20DDEF0)
#define RPG_CLIENT_WEAKASSETREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x20DDD80)
#define RPG_CLIENT_WEAKASSETREFERENCE___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x20DE0D0)
#define RPG_CLIENT_WEAKASSETREFERENCE___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20DE140)

namespace RPG::Client
{
	inline static constexpr unsigned int WeakAssetReference_TypeDefinitionIndex = 31981;

	struct alignas(8) WeakAssetReference
	{
		::System::String* guid; // 0x10
		::System::String* path; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_2_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_2_374150148187FD76(::RPG::Client::WeakAssetReference a1, ::RPG::Client::WeakAssetReference a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::WeakAssetReference, ::RPG::Client::WeakAssetReference))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_METHOD_2_374150148187FD76_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_EDC938276DD38C8F(::RPG::Client::WeakAssetReference a1, ::RPG::Client::WeakAssetReference a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::WeakAssetReference, ::RPG::Client::WeakAssetReference))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_METHOD_2_EDC938276DD38C8F_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_METHOD_2_1D4018D4200358D0_OFFSET))(this);
		}

		::System::String* Method_2_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
