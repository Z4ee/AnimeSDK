#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE9A5D00)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE9A5D40)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__SETGRIDITEMS_B__35_0_OFFSET UNITYSDK_OFFSET(0xE9A5D50)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopFlexibleGridView___c_TypeDefinitionIndex = 47645;

	class LoopFlexibleGridView___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet___9__35_0()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(LoopFlexibleGridView___c_TypeDefinitionIndex)->GetStaticField(0xFAB0);
		}
		static ::SuperScrollView::LoopFlexibleGridView___c** StaticGet___9()
		{
			return (::SuperScrollView::LoopFlexibleGridView___c**)Il2CppClass::FromTypeDefinitionIndex(LoopFlexibleGridView___c_TypeDefinitionIndex)->GetStaticField(0xFAB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetGridItems_b__35_0(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__SETGRIDITEMS_B__35_0_OFFSET))(this, a1);
		}
	};
}
