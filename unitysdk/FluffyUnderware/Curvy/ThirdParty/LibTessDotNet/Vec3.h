#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_DOT_OFFSET UNITYSDK_OFFSET(0x1F030120)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA8B0B0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_LONGAXIS_OFFSET UNITYSDK_OFFSET(0x1F02F7E0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_NEG_OFFSET UNITYSDK_OFFSET(0x1F02FA30)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1F032250)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA8B130)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_SUB_OFFSET UNITYSDK_OFFSET(0x1F02F7C0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA8B1C0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F032370)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int Vec3_TypeDefinitionIndex = 29026;

	struct alignas(4) Vec3
	{
		static ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3* StaticGet_Zero()
		{
			return (::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3*)Il2CppClass::FromTypeDefinitionIndex(Vec3_TypeDefinitionIndex)->GetStaticField(0x78C0);
		}
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3__CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::System::Void Sub(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3& lhs, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3& rhs, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3& result)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3&, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3&, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_SUB_OFFSET))(lhs, rhs, result);
		}

		static ::System::Void Neg(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3& v)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_NEG_OFFSET))(v);
		}

		static ::System::Void Dot(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3& u, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3& v, ::System::Single& dot)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3&, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3&, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_DOT_OFFSET))(u, v, dot);
		}

		static ::System::Void Normalize(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3& v)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_NORMALIZE_OFFSET))(v);
		}

		static ::System::Int32 LongAxis(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3& v)
		{
			return ((::System::Int32(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_LONGAXIS_OFFSET))(v);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_TOSTRING_OFFSET))(this);
		}
	};
}
