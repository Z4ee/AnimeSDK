#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject { class ViewObject; }
namespace System { template <typename T> class Func_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125849B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125849F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADALLGROUP_B__132_0_OFFSET UNITYSDK_OFFSET(0x12584A00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADGROUPSUITE_B__133_0_OFFSET UNITYSDK_OFFSET(0x12584AC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__195_0_OFFSET UNITYSDK_OFFSET(0x12584B80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__195_1_OFFSET UNITYSDK_OFFSET(0x12584C00)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c_TypeDefinitionIndex = 73620;

	class ViewObjectManager___c : public ::System::Object
	{
	public:
		static ::Foundation::ViewObject::ViewObjectManager___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::ViewObjectManager___c**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager___c_TypeDefinitionIndex)->GetStaticField(0x3B6E0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__133_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager___c_TypeDefinitionIndex)->GetStaticField(0x3B6E8);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__132_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager___c_TypeDefinitionIndex)->GetStaticField(0x3B6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _DoReloadAllGroup_b__132_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADALLGROUP_B__132_0_OFFSET))(this);
		}

		::System::Boolean _DoReloadGroupSuite_b__133_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADGROUPSUITE_B__133_0_OFFSET))(this);
		}

		::System::Void __cctor_b__195_0(::Foundation::ViewObject::ViewObject*& value, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*> handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObject*&, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*>))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__195_0_OFFSET))(this, value, handle);
		}

		::System::Void __cctor_b__195_1(::Foundation::ViewObject::ViewObject*& value, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*> handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObject*&, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*>))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__195_1_OFFSET))(this, value, handle);
		}
	};
}
