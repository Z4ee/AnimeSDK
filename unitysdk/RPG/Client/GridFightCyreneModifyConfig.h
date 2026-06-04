#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightCyreneModifyConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_MODIFYOPS_OFFSET UNITYSDK_OFFSET(0xBB03CB0)
#define RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_MODIFYSKILLID_OFFSET UNITYSDK_OFFSET(0xBB03C70)
#define RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_MODIFYSKILLINDEXS_OFFSET UNITYSDK_OFFSET(0xBB03C90)
#define RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_MODIFYVALUES_OFFSET UNITYSDK_OFFSET(0xBB03CD0)
#define RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xBB03D10)
#define RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_VALUEKEY_OFFSET UNITYSDK_OFFSET(0xBB03CF0)
#define RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBB03C60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightCyreneModifyConfig_TypeDefinitionIndex = 60890;

	class GridFightCyreneModifyConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightCyreneModifyConfigRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightCyreneModifyConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ModifySkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_MODIFYSKILLID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ModifySkillIndexs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_MODIFYSKILLINDEXS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* get_ModifyOps()
		{
			return ((::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_MODIFYOPS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ModifyValues()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_MODIFYVALUES_OFFSET))(this);
		}

		::System::String* get_ValueKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_VALUEKEY_OFFSET))(this);
		}

		::RPG::GameCore::GridFightSkillType get_SkillType()
		{
			return ((::RPG::GameCore::GridFightSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCYRENEMODIFYCONFIG_GET_SKILLTYPE_OFFSET))(this);
		}
	};
}
