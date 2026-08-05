#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UICharInfo.h"
#include "unitysdk/UnityEngine/UILineInfo.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LAUNCHER___C_METHOD_1_01AAE46B8E5D55ED_OFFSET UNITYSDK_OFFSET(0x1925ACF0)
#define MOLEMOLE_LAUNCHER___C_METHOD_1_0A26DE1C53BB0099_OFFSET UNITYSDK_OFFSET(0x1925B2B0)
#define MOLEMOLE_LAUNCHER___C_METHOD_1_23364292627D4499_OFFSET UNITYSDK_OFFSET(0x1925B240)
#define MOLEMOLE_LAUNCHER___C_METHOD_1_97D83E4CB3B11934_OFFSET UNITYSDK_OFFSET(0x1925AED0)
#define MOLEMOLE_LAUNCHER___C_METHOD_1_AF47FBB371790663_OFFSET UNITYSDK_OFFSET(0x1925ADE0)
#define MOLEMOLE_LAUNCHER___C_METHOD_1_DEE91223AB076D0F_OFFSET UNITYSDK_OFFSET(0x1925AD70)
#define MOLEMOLE_LAUNCHER___C_METHOD_1_F1D80861F2C9A0B3_OFFSET UNITYSDK_OFFSET(0x1925AE50)
#define MOLEMOLE_LAUNCHER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1925ACA0)
#define MOLEMOLE_LAUNCHER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1925ACE0)

namespace MoleMole
{
	inline static constexpr unsigned int Launcher___c_TypeDefinitionIndex = 42427;

	class Launcher___c : public ::System::Object
	{
	public:
		static ::MoleMole::Launcher___c** StaticGet___9()
		{
			return (::MoleMole::Launcher___c**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3CBC0);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>** StaticGet___9__38_2()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3CBC8);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>** StaticGet___9__38_0()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3CBD0);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>** StaticGet___9__38_1()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3CBD8);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>** StaticGet___9__38_3()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3CBE0);
		}
		static ::System::Action** StaticGet___9__48_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3CBE8);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>** StaticGet___9__38_4()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3CBF0);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>** StaticGet___9__38_5()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(Launcher___c_TypeDefinitionIndex)->GetStaticField(0x3CBF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_01AAE46B8E5D55ED(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_METHOD_1_01AAE46B8E5D55ED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* Method_1_DEE91223AB076D0F()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_METHOD_1_DEE91223AB076D0F_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* Method_1_AF47FBB371790663()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_METHOD_1_AF47FBB371790663_OFFSET))(this);
		}

		::System::Void Method_1_F1D80861F2C9A0B3(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_METHOD_1_F1D80861F2C9A0B3_OFFSET))(this, a1);
		}

		::System::Void Method_1_97D83E4CB3B11934()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_METHOD_1_97D83E4CB3B11934_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* Method_1_23364292627D4499()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_METHOD_1_23364292627D4499_OFFSET))(this);
		}

		::System::Void Method_1_0A26DE1C53BB0099(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER___C_METHOD_1_0A26DE1C53BB0099_OFFSET))(this, a1);
		}
	};
}
