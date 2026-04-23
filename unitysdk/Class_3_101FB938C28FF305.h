#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CLASS_3_101FB938C28FF305_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0xCD1B8C0)
#define CLASS_3_101FB938C28FF305_METHOD_3_ED70800534CD3957_OFFSET UNITYSDK_OFFSET(0xCD1B400)
#define CLASS_3_101FB938C28FF305_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xCD1B490)
#define CLASS_3_101FB938C28FF305_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCD1B520)
#define CLASS_3_101FB938C28FF305__CTOR_OFFSET UNITYSDK_OFFSET(0xCD1B910)
#define CLASS_3_101FB938C28FF305___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xCD1B920)
#define CLASS_3_101FB938C28FF305___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCD1B980)

inline static constexpr unsigned int Class_3_101FB938C28FF305_TypeDefinitionIndex = 60627;

class Class_3_101FB938C28FF305 : public ::Class_2_E408E6D7F3D1822C
{
public:
	// static const ::System::Single Field_3_7; // 0x0
	::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* Field_3_5; // 0x28
	::System::Boolean Field_3_3; // 0x30
	::System::Boolean Field_3_2; // 0x31
	::System::UInt32 Field_3_4; // 0x34
	::System::UInt32 Field_3_1; // 0x38
	::RPG::Client::LittleGame::Match3::OpponentRole Field_3_6; // 0x3C
	::UnityEngine::Vector2 Field_3_0; // 0x40

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

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_101FB938C28FF305_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_101FB938C28FF305___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_101FB938C28FF305___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
