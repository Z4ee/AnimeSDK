#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x164AE5A0)
#define RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x164AE5B0)
#define RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_GET_GET_OFFSET UNITYSDK_OFFSET(0x164AE360)
#define RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x164AE5C0)

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_RuntimeTypeHandleComparer_TypeDefinitionIndex = 6391;

	class ReferencePool_RuntimeTypeHandleComparer : public ::System::Object
	{
	public:
		static ::RPG::ReferencePool_RuntimeTypeHandleComparer** StaticGet__instance()
		{
			return (::RPG::ReferencePool_RuntimeTypeHandleComparer**)Il2CppClass::FromTypeDefinitionIndex(ReferencePool_RuntimeTypeHandleComparer_TypeDefinitionIndex)->GetStaticField(0x4B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::RuntimeTypeHandle x, ::System::RuntimeTypeHandle y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::RuntimeTypeHandle obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}

		static ::RPG::ReferencePool_RuntimeTypeHandleComparer* get_Get()
		{
			return ((::RPG::ReferencePool_RuntimeTypeHandleComparer*(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_GET_GET_OFFSET))();
		}
	};
}
