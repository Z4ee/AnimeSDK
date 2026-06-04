#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA814B0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA814E0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATEFFECT_B__40_0_OFFSET UNITYSDK_OFFSET(0xCA815D0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATTREEATTACHPOINT_B__39_0_OFFSET UNITYSDK_OFFSET(0xCA81590)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATTREEGROUPINSTANCEID_B__38_0_OFFSET UNITYSDK_OFFSET(0xCA81530)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_GROUNDANCHOR_B__35_0_OFFSET UNITYSDK_OFFSET(0xCA814F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_VOICECD_B__41_0_OFFSET UNITYSDK_OFFSET(0xCA81640)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchExhibitController___c_TypeDefinitionIndex = 56278;

	class TrainCakeCatchExhibitController___c : public ::System::Object
	{
	public:
		static ::RPG::Client::TrainCakeCatchExhibitController___c** StaticGet___9()
		{
			return (::RPG::Client::TrainCakeCatchExhibitController___c**)Il2CppClass::FromTypeDefinitionIndex(TrainCakeCatchExhibitController___c_TypeDefinitionIndex)->GetStaticField(0x553D0);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::String*>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TrainCakeCatchExhibitController___c_TypeDefinitionIndex)->GetStaticField(0x553D8);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Single>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(TrainCakeCatchExhibitController___c_TypeDefinitionIndex)->GetStaticField(0x553E0);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TrainCakeCatchExhibitController___c_TypeDefinitionIndex)->GetStaticField(0x553E8);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::String*>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TrainCakeCatchExhibitController___c_TypeDefinitionIndex)->GetStaticField(0x553F0);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Single>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(TrainCakeCatchExhibitController___c_TypeDefinitionIndex)->GetStaticField(0x553F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* __InitConstValue_GroundAnchor_b__35_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_GROUNDANCHOR_B__35_0_OFFSET))(this, a1);
		}

		::System::UInt32 __InitConstValue_CatTreeGroupInstanceID_b__38_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATTREEGROUPINSTANCEID_B__38_0_OFFSET))(this, a1);
		}

		::System::String* __InitConstValue_CatTreeAttachPoint_b__39_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATTREEATTACHPOINT_B__39_0_OFFSET))(this, a1);
		}

		::System::Single __InitConstValue_CatEffect_b__40_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATEFFECT_B__40_0_OFFSET))(this, a1);
		}

		::System::Single __InitConstValue_VoiceCD_b__41_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_VOICECD_B__41_0_OFFSET))(this, a1);
		}
	};
}
