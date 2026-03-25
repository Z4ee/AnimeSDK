#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightCyreneModifyConfig; }
namespace RPG::Client { class GridFightRoleSkillDetail; }

#define CLASS_1_C27DD85F9F8C1933_METHOD_1_12F537110293C5D6_OFFSET UNITYSDK_OFFSET(0xD1A87E0)
#define CLASS_1_C27DD85F9F8C1933__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A87D0)

inline static constexpr unsigned int Class_1_C27DD85F9F8C1933_TypeDefinitionIndex = 53017;

class Class_1_C27DD85F9F8C1933 : public ::System::Object
{
public:
	::RPG::Client::GridFightCyreneModifyConfig* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::GridFightCyreneModifyConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightCyreneModifyConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C27DD85F9F8C1933__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_12F537110293C5D6(::RPG::Client::GridFightRoleSkillDetail* a1, ::System::UInt32 a2, ::RPG::GameCore::ModifyCalcOpType& a3, ::RPG::GameCore::FixPoint& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*, ::System::UInt32, ::RPG::GameCore::ModifyCalcOpType&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_C27DD85F9F8C1933_METHOD_1_12F537110293C5D6_OFFSET))(this, a1, a2, a3, a4);
	}
};
