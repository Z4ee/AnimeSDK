#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CLASS_3_101FB938C28FF305_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x16583F50)
#define CLASS_3_101FB938C28FF305_METHOD_3_ED70800534CD3957_OFFSET UNITYSDK_OFFSET(0x16583A80)
#define CLASS_3_101FB938C28FF305_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x16583B10)
#define CLASS_3_101FB938C28FF305_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16583BA0)
#define CLASS_3_101FB938C28FF305__CTOR_OFFSET UNITYSDK_OFFSET(0x16583FA0)

inline static constexpr unsigned int Class_3_101FB938C28FF305_TypeDefinitionIndex = 65908;

class Class_3_101FB938C28FF305 : public ::Class_2_980BB27C20DEC196
{
public:
	// static const ::System::Single JCENJMALKBB; // 0x0
	::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* HPINJBJLCBB; // 0x28
	::UnityEngine::Vector2 ICGKFDEILKA; // 0x30
	::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x38
	::System::UInt32 KLOEJIMMPJM; // 0x3C
	::System::Boolean OBMMJLCPNGA; // 0x40
	::System::Boolean LLMLOGNFFCD; // 0x41
	::System::UInt32 JCAEANLAGMB; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_101FB938C28FF305__CTOR_OFFSET))(this);
	}

	static ::Class_3_101FB938C28FF305* Method_3_ED70800534CD3957(::RPG::Client::MatchThreeBoard* a1, ::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* a2)
	{
		return ((::Class_3_101FB938C28FF305*(*)(::RPG::Client::MatchThreeBoard*, ::RPG::Client::LittleGame::Match3EnergyViewStateBuffer*))((::PBYTE)hIl2Cpp + CLASS_3_101FB938C28FF305_METHOD_3_ED70800534CD3957_OFFSET))(a1, a2);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_101FB938C28FF305_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_101FB938C28FF305_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_101FB938C28FF305_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
