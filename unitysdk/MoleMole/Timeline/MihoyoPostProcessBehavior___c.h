#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class IEffectSimulate; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR___C_METHOD_1_4FA4012B828C8856_OFFSET UNITYSDK_OFFSET(0x15BC7B70)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR___C_METHOD_1_96144FAA1D41D8C3_OFFSET UNITYSDK_OFFSET(0x15BC7C10)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR___C_METHOD_1_FFACAEF09C217BD8_OFFSET UNITYSDK_OFFSET(0x15BC7BE0)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BC7B20)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC7B60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoPostProcessBehavior___c_TypeDefinitionIndex = 78302;

	class MihoyoPostProcessBehavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::EffectSimulate::IEffectSimulate*, ::System::Int32>** StaticGet___9__9_4()
		{
			return (::System::Func_2<::MoleMole::EffectSimulate::IEffectSimulate*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MihoyoPostProcessBehavior___c_TypeDefinitionIndex)->GetStaticField(0x32470);
		}
		static ::MoleMole::Timeline::MihoyoPostProcessBehavior___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::MihoyoPostProcessBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(MihoyoPostProcessBehavior___c_TypeDefinitionIndex)->GetStaticField(0x32478);
		}
		static ::System::Func_2<::MoleMole::EffectSimulate::IEffectSimulate*, ::Sirenix::OdinInspector::ValueDropdownItem>** StaticGet___9__9_5()
		{
			return (::System::Func_2<::MoleMole::EffectSimulate::IEffectSimulate*, ::Sirenix::OdinInspector::ValueDropdownItem>**)Il2CppClass::FromTypeDefinitionIndex(MihoyoPostProcessBehavior___c_TypeDefinitionIndex)->GetStaticField(0x32480);
		}
		static ::System::Func_2<::System::Type*, ::MoleMole::EffectSimulate::IEffectSimulate*>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::System::Type*, ::MoleMole::EffectSimulate::IEffectSimulate*>**)Il2CppClass::FromTypeDefinitionIndex(MihoyoPostProcessBehavior___c_TypeDefinitionIndex)->GetStaticField(0x32488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::MoleMole::EffectSimulate::IEffectSimulate* Method_1_4FA4012B828C8856(::System::Type* a1)
		{
			return ((::MoleMole::EffectSimulate::IEffectSimulate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR___C_METHOD_1_4FA4012B828C8856_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_FFACAEF09C217BD8(::MoleMole::EffectSimulate::IEffectSimulate* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::EffectSimulate::IEffectSimulate*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR___C_METHOD_1_FFACAEF09C217BD8_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownItem Method_1_96144FAA1D41D8C3(::MoleMole::EffectSimulate::IEffectSimulate* a1)
		{
			return ((::Sirenix::OdinInspector::ValueDropdownItem(*)(::PVOID, ::MoleMole::EffectSimulate::IEffectSimulate*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR___C_METHOD_1_96144FAA1D41D8C3_OFFSET))(this, a1);
		}
	};
}
