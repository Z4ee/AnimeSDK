#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoScrollerFadeManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1514AD80)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1514B5E0)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1514B640)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1514B5F0)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1514AD70)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED__CTOR_OFFSET UNITYSDK_OFFSET(0x1514AD60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScrollerFadeManager_Class_1_117D5B6A04BC9CED_TypeDefinitionIndex = 42963;

	class MonoScrollerFadeManager_Class_1_117D5B6A04BC9CED : public ::System::Object
	{
	public:
		::System::Object* Field_1_1; // 0x10
		::MoleMole::MonoScrollerFadeManager* Field_1_3; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* Field_1_7; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_1_4; // 0x28
		::System::Int32 Field_1_2; // 0x30
		::System::Single Field_1_6; // 0x34
		::System::Int32 Field_1_0; // 0x38
		::System::Int32 Field_1_5; // 0x3C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_CLASS_1_117D5B6A04BC9CED_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
