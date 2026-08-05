#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIVHSStoreDialogContext_Mode.h"

class Class_2_2B34123E20497912_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x151B9450)
#define MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x151B9440)
#define MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_PREVIEWTAGS_OFFSET UNITYSDK_OFFSET(0x151B9470)
#define MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x151B9460)
#define MOLEMOLE_UIVHSSTOREDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x151B9480)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreDialogContext_TypeDefinitionIndex = 50487;

	class UIVHSStoreDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_2B34123E20497912_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>* _slots_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _previewTags_k__BackingField; // 0x30
		::System::Func_1<::System::Collections::Generic::List_1<::System::Int32>*>* validVhsGetter; // 0x38
		::System::Func_2<::System::Int32, ::System::Boolean>* checkVhsInCd; // 0x40
		::System::Boolean _isReadonly_k__BackingField; // 0x48
		::MoleMole::UIVHSStoreDialogContext_Mode _mode_k__BackingField; // 0x4C

		::System::Void _ctor(::MoleMole::UIVHSStoreDialogContext_Mode mode, ::System::Boolean isReadonly, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_2B34123E20497912_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>* slots, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* previewTags)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreDialogContext_Mode, ::System::Boolean, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_2B34123E20497912_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGCONTEXT__CTOR_OFFSET))(this, mode, isReadonly, slots, previewTags);
		}

		::MoleMole::UIVHSStoreDialogContext_Mode get_mode()
		{
			return ((::MoleMole::UIVHSStoreDialogContext_Mode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_MODE_OFFSET))(this);
		}

		::System::Boolean get_isReadonly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_2_2B34123E20497912_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>* get_slots()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_2B34123E20497912_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_SLOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_previewTags()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_PREVIEWTAGS_OFFSET))(this);
		}
	};
}
