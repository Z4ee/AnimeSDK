#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D2F6F60)
#define RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D2F6F70)
#define RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_GET_GET_OFFSET UNITYSDK_OFFSET(0x1D2F6D10)
#define RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F6F80)

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_RuntimeTypeHandleComparer_TypeDefinitionIndex = 5631;

	class ReferencePool_RuntimeTypeHandleComparer : public ::System::Object
	{
	public:
		static ::RPG::ReferencePool_RuntimeTypeHandleComparer** StaticGet__instance()
		{
			return (::RPG::ReferencePool_RuntimeTypeHandleComparer**)Il2CppClass::FromTypeDefinitionIndex(ReferencePool_RuntimeTypeHandleComparer_TypeDefinitionIndex)->GetStaticField(0x3F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::RuntimeTypeHandle a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

		static ::RPG::ReferencePool_RuntimeTypeHandleComparer* get_Get()
		{
			return ((::RPG::ReferencePool_RuntimeTypeHandleComparer*(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RUNTIMETYPEHANDLECOMPARER_GET_GET_OFFSET))();
		}
	};
}
