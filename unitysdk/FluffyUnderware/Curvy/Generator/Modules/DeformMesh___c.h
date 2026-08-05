#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGSpots; }
namespace FluffyUnderware::Curvy::Generator { class CGVMesh; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFB5390)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB53D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__REFRESH_B__12_0_OFFSET UNITYSDK_OFFSET(0x1EFB5400)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__REFRESH_B__12_1_OFFSET UNITYSDK_OFFSET(0x1EFB53E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__TOONEDIMENSIONALARRAY_B__17_0_OFFSET UNITYSDK_OFFSET(0x1EFB5420)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__TOONEDIMENSIONALARRAY_B__17_1_OFFSET UNITYSDK_OFFSET(0x1EFB5430)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int DeformMesh___c_TypeDefinitionIndex = 39613;

	class DeformMesh___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGSpots*, ::System::Int32>** StaticGet___9__17_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGSpots*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DeformMesh___c_TypeDefinitionIndex)->GetStaticField(0x2AF40);
		}
		static ::System::Action_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>** StaticGet___9__12_0()
		{
			return (::System::Action_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>**)Il2CppClass::FromTypeDefinitionIndex(DeformMesh___c_TypeDefinitionIndex)->GetStaticField(0x2AF48);
		}
		static ::FluffyUnderware::Curvy::Generator::Modules::DeformMesh___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::Modules::DeformMesh___c**)Il2CppClass::FromTypeDefinitionIndex(DeformMesh___c_TypeDefinitionIndex)->GetStaticField(0x2AF50);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGSpots*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGSpots*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DeformMesh___c_TypeDefinitionIndex)->GetStaticField(0x2AF58);
		}
		static ::System::Action_1<::FluffyUnderware::Curvy::Generator::CGSpots*>** StaticGet___9__12_1()
		{
			return (::System::Action_1<::FluffyUnderware::Curvy::Generator::CGSpots*>**)Il2CppClass::FromTypeDefinitionIndex(DeformMesh___c_TypeDefinitionIndex)->GetStaticField(0x2AF60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__CTOR_OFFSET))(this);
		}

		::System::Void _Refresh_b__12_1(::FluffyUnderware::Curvy::Generator::CGSpots* s)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGSpots*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__REFRESH_B__12_1_OFFSET))(this, s);
		}

		::System::Void _Refresh_b__12_0(::FluffyUnderware::Curvy::Generator::CGVMesh* m)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVMesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__REFRESH_B__12_0_OFFSET))(this, m);
		}

		::System::Boolean _ToOneDimensionalArray_b__17_0(::FluffyUnderware::Curvy::Generator::CGSpots* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGSpots*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__TOONEDIMENSIONALARRAY_B__17_0_OFFSET))(this, s);
		}

		::System::Int32 _ToOneDimensionalArray_b__17_1(::FluffyUnderware::Curvy::Generator::CGSpots* s)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGSpots*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEFORMMESH___C__TOONEDIMENSIONALARRAY_B__17_1_OFFSET))(this, s);
		}
	};
}
