#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SHOWBUBBLE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17FBCB70)
#define NODEGRAPH_MAINCITY_SHOWBUBBLE___C__DISPLAYCLASS8_0__ONNODEACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0x17FBCB80)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int ShowBubble___c__DisplayClass8_0_TypeDefinitionIndex = 43203;

	class ShowBubble___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* mapping; // 0x10
		::System::Int32 tag; // 0x18
		::System::Int32 showBubble; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWBUBBLE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnNodeActive_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWBUBBLE___C__DISPLAYCLASS8_0__ONNODEACTIVE_B__0_OFFSET))(this);
		}
	};
}
