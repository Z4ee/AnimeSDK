#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ReservedObjectPool; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_UNITYOBJPOOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1503AF20)
#define FOUNDATION_UNITYOBJPOOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1503AF60)
#define FOUNDATION_UNITYOBJPOOL___C__RELEASEALLRESERVEDOBJECTPOOL_B__4_0_OFFSET UNITYSDK_OFFSET(0x1503AF70)

namespace Foundation
{
	inline static constexpr unsigned int UnityObjPool___c_TypeDefinitionIndex = 84353;

	class UnityObjPool___c : public ::System::Object
	{
	public:
		static ::Foundation::UnityObjPool___c** StaticGet___9()
		{
			return (::Foundation::UnityObjPool___c**)Il2CppClass::FromTypeDefinitionIndex(UnityObjPool___c_TypeDefinitionIndex)->GetStaticField(0x50560);
		}
		static ::System::Action_1<::Foundation::ReservedObjectPool*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::Foundation::ReservedObjectPool*>**)Il2CppClass::FromTypeDefinitionIndex(UnityObjPool___c_TypeDefinitionIndex)->GetStaticField(0x50568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNITYOBJPOOL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNITYOBJPOOL___C__CTOR_OFFSET))(this);
		}

		::System::Void _ReleaseAllReservedObjectPool_b__4_0(::Foundation::ReservedObjectPool* p)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ReservedObjectPool*))((::PBYTE)hIl2Cpp + FOUNDATION_UNITYOBJPOOL___C__RELEASEALLRESERVEDOBJECTPOOL_B__4_0_OFFSET))(this, p);
		}
	};
}
