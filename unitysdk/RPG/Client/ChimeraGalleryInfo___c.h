#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraGalleryActData; }
namespace RPG::Client { class ChimeraGalleryGroupedTalkData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHIMERAGALLERYINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x93BD580)
#define RPG_CLIENT_CHIMERAGALLERYINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93BD5B0)
#define RPG_CLIENT_CHIMERAGALLERYINFO___C__GETGALLERYTALKS_B__6_1_OFFSET UNITYSDK_OFFSET(0x93BD730)
#define RPG_CLIENT_CHIMERAGALLERYINFO___C__INIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x93BD5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGalleryInfo___c_TypeDefinitionIndex = 51496;

	class ChimeraGalleryInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraGalleryInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraGalleryInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraGalleryInfo___c_TypeDefinitionIndex)->GetStaticField(0x472E0);
		}
		static ::System::Comparison_1<::RPG::Client::ChimeraGalleryActData*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChimeraGalleryActData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraGalleryInfo___c_TypeDefinitionIndex)->GetStaticField(0x472E8);
		}
		static ::System::Func_2<::RPG::Client::ChimeraGalleryGroupedTalkData*, ::System::Single>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::Client::ChimeraGalleryGroupedTalkData*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraGalleryInfo___c_TypeDefinitionIndex)->GetStaticField(0x472F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Init_b__5_0(::RPG::Client::ChimeraGalleryActData* a, ::RPG::Client::ChimeraGalleryActData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraGalleryActData*, ::RPG::Client::ChimeraGalleryActData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYINFO___C__INIT_B__5_0_OFFSET))(this, a, b);
		}

		::System::Single _GetGalleryTalks_b__6_1(::RPG::Client::ChimeraGalleryGroupedTalkData* data)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::ChimeraGalleryGroupedTalkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYINFO___C__GETGALLERYTALKS_B__6_1_OFFSET))(this, data);
		}
	};
}
