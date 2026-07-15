#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightCyreneModifyConfig; }
namespace RPG::Client { class GridFightRoleSkillDetail; }

#define CLASS_1_CF27A3C67D8DD499_METHOD_1_ADD6B66E9BD6C8BF_OFFSET UNITYSDK_OFFSET(0x158D5A60)
#define CLASS_1_CF27A3C67D8DD499__CTOR_OFFSET UNITYSDK_OFFSET(0x158D5A50)

inline static constexpr unsigned int Class_1_CF27A3C67D8DD499_TypeDefinitionIndex = 62364;

class Class_1_CF27A3C67D8DD499 : public ::System::Object
{
public:
	::RPG::Client::GridFightCyreneModifyConfig* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::GridFightCyreneModifyConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightCyreneModifyConfig*))((::PBYTE)hIl2Cpp + CLASS_1_CF27A3C67D8DD499__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ADD6B66E9BD6C8BF(::RPG::Client::GridFightRoleSkillDetail* a1, ::System::UInt32 a2, ::RPG::GameCore::ModifyCalcOpType& a3, ::RPG::GameCore::FixPoint& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*, ::System::UInt32, ::RPG::GameCore::ModifyCalcOpType&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_CF27A3C67D8DD499_METHOD_1_ADD6B66E9BD6C8BF_OFFSET))(this, a1, a2, a3, a4);
	}
};
