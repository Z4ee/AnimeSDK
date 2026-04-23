#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/AvatarSkinSource.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_0158E2E99AA204F4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15A85E0)
#define STRUCT_2_0158E2E99AA204F4_EQUALS_OFFSET UNITYSDK_OFFSET(0x15A8550)
#define STRUCT_2_0158E2E99AA204F4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15A85F0)
#define STRUCT_2_0158E2E99AA204F4_GET_ID_OFFSET UNITYSDK_OFFSET(0xD240)
#define STRUCT_2_0158E2E99AA204F4_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x5580)
#define STRUCT_2_0158E2E99AA204F4_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x15A8520)
#define STRUCT_2_0158E2E99AA204F4_METHOD_2_726D00087F5202C3_1_OFFSET UNITYSDK_OFFSET(0x11A2A6E0)
#define STRUCT_2_0158E2E99AA204F4_METHOD_2_726D00087F5202C3_OFFSET UNITYSDK_OFFSET(0x11A2A610)
#define STRUCT_2_0158E2E99AA204F4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15A8670)
#define STRUCT_2_0158E2E99AA204F4__CTOR_OFFSET UNITYSDK_OFFSET(0x15A8530)
#define STRUCT_2_0158E2E99AA204F4___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x15A8680)
#define STRUCT_2_0158E2E99AA204F4___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15A86C0)
#define STRUCT_2_0158E2E99AA204F4___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15A8700)

inline static constexpr unsigned int Struct_2_0158E2E99AA204F4_TypeDefinitionIndex = 47981;

struct alignas(4) Struct_2_0158E2E99AA204F4
{
	// static const ::System::UInt32 Field_2_0 = 0x0; // 0x0
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18
	::RPG::AvatarSystem::AvatarSkinSource _Source_k__BackingField; // 0x1C

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4_GET_ID_OFFSET))(this);
	}

	::RPG::AvatarSystem::AvatarSkinSource get_Source()
	{
		return ((::RPG::AvatarSystem::AvatarSkinSource(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4_GET_SOURCE_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_0158E2E99AA204F4 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0158E2E99AA204F4))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_726D00087F5202C3(::Struct_2_0158E2E99AA204F4 a1, ::Struct_2_0158E2E99AA204F4 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_0158E2E99AA204F4, ::Struct_2_0158E2E99AA204F4))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4_METHOD_2_726D00087F5202C3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_726D00087F5202C3_1(::Struct_2_0158E2E99AA204F4 a1, ::Struct_2_0158E2E99AA204F4 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_0158E2E99AA204F4, ::Struct_2_0158E2E99AA204F4))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4_METHOD_2_726D00087F5202C3_1_OFFSET))(a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4_TOSTRING_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0158E2E99AA204F4___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
