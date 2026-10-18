#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicJsonList; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE_METHOD_3_6978306236A0C3BA_OFFSET UNITYSDK_OFFSET(0x1D863490)
#define RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE_METHOD_3_F4D77E6C732F5DA3_OFFSET UNITYSDK_OFFSET(0x1D8634D0)
#define RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8634C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyAudienceGroupAnimType_TypeDefinitionIndex = 21880;

	class ModifyAudienceGroupAnimType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicJsonList* GroupMemberList; // 0x18
		::System::String* AnimTypeName; // 0x20
		::RPG::MVector2 WaitTimeRange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6978306236A0C3BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAudienceGroupAnimType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAudienceGroupAnimType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE_METHOD_3_6978306236A0C3BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4D77E6C732F5DA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAudienceGroupAnimType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAudienceGroupAnimType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE_METHOD_3_F4D77E6C732F5DA3_OFFSET))(a1, a2);
		}
	};
}
