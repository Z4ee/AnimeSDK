#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MonoEffectPluginWaterColor; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_CDB0B70212C8BF02_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA519A0)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_19B6311C06D9EFFF_OFFSET UNITYSDK_OFFSET(0xAA518C0)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_2A0F641337364AF8_OFFSET UNITYSDK_OFFSET(0xAA51E80)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAA519F0)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0xAA51A80)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xAA52070)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_AE80CBC984AADFD5_1_OFFSET UNITYSDK_OFFSET(0xAA51ED0)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0xAA51C30)
#define CLASS_2_CDB0B70212C8BF02__CTOR_OFFSET UNITYSDK_OFFSET(0xAA52060)
#define CLASS_2_CDB0B70212C8BF02___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA520E0)

inline static constexpr unsigned int Class_2_CDB0B70212C8BF02_TypeDefinitionIndex = 64439;

class Class_2_CDB0B70212C8BF02 : public ::RPG::Client::BehaviorBase
{
public:
	::Il2CppArray<::UnityEngine::Color>* Field_2_2; // 0x18
	::RPG::Client::MonoEffectPluginWaterColor* Field_2_0; // 0x20
	::UnityEngine::Color Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_19B6311C06D9EFFF(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_19B6311C06D9EFFF_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_45714050EDEF8291_OFFSET))(this);
	}

	::System::Void Method_2_2A0F641337364AF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_2A0F641337364AF8_OFFSET))(this);
	}

	::System::Void Method_2_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void Method_2_AE80CBC984AADFD5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_AE80CBC984AADFD5_1_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
