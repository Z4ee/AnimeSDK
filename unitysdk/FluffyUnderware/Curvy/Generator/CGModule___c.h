#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleSlot; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E656F20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E656F60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DECREMENTCHILDS_B__116_0_OFFSET UNITYSDK_OFFSET(0x1E657040)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DECREMENTCHILDS_B__116_1_OFFSET UNITYSDK_OFFSET(0x1E6570F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DECREMENTCHILDS_B__116_2_OFFSET UNITYSDK_OFFSET(0x1E657120)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__INITIALIZESORT_B__115_0_OFFSET UNITYSDK_OFFSET(0x1E656F70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__INITIALIZESORT_B__115_1_OFFSET UNITYSDK_OFFSET(0x1E656F90)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule___c_TypeDefinitionIndex = 38908;

	class CGModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleSlot*, ::System::Boolean>** StaticGet___9__116_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleSlot*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CGModule___c_TypeDefinitionIndex)->GetStaticField(0x29480);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModuleSlot*>*>** StaticGet___9__116_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModuleSlot*>*>**)Il2CppClass::FromTypeDefinitionIndex(CGModule___c_TypeDefinitionIndex)->GetStaticField(0x29488);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleSlot*, ::FluffyUnderware::Curvy::Generator::CGModule*>** StaticGet___9__116_2()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleSlot*, ::FluffyUnderware::Curvy::Generator::CGModule*>**)Il2CppClass::FromTypeDefinitionIndex(CGModule___c_TypeDefinitionIndex)->GetStaticField(0x29490);
		}
		static ::FluffyUnderware::Curvy::Generator::CGModule___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::CGModule___c**)Il2CppClass::FromTypeDefinitionIndex(CGModule___c_TypeDefinitionIndex)->GetStaticField(0x29498);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Int32>** StaticGet___9__115_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CGModule___c_TypeDefinitionIndex)->GetStaticField(0x294A0);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Boolean>** StaticGet___9__115_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CGModule___c_TypeDefinitionIndex)->GetStaticField(0x294A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _initializeSort_b__115_0(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__INITIALIZESORT_B__115_0_OFFSET))(this, t);
		}

		::System::Int32 _initializeSort_b__115_1(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* t)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__INITIALIZESORT_B__115_1_OFFSET))(this, t);
		}

		::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModuleSlot*>* _decrementChilds_b__116_0(::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* outputSlot)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModuleSlot*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DECREMENTCHILDS_B__116_0_OFFSET))(this, outputSlot);
		}

		::System::Boolean _decrementChilds_b__116_1(::FluffyUnderware::Curvy::Generator::CGModuleSlot* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DECREMENTCHILDS_B__116_1_OFFSET))(this, t);
		}

		::FluffyUnderware::Curvy::Generator::CGModule* _decrementChilds_b__116_2(::FluffyUnderware::Curvy::Generator::CGModuleSlot* t)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModule*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DECREMENTCHILDS_B__116_2_OFFSET))(this, t);
		}
	};
}
