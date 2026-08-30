#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UIOPERATION_METHOD_2_99E37070C2F40B32_OFFSET UNITYSDK_OFFSET(0x1D2AB130)
#define RPG_GAMECORE_UIOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AB400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIOperation_TypeDefinitionIndex = 24145;

	class UIOperation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::Single Indent; // 0x18
		::System::Int32 SafeAreaIndentRatio; // 0x1C
		::System::Single OffsetLeft; // 0x20
		::System::Single OffsetRight; // 0x24
		::System::Single ScaleX; // 0x28
		::System::Single ScaleY; // 0x2C
		::System::Single ScaleZ; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_99E37070C2F40B32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIOPERATION_METHOD_2_99E37070C2F40B32_OFFSET))(a1, a2);
		}
	};
}
