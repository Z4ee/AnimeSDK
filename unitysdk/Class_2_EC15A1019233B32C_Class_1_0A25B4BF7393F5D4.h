#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_EC15A1019233B32C;
namespace MoleMole { class UIGachaOptItemRowWidgetController_Context; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14134490)
#define CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_CONTEXT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14134B70)
#define CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_CONTEXT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14134B00)
#define CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14134BF0)
#define CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14134B60)
#define CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14134B10)
#define CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14134480)
#define CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4__CTOR_OFFSET UNITYSDK_OFFSET(0x14134460)

inline static constexpr unsigned int Class_2_EC15A1019233B32C_Class_1_0A25B4BF7393F5D4_TypeDefinitionIndex = 73954;

class Class_2_EC15A1019233B32C_Class_1_0A25B4BF7393F5D4 : public ::System::Object
{
public:
	::MoleMole::UIGachaOptItemRowWidgetController_Context* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x18
	::Class_2_EC15A1019233B32C* Field_1_0; // 0x20
	::System::Int32 Field_1_5; // 0x28
	::System::Int32 Field_1_1; // 0x2C
	::System::Int32 Field_1_7; // 0x30
	::System::Int32 Field_1_3; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_MOVENEXT_OFFSET))(this);
	}

	::MoleMole::UIGachaOptItemRowWidgetController_Context* System_Collections_Generic_IEnumerator_MoleMole_UIGachaOptItemRowWidgetController_Context__get_Current()
	{
		return ((::MoleMole::UIGachaOptItemRowWidgetController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_CONTEXT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::MoleMole::UIGachaOptItemRowWidgetController_Context*>* System_Collections_Generic_IEnumerable_MoleMole_UIGachaOptItemRowWidgetController_Context__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::MoleMole::UIGachaOptItemRowWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_CONTEXT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC15A1019233B32C_CLASS_1_0A25B4BF7393F5D4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
