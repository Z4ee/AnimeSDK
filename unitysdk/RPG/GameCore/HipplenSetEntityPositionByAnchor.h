#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR_METHOD_3_BE8B720B75DEDD28_OFFSET UNITYSDK_OFFSET(0x1D205980)
#define RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR_METHOD_3_DD18E6930B41EF21_OFFSET UNITYSDK_OFFSET(0x1D2059D0)
#define RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2059C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenSetEntityPositionByAnchor_TypeDefinitionIndex = 21071;

	class HipplenSetEntityPositionByAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HipplenGameTargetType Target; // 0x18
		::System::String* Param; // 0x20
		::System::String* AnchorName; // 0x28
		::System::Boolean ToGround; // 0x30
		::RPG::MVector3 Offset; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE8B720B75DEDD28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenSetEntityPositionByAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenSetEntityPositionByAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR_METHOD_3_BE8B720B75DEDD28_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD18E6930B41EF21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenSetEntityPositionByAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenSetEntityPositionByAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR_METHOD_3_DD18E6930B41EF21_OFFSET))(a1, a2);
		}
	};
}
