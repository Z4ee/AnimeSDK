#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialReplacerBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_LEVELNPCMATERIALREPLACER_CHANGENPCMATERIAL_OFFSET UNITYSDK_OFFSET(0x194F8180)
#define RPG_CLIENT_LEVELNPCMATERIALREPLACER_METHOD_6_BFC434719CC16F3C_OFFSET UNITYSDK_OFFSET(0x194F8330)
#define RPG_CLIENT_LEVELNPCMATERIALREPLACER_REPLACEMATERIAL_OFFSET UNITYSDK_OFFSET(0x194F81D0)
#define RPG_CLIENT_LEVELNPCMATERIALREPLACER__CTOR_OFFSET UNITYSDK_OFFSET(0x194F83C0)

namespace RPG::Client
{
	inline static constexpr unsigned int LevelNpcMaterialReplacer_TypeDefinitionIndex = 69002;

	class LevelNpcMaterialReplacer : public ::RPG::Client::MaterialReplacerBase
	{
	public:
		::System::UInt32 NPCID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELNPCMATERIALREPLACER__CTOR_OFFSET))(this);
		}

		::System::Void ChangeNpcMaterial(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELNPCMATERIALREPLACER_CHANGENPCMATERIAL_OFFSET))(this, a1);
		}

		::System::Void ReplaceMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELNPCMATERIALREPLACER_REPLACEMATERIAL_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*> Method_6_BFC434719CC16F3C()
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELNPCMATERIALREPLACER_METHOD_6_BFC434719CC16F3C_OFFSET))(this);
		}
	};
}
