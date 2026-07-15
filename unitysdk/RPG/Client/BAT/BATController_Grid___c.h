#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BAT_BATCONTROLLER_GRID___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1867A570)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1867A5B0)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID___C___UPDATE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1867A5C0)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATController_Grid___c_TypeDefinitionIndex = 70261;

	class BATController_Grid___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BAT::BATController_Grid___c** StaticGet___9()
		{
			return (::RPG::Client::BAT::BATController_Grid___c**)Il2CppClass::FromTypeDefinitionIndex(BATController_Grid___c_TypeDefinitionIndex)->GetStaticField(0x572C0);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Matrix4x4>*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Matrix4x4>*>**)Il2CppClass::FromTypeDefinitionIndex(BATController_Grid___c_TypeDefinitionIndex)->GetStaticField(0x572C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Matrix4x4>* __Update_b__3_0(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID___C___UPDATE_B__3_0_OFFSET))(this, a1);
		}
	};
}
