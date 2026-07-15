#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginNumber; }
namespace RPG::Client { class MonoEffectPluginNumber_RendererDigitData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_357697286CC86F68_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x14D90D30)
#define CLASS_2_357697286CC86F68_METHOD_2_1E8FE4F91B9E3E3B_OFFSET UNITYSDK_OFFSET(0x14D905F0)
#define CLASS_2_357697286CC86F68_METHOD_2_562D8672049AEB49_OFFSET UNITYSDK_OFFSET(0x14D90590)
#define CLASS_2_357697286CC86F68_METHOD_2_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0x14D90500)
#define CLASS_2_357697286CC86F68_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x14D90490)
#define CLASS_2_357697286CC86F68_METHOD_2_BC12E94833E6323D_OFFSET UNITYSDK_OFFSET(0x14D90B00)
#define CLASS_2_357697286CC86F68_METHOD_2_E91872CDB6EC81F6_OFFSET UNITYSDK_OFFSET(0x14D90B70)
#define CLASS_2_357697286CC86F68_METHOD_2_FFBC3E5986CAC663_OFFSET UNITYSDK_OFFSET(0x14D908B0)
#define CLASS_2_357697286CC86F68_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x14D90D40)
#define CLASS_2_357697286CC86F68__CTOR_OFFSET UNITYSDK_OFFSET(0x14D90D50)

inline static constexpr unsigned int Class_2_357697286CC86F68_TypeDefinitionIndex = 66750;

class Class_2_357697286CC86F68 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x18
	::System::Int32 _CurrentValue_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::Void Method_2_562D8672049AEB49(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_562D8672049AEB49_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E8FE4F91B9E3E3B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_1E8FE4F91B9E3E3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFBC3E5986CAC663()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_FFBC3E5986CAC663_OFFSET))(this);
	}

	::System::Void Method_2_E91872CDB6EC81F6(::RPG::Client::MonoEffectPluginNumber_RendererDigitData* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginNumber_RendererDigitData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_E91872CDB6EC81F6_OFFSET))(this, a1, a2);
	}

	::System::Int32 get_CurrentValue()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_GET_CURRENTVALUE_OFFSET))(this);
	}

	::System::Void set_CurrentValue(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_SET_CURRENTVALUE_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginNumber* Method_2_BC12E94833E6323D()
	{
		return ((::RPG::Client::MonoEffectPluginNumber*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_357697286CC86F68_METHOD_2_BC12E94833E6323D_OFFSET))(this);
	}
};
