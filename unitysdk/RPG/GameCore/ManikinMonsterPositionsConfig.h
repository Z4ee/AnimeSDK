#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MANIKINMONSTERPOSITIONSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A86E20)
#define RPG_GAMECORE_MANIKINMONSTERPOSITIONSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A870D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinMonsterPositionsConfig_TypeDefinitionIndex = 16587;

	class ManikinMonsterPositionsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Common; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* ShortCommon; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* FloatingCommon; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* FloatingSphere; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Sphere; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINMONSTERPOSITIONSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ManikinMonsterPositionsConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManikinMonsterPositionsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINMONSTERPOSITIONSCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
