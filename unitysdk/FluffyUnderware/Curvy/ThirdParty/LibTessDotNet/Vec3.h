#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_DOT_OFFSET UNITYSDK_OFFSET(0x1B8B1500)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x997C90)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_LONGAXIS_OFFSET UNITYSDK_OFFSET(0x1B8B0C20)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_NEG_OFFSET UNITYSDK_OFFSET(0x1B8B0E70)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1B8B3530)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x997D10)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_SUB_OFFSET UNITYSDK_OFFSET(0x1B8B0C00)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x997DA0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_VEC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8B3670)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int Vec3_TypeDefinitionIndex = 25928;

	struct alignas(4) Vec3
	{
		static ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3* StaticGet_Zero()
		{
			return (::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3*)Il2CppClass::FromTypeDefinitionIndex(Vec3_TypeDefinitionIndex)->GetStaticField(0x4850);
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
