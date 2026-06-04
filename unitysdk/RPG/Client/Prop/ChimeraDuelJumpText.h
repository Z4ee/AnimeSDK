#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelJumpTextType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_CHIMERADUELJUMPTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC50BDE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelJumpText_TypeDefinitionIndex = 72791;

	class ChimeraDuelJumpText : public ::System::Object
	{
	public:
		::System::Int32 ActualValue; // 0x10
		::System::Int32 InitialValue; // 0x14
		::RPG::Client::Prop::ChimeraDuelJumpTextType Type; // 0x18
		::System::Int32 ExpectedValue; // 0x1C
		::System::Int32 UniqueID; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::Prop::ChimeraDuelJumpTextType a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::Prop::ChimeraDuelJumpTextType, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELJUMPTEXT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
