#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C655AF28A19D750E_Struct_2_1F8F89E884923C37.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/ReachIKConfig.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_REACHIKTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xFB10E50)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFB10C00)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFB108E0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0xFB10C60)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xFB10960)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xFB106A0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xFB11190)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_49AE184C923BE29F_OFFSET UNITYSDK_OFFSET(0xFB11360)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0xFB11180)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_A3CD8010EE7E2C0B_OFFSET UNITYSDK_OFFSET(0xFB11100)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xFB10650)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xFB10790)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_ED6834CE8856D7B5_OFFSET UNITYSDK_OFFSET(0xFB11220)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_FCF1E095753CAE03_OFFSET UNITYSDK_OFFSET(0xFB10F30)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0xFB10800)
#define MOLEMOLE_CONFIG_REACHIKTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFB11170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReachIKTrait_TypeDefinitionIndex = 81989;

	class ReachIKTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ReachIKConfig>* IKConfigList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_A3CD8010EE7E2C0B(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_A3CD8010EE7E2C0B_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ReachIKTrait* Method_2_ED6834CE8856D7B5(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ReachIKTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_ED6834CE8856D7B5_OFFSET))(a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_FCF1E095753CAE03(::Il2CppArray<::Class_3_C655AF28A19D750E_Struct_2_1F8F89E884923C37>*& a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_3_C655AF28A19D750E_Struct_2_1F8F89E884923C37>*&, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_FCF1E095753CAE03_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ReachIKTrait* Method_2_49AE184C923BE29F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ReachIKTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_49AE184C923BE29F_OFFSET))(a1, a2);
		}
	};
}
