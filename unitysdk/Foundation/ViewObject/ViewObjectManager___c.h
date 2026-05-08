#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject { class ViewObject; }
namespace System { template <typename T> class Func_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114A4D30)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114A4D70)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADALLGROUP_B__113_0_OFFSET UNITYSDK_OFFSET(0x114A4D80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADGROUPSUITE_B__114_0_OFFSET UNITYSDK_OFFSET(0x114A4E40)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__162_0_OFFSET UNITYSDK_OFFSET(0x114A4F00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__162_1_OFFSET UNITYSDK_OFFSET(0x114A4F80)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c_TypeDefinitionIndex = 66390;

	class ViewObjectManager___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__114_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager___c_TypeDefinitionIndex)->GetStaticField(0x43FE0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__113_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager___c_TypeDefinitionIndex)->GetStaticField(0x43FE8);
		}
		static ::Foundation::ViewObject::ViewObjectManager___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::ViewObjectManager___c**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager___c_TypeDefinitionIndex)->GetStaticField(0x43FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _DoReloadAllGroup_b__113_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADALLGROUP_B__113_0_OFFSET))(this);
		}

		::System::Boolean _DoReloadGroupSuite_b__114_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DORELOADGROUPSUITE_B__114_0_OFFSET))(this);
		}

		::System::Void __cctor_b__162_0(::Foundation::ViewObject::ViewObject*& value, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*> handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObject*&, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*>))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__162_0_OFFSET))(this, value, handle);
		}

		::System::Void __cctor_b__162_1(::Foundation::ViewObject::ViewObject*& value, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*> handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObject*&, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Foundation::ViewObject::ViewObject*>))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C___CCTOR_B__162_1_OFFSET))(this, value, handle);
		}
	};
}
