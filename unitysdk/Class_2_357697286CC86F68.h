#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginNumber; }
namespace RPG::Client { class MonoEffectPluginNumber_RendererDigitData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_357697286CC86F68_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x11898E10)
#define CLASS_2_357697286CC86F68_METHOD_2_02E1573D7AF8AFB5_OFFSET UNITYSDK_OFFSET(0x118986D0)
#define CLASS_2_357697286CC86F68_METHOD_2_3C6C7344D76DB534_OFFSET UNITYSDK_OFFSET(0x11898BD0)
#define CLASS_2_357697286CC86F68_METHOD_2_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0x11898640)
#define CLASS_2_357697286CC86F68_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x118989C0)
#define CLASS_2_357697286CC86F68_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x11898E90)
#define CLASS_2_357697286CC86F68_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x118985D0)
#define CLASS_2_357697286CC86F68_METHOD_2_E69265148B895E7A_OFFSET UNITYSDK_OFFSET(0x11898730)
#define CLASS_2_357697286CC86F68_METHOD_2_E91872CDB6EC81F6_OFFSET UNITYSDK_OFFSET(0x11898C40)
#define CLASS_2_357697286CC86F68_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x11898E20)
#define CLASS_2_357697286CC86F68__CTOR_OFFSET UNITYSDK_OFFSET(0x11898E30)

inline static constexpr unsigned int Class_2_357697286CC86F68_TypeDefinitionIndex = 64419;

class Class_2_357697286CC86F68 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x18
	::System::Int32 _CurrentValue_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_4B16404ED490414F_OFFSET))(this);
	}

	::System::Void Method_2_02E1573D7AF8AFB5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_02E1573D7AF8AFB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_E69265148B895E7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_E69265148B895E7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_E91872CDB6EC81F6(::RPG::Client::MonoEffectPluginNumber_RendererDigitData* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginNumber_RendererDigitData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_E91872CDB6EC81F6_OFFSET))(this, a1, a2);
	}

	::System::Int32 get_CurrentValue()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_GET_CURRENTVALUE_OFFSET))(this);
	}

	::System::Void set_CurrentValue(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_SET_CURRENTVALUE_OFFSET))(this, value);
	}

	::RPG::Client::MonoEffectPluginNumber* Method_2_3C6C7344D76DB534()
	{
		return ((::RPG::Client::MonoEffectPluginNumber*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_3C6C7344D76DB534_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
