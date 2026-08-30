#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_43DAF783517768DF_OFFSET UNITYSDK_OFFSET(0x1DB36C00)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_6C6FE28CF39804B2_OFFSET UNITYSDK_OFFSET(0x1DB36C30)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_8AC1560785B44DF6_OFFSET UNITYSDK_OFFSET(0x1DB36A80)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_F04A42BC3CAF86B5_OFFSET UNITYSDK_OFFSET(0x1DB36AC0)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB36AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasBornSmartObject_TypeDefinitionIndex = 19846;

	class ST_ByHasBornSmartObject : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8AC1560785B44DF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasBornSmartObject*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasBornSmartObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_8AC1560785B44DF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F04A42BC3CAF86B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_F04A42BC3CAF86B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_43DAF783517768DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasBornSmartObject*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasBornSmartObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_43DAF783517768DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6C6FE28CF39804B2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_6C6FE28CF39804B2_OFFSET))(a1, a2);
		}
	};
}
