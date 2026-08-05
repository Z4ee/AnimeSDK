#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13274B10)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13274B50)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__SHOOTCACHEVO_B__13_0_OFFSET UNITYSDK_OFFSET(0x13274B60)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_GroupOrderReady___c_TypeDefinitionIndex = 55564;

	class ViewObjectManager_GroupOrderReady___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Foundation::ViewObject::ViewObjectHandle>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::Foundation::ViewObject::ViewObjectHandle>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_GroupOrderReady___c_TypeDefinitionIndex)->GetStaticField(0x3E840);
		}
		static ::Foundation::ViewObject::ViewObjectManager_GroupOrderReady___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::ViewObjectManager_GroupOrderReady___c**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_GroupOrderReady___c_TypeDefinitionIndex)->GetStaticField(0x3E848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ShootCacheVO_b__13_0(::Foundation::ViewObject::ViewObjectHandle l, ::Foundation::ViewObject::ViewObjectHandle r)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__SHOOTCACHEVO_B__13_0_OFFSET))(this, l, r);
		}
	};
}
