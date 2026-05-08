#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1144AEA0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1144AEE0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__SHOOTCACHEVO_B__12_0_OFFSET UNITYSDK_OFFSET(0x1144AEF0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_GroupOrderReady___c_TypeDefinitionIndex = 66394;

	class ViewObjectManager_GroupOrderReady___c : public ::System::Object
	{
	public:
		static ::Foundation::ViewObject::ViewObjectManager_GroupOrderReady___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::ViewObjectManager_GroupOrderReady___c**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_GroupOrderReady___c_TypeDefinitionIndex)->GetStaticField(0x3BA00);
		}
		static ::System::Comparison_1<::Foundation::ViewObject::ViewObjectHandle>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::Foundation::ViewObject::ViewObjectHandle>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_GroupOrderReady___c_TypeDefinitionIndex)->GetStaticField(0x3BA08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ShootCacheVO_b__12_0(::Foundation::ViewObject::ViewObjectHandle l, ::Foundation::ViewObject::ViewObjectHandle r)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__SHOOTCACHEVO_B__12_0_OFFSET))(this, l, r);
		}
	};
}
