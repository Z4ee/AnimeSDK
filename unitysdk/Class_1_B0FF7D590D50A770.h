#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SceneEffectLod.h"

namespace MoleMole::Config { class EffectLODDataConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B0FF7D590D50A770_METHOD_1_0297A99E344CE506_1_OFFSET UNITYSDK_OFFSET(0x19F90890)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_0297A99E344CE506_2_OFFSET UNITYSDK_OFFSET(0x19F908E0)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_0297A99E344CE506_3_OFFSET UNITYSDK_OFFSET(0x19F90A20)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_0297A99E344CE506_OFFSET UNITYSDK_OFFSET(0x19F903D0)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_11CCB148E7603C47_OFFSET UNITYSDK_OFFSET(0x19F90480)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_2A27B20688C37707_OFFSET UNITYSDK_OFFSET(0x19F8FF80)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_3C0B62C29B086DB7_OFFSET UNITYSDK_OFFSET(0x19F901C0)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_4DB857AE9F2411C3_OFFSET UNITYSDK_OFFSET(0x19F906F0)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_661349A710ABEF5E_OFFSET UNITYSDK_OFFSET(0x19F90740)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_8EC336ADEF126780_OFFSET UNITYSDK_OFFSET(0x19F900E0)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_AEFAE6B063BF71A7_OFFSET UNITYSDK_OFFSET(0x19F90290)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_C7CDD7C60F10FD83_OFFSET UNITYSDK_OFFSET(0x19F90930)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_DB11C736C0498425_OFFSET UNITYSDK_OFFSET(0x19F90420)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_DDF0E3FE903D3AEC_1_OFFSET UNITYSDK_OFFSET(0x19F8FED0)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_DDF0E3FE903D3AEC_OFFSET UNITYSDK_OFFSET(0x19F8FE70)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_E2E047713797D3C6_OFFSET UNITYSDK_OFFSET(0x19F8FF20)
#define CLASS_1_B0FF7D590D50A770_METHOD_1_EA1D30465AE75EE4_OFFSET UNITYSDK_OFFSET(0x19F90800)
#define CLASS_1_B0FF7D590D50A770__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F8FE60)

inline static constexpr unsigned int Class_1_B0FF7D590D50A770_TypeDefinitionIndex = 50050;

class Class_1_B0FF7D590D50A770 : public ::System::Object
{
public:
	static ::MoleMole::Config::EffectLODDataConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::EffectLODDataConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0FF7D590D50A770_TypeDefinitionIndex)->GetStaticField(0x4B720);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::EffectLODType Method_1_DDF0E3FE903D3AEC(::System::Int32 a1)
	{
		return ((::MoleMole::Config::EffectLODType(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_DDF0E3FE903D3AEC_OFFSET))(a1);
	}

	static ::MoleMole::Config::EffectLODType Method_1_DDF0E3FE903D3AEC_1(::System::Int32 a1)
	{
		return ((::MoleMole::Config::EffectLODType(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_DDF0E3FE903D3AEC_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_E2E047713797D3C6(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_E2E047713797D3C6_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_3C0B62C29B086DB7(::MoleMole::Config::EffectLODType a1)
	{
		return ((::System::Int32(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_3C0B62C29B086DB7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AEFAE6B063BF71A7(::MoleMole::Config::EffectLODType& a1, ::MoleMole::Config::EffectLODType& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EffectLODType&, ::MoleMole::Config::EffectLODType&))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_AEFAE6B063BF71A7_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_DB11C736C0498425(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_DB11C736C0498425_OFFSET))(a1);
	}

	static ::MoleMole::Config::EffectLODType Method_1_2A27B20688C37707(::System::Single a1)
	{
		return ((::MoleMole::Config::EffectLODType(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_2A27B20688C37707_OFFSET))(a1);
	}

	static ::System::Void Method_1_11CCB148E7603C47(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_11CCB148E7603C47_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rendering::Universal::SceneEffectLod Method_1_4DB857AE9F2411C3(::MoleMole::Config::EffectLODType a1)
	{
		return ((::UnityEngine::Rendering::Universal::SceneEffectLod(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_4DB857AE9F2411C3_OFFSET))(a1);
	}

	static ::System::String* Method_1_661349A710ABEF5E(::MoleMole::Config::EffectLODType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_661349A710ABEF5E_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_0297A99E344CE506(::MoleMole::Config::EffectLODType a1)
	{
		return ((::System::Int32(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_0297A99E344CE506_OFFSET))(a1);
	}

	static ::System::Single Method_1_8EC336ADEF126780(::MoleMole::Config::EffectLODType a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_8EC336ADEF126780_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EA1D30465AE75EE4(::System::Byte a1)
	{
		return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_EA1D30465AE75EE4_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_0297A99E344CE506_1(::MoleMole::Config::EffectLODType a1)
	{
		return ((::System::Int32(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_0297A99E344CE506_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_0297A99E344CE506_2(::MoleMole::Config::EffectLODType a1)
	{
		return ((::System::Int32(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_0297A99E344CE506_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_C7CDD7C60F10FD83(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_C7CDD7C60F10FD83_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_0297A99E344CE506_3(::MoleMole::Config::EffectLODType a1)
	{
		return ((::System::Int32(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_METHOD_1_0297A99E344CE506_3_OFFSET))(a1);
	}
};
