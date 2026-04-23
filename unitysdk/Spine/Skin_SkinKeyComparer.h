#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Skin_SkinKey.h"
#include "unitysdk/System/Object.h"

#define SPINE_SKIN_SKINKEYCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_SKIN_SKINKEY__EQUALS_OFFSET UNITYSDK_OFFSET(0x19E1E1C0)
#define SPINE_SKIN_SKINKEYCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_SKIN_SKINKEY__GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19E1E1E0)
#define SPINE_SKIN_SKINKEYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E1E200)
#define SPINE_SKIN_SKINKEYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E1E1F0)

namespace Spine
{
	inline static constexpr unsigned int Skin_SkinKeyComparer_TypeDefinitionIndex = 36461;

	class Skin_SkinKeyComparer : public ::System::Object
	{
	public:
		static ::Spine::Skin_SkinKeyComparer** StaticGet_Instance()
		{
			return (::Spine::Skin_SkinKeyComparer**)Il2CppClass::FromTypeDefinitionIndex(Skin_SkinKeyComparer_TypeDefinitionIndex)->GetStaticField(0x8570);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINKEYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINKEYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean System_Collections_Generic_IEqualityComparer_Spine_Skin_SkinKey__Equals(::Spine::Skin_SkinKey e1, ::Spine::Skin_SkinKey e2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skin_SkinKey, ::Spine::Skin_SkinKey))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINKEYCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_SKIN_SKINKEY__EQUALS_OFFSET))(this, e1, e2);
		}

		::System::Int32 System_Collections_Generic_IEqualityComparer_Spine_Skin_SkinKey__GetHashCode(::Spine::Skin_SkinKey e)
		{
			return ((::System::Int32(*)(::PVOID, ::Spine::Skin_SkinKey))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINKEYCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_SKIN_SKINKEY__GETHASHCODE_OFFSET))(this, e);
		}
	};
}
