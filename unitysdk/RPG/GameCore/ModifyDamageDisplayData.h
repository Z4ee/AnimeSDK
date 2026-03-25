#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA_METHOD_3_01F104D8A4E53611_OFFSET UNITYSDK_OFFSET(0x17430240)
#define RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA_METHOD_3_6BF42959DAD931F6_OFFSET UNITYSDK_OFFSET(0x174301A0)
#define RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17430200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyDamageDisplayData_TypeDefinitionIndex = 21295;

	class ModifyDamageDisplayData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Single Scale; // 0x1C
		::RPG::Client::TextID ExtraDesc; // 0x20
		::System::String* UIAnim; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6BF42959DAD931F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyDamageDisplayData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyDamageDisplayData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA_METHOD_3_6BF42959DAD931F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_01F104D8A4E53611(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyDamageDisplayData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyDamageDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA_METHOD_3_01F104D8A4E53611_OFFSET))(a1, a2);
		}
	};
}
