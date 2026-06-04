#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class ChimeraDuelChimeraOutlineDrawer_OutlineConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_METHOD_5_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xC504CC0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_METHOD_5_57F7BB65B90E8E3D_OFFSET UNITYSDK_OFFSET(0xC504710)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC508220)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER__CTOR_OFFSET UNITYSDK_OFFSET(0xC508160)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelChimeraOutlineDrawer_TypeDefinitionIndex = 72847;

	class ChimeraDuelChimeraOutlineDrawer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraOutlineDrawer_TypeDefinitionIndex)->GetStaticField(0x7840);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraOutlineDrawer_TypeDefinitionIndex)->GetStaticField(0x7844);
		}
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::RPG::Client::Prop::ChimeraDuelChimeraOutlineDrawer_OutlineConfig*>* Field_5_2; // 0x18
		::RPG::Client::Prop::ChimeraDuelChimeraOutlineDrawer_OutlineConfig* _HighlightOutlineConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER__CCTOR_OFFSET))();
		}

		::System::Void Method_5_57F7BB65B90E8E3D(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_METHOD_5_57F7BB65B90E8E3D_OFFSET))(this, a1);
		}

		::System::Void Method_5_52607DE4C357D269()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_METHOD_5_52607DE4C357D269_OFFSET))(this);
		}
	};
}
