#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_17282789426EAD93.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace UnityEngine { class Transform; }

#define CLASS_3_B9ACF7F0BF65DCA3_METHOD_3_7E401B11A0C98AA1_OFFSET UNITYSDK_OFFSET(0xB77F040)
#define CLASS_3_B9ACF7F0BF65DCA3_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB77F190)
#define CLASS_3_B9ACF7F0BF65DCA3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB77F0D0)
#define CLASS_3_B9ACF7F0BF65DCA3__CTOR_OFFSET UNITYSDK_OFFSET(0xB77F210)
#define CLASS_3_B9ACF7F0BF65DCA3__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0xB77F220)
#define CLASS_3_B9ACF7F0BF65DCA3___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB77F290)
#define CLASS_3_B9ACF7F0BF65DCA3___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB77F230)

inline static constexpr unsigned int Class_3_B9ACF7F0BF65DCA3_TypeDefinitionIndex = 69545;

class Class_3_B9ACF7F0BF65DCA3 : public ::Class_2_17282789426EAD93
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

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9ACF7F0BF65DCA3___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9ACF7F0BF65DCA3___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
