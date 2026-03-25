#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SpecialVisionConfig; }
namespace System { class String; }

#define CLASS_1_91BE70367C0D1365_METHOD_1_0009C6DB89CD6280_OFFSET UNITYSDK_OFFSET(0x116FEDA0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_0D7F0C9DBEFD8449_OFFSET UNITYSDK_OFFSET(0x116FFBD0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x116FFE00)
#define CLASS_1_91BE70367C0D1365_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x116FE3E0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0x116FEC60)
#define CLASS_1_91BE70367C0D1365_METHOD_1_4EEF93988A755D2A_OFFSET UNITYSDK_OFFSET(0x116FF430)
#define CLASS_1_91BE70367C0D1365_METHOD_1_54A434EE00ACE7E9_OFFSET UNITYSDK_OFFSET(0x116FF6C0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_56C243520A6A6A4C_1_OFFSET UNITYSDK_OFFSET(0x116FF140)
#define CLASS_1_91BE70367C0D1365_METHOD_1_56C243520A6A6A4C_2_OFFSET UNITYSDK_OFFSET(0x116FF8E0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_56C243520A6A6A4C_OFFSET UNITYSDK_OFFSET(0x116FEE50)
#define CLASS_1_91BE70367C0D1365_METHOD_1_57F958692BC9999F_OFFSET UNITYSDK_OFFSET(0x116FE540)
#define CLASS_1_91BE70367C0D1365_METHOD_1_73ECB962C2058A5E_1_OFFSET UNITYSDK_OFFSET(0x116FE4D0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_73ECB962C2058A5E_OFFSET UNITYSDK_OFFSET(0x116FD760)
#define CLASS_1_91BE70367C0D1365_METHOD_1_A12DD1C1315FC163_OFFSET UNITYSDK_OFFSET(0x116FD7E0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x116FDFC0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_CC144630CC7E066C_OFFSET UNITYSDK_OFFSET(0x116FE420)
#define CLASS_1_91BE70367C0D1365_METHOD_1_D1D1AF657F2AEF92_OFFSET UNITYSDK_OFFSET(0x116FECE0)
#define CLASS_1_91BE70367C0D1365__CTOR_OFFSET UNITYSDK_OFFSET(0x116FFFD0)
#define CLASS_1_91BE70367C0D1365___LOADNEWSPECIALVISIONEFFECT_B__7_0_OFFSET UNITYSDK_OFFSET(0x11700050)

inline static constexpr unsigned int Class_1_91BE70367C0D1365_TypeDefinitionIndex = 49413;

class Class_1_91BE70367C0D1365 : public ::System::Object
{
public:
	static ::RPG::GameCore::SpecialVisionConfig** StaticGet_Field_1_10()
	{
		return (::RPG::GameCore::SpecialVisionConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91BE70367C0D1365_TypeDefinitionIndex)->GetStaticField(0x41130);
	}
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	::Struct_2_0B84ADD7815498A2 Field_1_5; // 0x10
	::System::String* Field_1_8; // 0x20
	::RPG::GameCore::GameEntity* Field_1_6; // 0x28
	::RPG::GameCore::GameEntity* Field_1_7; // 0x30
	::System::String* Field_1_3; // 0x38
	::System::String* Field_1_2; // 0x40
	::Struct_2_0B84ADD7815498A2 Field_1_9; // 0x48
	::System::Int32 Field_1_16; // 0x58
	::System::Int32 Field_1_15; // 0x5C
	::RPG::GameCore::SpecialVisionType Field_1_4; // 0x60
	::System::Boolean Field_1_0; // 0x64
	::System::Boolean Field_1_1; // 0x65
	::System::Int32 Field_1_13; // 0x68
	::System::Int32 Field_1_14; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73ECB962C2058A5E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_73ECB962C2058A5E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CC144630CC7E066C(::RPG::GameCore::SpecialVisionType a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::GameEntity* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialVisionType, ::System::String*, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_CC144630CC7E066C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_73ECB962C2058A5E_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_73ECB962C2058A5E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A12DD1C1315FC163(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_A12DD1C1315FC163_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MonoEffect* Method_1_0009C6DB89CD6280(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_0009C6DB89CD6280_OFFSET))(this, a1);
	}

	::Struct_2_0B84ADD7815498A2 Method_1_57F958692BC9999F()
	{
		return ((::Struct_2_0B84ADD7815498A2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_57F958692BC9999F_OFFSET))(this);
	}

	::System::Void Method_1_4EEF93988A755D2A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_4EEF93988A755D2A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_472E9805B297BD58(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_472E9805B297BD58_OFFSET))(this, a1);
	}

	::System::String* Method_1_54A434EE00ACE7E9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_54A434EE00ACE7E9_OFFSET))(this);
	}

	::System::String* Method_1_56C243520A6A6A4C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_56C243520A6A6A4C_OFFSET))(this);
	}

	::System::String* Method_1_56C243520A6A6A4C_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_56C243520A6A6A4C_1_OFFSET))(this);
	}

	::System::String* Method_1_56C243520A6A6A4C_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_56C243520A6A6A4C_2_OFFSET))(this);
	}

	::System::Void Method_1_0D7F0C9DBEFD8449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_0D7F0C9DBEFD8449_OFFSET))(this);
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	static ::RPG::GameCore::SpecialVisionConfig* Method_1_D1D1AF657F2AEF92()
	{
		return ((::RPG::GameCore::SpecialVisionConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_D1D1AF657F2AEF92_OFFSET))();
	}

	::System::Void __LoadNewSpecialVisionEffect_b__7_0(::RPG::Client::MonoEffect* eff, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365___LOADNEWSPECIALVISIONEFFECT_B__7_0_OFFSET))(this, eff, extraParams);
	}
};
