#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/JigsawItemDirection.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_JIGSAWITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x161057C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawItemData_TypeDefinitionIndex = 78175;

	class JigsawItemData : public ::System::Object
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 type; // 0x18
		::System::Int32 order; // 0x1C
		::RPG::Client::Prop::JigsawItemDirection direction; // 0x20
		::RPG::Client::Prop::JigsawItemDirection initDirection; // 0x24
		::System::Boolean isSuccess; // 0x28
		::System::Boolean isInBoard; // 0x29
		::System::Boolean isInUIDragging; // 0x2A

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::Prop::JigsawItemDirection a4, ::RPG::Client::Prop::JigsawItemDirection a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::JigsawItemDirection, ::RPG::Client::Prop::JigsawItemDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWITEMDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
