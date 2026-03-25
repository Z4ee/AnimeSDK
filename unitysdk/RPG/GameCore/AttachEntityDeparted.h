#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ATTACHENTITYDEPARTED_METHOD_3_7612907818328953_OFFSET UNITYSDK_OFFSET(0x16F8A100)
#define RPG_GAMECORE_ATTACHENTITYDEPARTED_METHOD_3_A7409A602B16818A_OFFSET UNITYSDK_OFFSET(0x16F8A080)
#define RPG_GAMECORE_ATTACHENTITYDEPARTED__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8A0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachEntityDeparted_TypeDefinitionIndex = 21848;

	class AttachEntityDeparted : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ConfigGroupName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYDEPARTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A7409A602B16818A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachEntityDeparted*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachEntityDeparted*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYDEPARTED_METHOD_3_A7409A602B16818A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7612907818328953(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachEntityDeparted* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachEntityDeparted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYDEPARTED_METHOD_3_7612907818328953_OFFSET))(a1, a2);
		}
	};
}
