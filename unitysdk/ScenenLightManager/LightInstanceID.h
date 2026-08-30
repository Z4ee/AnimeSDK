#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B8F0D0)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B67D00)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_METHOD_2_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x161E0)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x123C0)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B8F150)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF43A10)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B8F0A0)
#define SCENENLIGHTMANAGER_LIGHTINSTANCEID__CTOR_OFFSET UNITYSDK_OFFSET(0x16050)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightInstanceID_TypeDefinitionIndex = 49574;

	struct alignas(8) LightInstanceID
	{
		static ::ScenenLightManager::LightInstanceID* StaticGet_InvalidID()
		{
			return (::ScenenLightManager::LightInstanceID*)Il2CppClass::FromTypeDefinitionIndex(LightInstanceID_TypeDefinitionIndex)->GetStaticField(0xFB10);
		}
		::System::Int64 hash; // 0x10

		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_EQUALS_OFFSET))(this, a1);
		}

		::System::Int64 Method_2_7ADD5F1F5E247E3B()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_METHOD_2_7ADD5F1F5E247E3B_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTINSTANCEID_TOSTRING_OFFSET))(this);
		}
	};
}
