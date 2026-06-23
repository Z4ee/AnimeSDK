#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGMeshProperties; }
namespace FluffyUnderware::Curvy::Generator { class CGVMesh; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Mesh; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC8FFB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8FFF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__REFRESH_B__8_0_OFFSET UNITYSDK_OFFSET(0x1DC90000)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__REFRESH_B__8_1_OFFSET UNITYSDK_OFFSET(0x1DC90110)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__WARNABOUTINVALIDINPUTS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1DC902A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__WARNABOUTINVALIDINPUTS_B__10_1_OFFSET UNITYSDK_OFFSET(0x1DC903B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__WARNABOUTINVALIDINPUTS_B__10_2_OFFSET UNITYSDK_OFFSET(0x1DC903D0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int InputMesh___c_TypeDefinitionIndex = 38841;

	class InputMesh___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGMeshProperties*, ::UnityEngine::Mesh*>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGMeshProperties*, ::UnityEngine::Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(InputMesh___c_TypeDefinitionIndex)->GetStaticField(0x29560);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGMeshProperties*, ::FluffyUnderware::Curvy::Generator::CGVMesh*>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGMeshProperties*, ::FluffyUnderware::Curvy::Generator::CGVMesh*>**)Il2CppClass::FromTypeDefinitionIndex(InputMesh___c_TypeDefinitionIndex)->GetStaticField(0x29568);
		}
		static ::FluffyUnderware::Curvy::Generator::Modules::InputMesh___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::Modules::InputMesh___c**)Il2CppClass::FromTypeDefinitionIndex(InputMesh___c_TypeDefinitionIndex)->GetStaticField(0x29570);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGMeshProperties*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGMeshProperties*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(InputMesh___c_TypeDefinitionIndex)->GetStaticField(0x29578);
		}
		static ::System::Func_2<::UnityEngine::Mesh*, ::System::Boolean>** StaticGet___9__10_2()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(InputMesh___c_TypeDefinitionIndex)->GetStaticField(0x29580);
		}
		static ::System::Predicate_1<::FluffyUnderware::Curvy::Generator::CGMeshProperties*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::FluffyUnderware::Curvy::Generator::CGMeshProperties*>**)Il2CppClass::FromTypeDefinitionIndex(InputMesh___c_TypeDefinitionIndex)->GetStaticField(0x29588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Refresh_b__8_0(::FluffyUnderware::Curvy::Generator::CGMeshProperties* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGMeshProperties*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__REFRESH_B__8_0_OFFSET))(this, p);
		}

		::FluffyUnderware::Curvy::Generator::CGVMesh* _Refresh_b__8_1(::FluffyUnderware::Curvy::Generator::CGMeshProperties* p)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGVMesh*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGMeshProperties*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__REFRESH_B__8_1_OFFSET))(this, p);
		}

		::System::Boolean _WarnAboutInvalidInputs_b__10_0(::FluffyUnderware::Curvy::Generator::CGMeshProperties* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGMeshProperties*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__WARNABOUTINVALIDINPUTS_B__10_0_OFFSET))(this, m);
		}

		::UnityEngine::Mesh* _WarnAboutInvalidInputs_b__10_1(::FluffyUnderware::Curvy::Generator::CGMeshProperties* p)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGMeshProperties*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__WARNABOUTINVALIDINPUTS_B__10_1_OFFSET))(this, p);
		}

		::System::Boolean _WarnAboutInvalidInputs_b__10_2(::UnityEngine::Mesh* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH___C__WARNABOUTINVALIDINPUTS_B__10_2_OFFSET))(this, m);
		}
	};
}
