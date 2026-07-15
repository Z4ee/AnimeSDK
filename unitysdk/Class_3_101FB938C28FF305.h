#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CLASS_3_101FB938C28FF305_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x169E6AE0)
#define CLASS_3_101FB938C28FF305_METHOD_3_ED70800534CD3957_OFFSET UNITYSDK_OFFSET(0x169E6610)
#define CLASS_3_101FB938C28FF305_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x169E66A0)
#define CLASS_3_101FB938C28FF305_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x169E6730)
#define CLASS_3_101FB938C28FF305__CTOR_OFFSET UNITYSDK_OFFSET(0x169E6B30)

inline static constexpr unsigned int Class_3_101FB938C28FF305_TypeDefinitionIndex = 62923;

class Class_3_101FB938C28FF305 : public ::Class_2_980BB27C20DEC196
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* Field_3_1; // 0x28
	::System::UInt32 Field_3_2; // 0x30
	::RPG::Client::LittleGame::Match3::OpponentRole Field_3_3; // 0x34
	::UnityEngine::Vector2 Field_3_4; // 0x38
	::System::Boolean Field_3_5; // 0x40
	::System::Boolean Field_3_6; // 0x41
	::System::UInt32 Field_3_7; // 0x44

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
