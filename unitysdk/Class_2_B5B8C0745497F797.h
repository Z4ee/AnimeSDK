#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/ParticlePlaybackStatus.h"

class Class_2_B5B8C0745497F797_Class_1_9AEC13984F2929EB;
namespace RPG::Client { class MonoEffectPluginParticleBackward; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_B5B8C0745497F797_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17077D90)
#define CLASS_2_B5B8C0745497F797_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x17077E60)
#define CLASS_2_B5B8C0745497F797_METHOD_2_23B4906483FADB36_OFFSET UNITYSDK_OFFSET(0x17078380)
#define CLASS_2_B5B8C0745497F797_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x17079140)
#define CLASS_2_B5B8C0745497F797_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x17078220)
#define CLASS_2_B5B8C0745497F797_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x17078180)
#define CLASS_2_B5B8C0745497F797_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x17077D20)
#define CLASS_2_B5B8C0745497F797_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17078140)
#define CLASS_2_B5B8C0745497F797_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17077E00)
#define CLASS_2_B5B8C0745497F797_METHOD_2_D5515835079D60BA_OFFSET UNITYSDK_OFFSET(0x170783F0)
#define CLASS_2_B5B8C0745497F797__CTOR_OFFSET UNITYSDK_OFFSET(0x170793B0)

inline static constexpr unsigned int Class_2_B5B8C0745497F797_TypeDefinitionIndex = 66751;

class Class_2_B5B8C0745497F797 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::Class_2_B5B8C0745497F797_Class_1_9AEC13984F2929EB*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28
	::System::Int32 Field_2_3; // 0x2C
	::System::Int32 Field_2_4; // 0x30
	::System::Int32 Field_2_5; // 0x34
	::RPG::Client::ParticlePlaybackStatus Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_2_D5515835079D60BA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797_METHOD_2_D5515835079D60BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginParticleBackward* Method_2_23B4906483FADB36()
	{
		return ((::RPG::Client::MonoEffectPluginParticleBackward*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5B8C0745497F797_METHOD_2_23B4906483FADB36_OFFSET))(this);
	}
};
