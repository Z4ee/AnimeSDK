#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5F69A1738A3628CB.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace UnityEngine { class Transform; }

#define CLASS_3_B9ACF7F0BF65DCA3_METHOD_3_7E401B11A0C98AA1_OFFSET UNITYSDK_OFFSET(0x169C0E10)
#define CLASS_3_B9ACF7F0BF65DCA3_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x169C0F60)
#define CLASS_3_B9ACF7F0BF65DCA3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x169C0EA0)
#define CLASS_3_B9ACF7F0BF65DCA3__CTOR_OFFSET UNITYSDK_OFFSET(0x169C0FE0)
#define CLASS_3_B9ACF7F0BF65DCA3__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x169C0FF0)

inline static constexpr unsigned int Class_3_B9ACF7F0BF65DCA3_TypeDefinitionIndex = 71068;

class Class_3_B9ACF7F0BF65DCA3 : public ::Class_2_5F69A1738A3628CB
{
public:
	::UnityEngine::Transform* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9ACF7F0BF65DCA3__CTOR_OFFSET))(this);
	}

	static ::Class_3_B9ACF7F0BF65DCA3* Method_3_7E401B11A0C98AA1(::RPG::Client::PlanetFesFloatingController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::Class_3_B9ACF7F0BF65DCA3*(*)(::RPG::Client::PlanetFesFloatingController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_B9ACF7F0BF65DCA3_METHOD_3_7E401B11A0C98AA1_OFFSET))(a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9ACF7F0BF65DCA3_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9ACF7F0BF65DCA3_ONCLEAR_OFFSET))(this);
	}

	::System::Void _OnExecute_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9ACF7F0BF65DCA3__ONEXECUTE_B__1_0_OFFSET))(this);
	}
};
