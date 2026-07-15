#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2_METHOD_3_688CB8CFBB10CD4E_OFFSET UNITYSDK_OFFSET(0x1D01A300)
#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2_METHOD_3_8901DE022FB29253_OFFSET UNITYSDK_OFFSET(0x1D01A2C0)
#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01A2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RequestSetServerGroupPropertyV2_TypeDefinitionIndex = 19947;

	class RequestSetServerGroupPropertyV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::RPG::GameCore::DynamicString* DynamicName; // 0x20
		::System::Int16 Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8901DE022FB29253(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RequestSetServerGroupPropertyV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RequestSetServerGroupPropertyV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2_METHOD_3_8901DE022FB29253_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_688CB8CFBB10CD4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RequestSetServerGroupPropertyV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RequestSetServerGroupPropertyV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2_METHOD_3_688CB8CFBB10CD4E_OFFSET))(a1, a2);
		}
	};
}
