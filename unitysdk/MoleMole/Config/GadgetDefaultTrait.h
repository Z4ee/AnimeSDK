#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace Foundation::ViewObject { class ITraitEntityBuild; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x153CC580)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x153CBE90)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x153CB4A0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_FINALPREFABPATH_OFFSET UNITYSDK_OFFSET(0x153CC480)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_ISPREFABDEFINED_OFFSET UNITYSDK_OFFSET(0x153CC3E0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x153CB520)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_12258585B54C162D_OFFSET UNITYSDK_OFFSET(0x153CC650)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x153CB1A0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x153CD020)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x153CD0B0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_66DDCFACE808B0BA_OFFSET UNITYSDK_OFFSET(0x153CCA40)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_7A8DC74ED3D40789_OFFSET UNITYSDK_OFFSET(0x153CD0C0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_85B401BB8BA57AEA_OFFSET UNITYSDK_OFFSET(0x153CD3A0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_BD31C97E6FF9EB6F_OFFSET UNITYSDK_OFFSET(0x153CD260)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x153CB290)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_CD729A9634455FE2_OFFSET UNITYSDK_OFFSET(0x153CC490)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x153CB120)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_E00E5E8C04C50887_OFFSET UNITYSDK_OFFSET(0x153CC9B0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_FDFE9AC64A706A16_OFFSET UNITYSDK_OFFSET(0x153CBEF0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x153CB300)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x153CCF30)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x153CCBB0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x153CCAF0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x153CCEE0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x153CD010)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x153CCFD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GadgetDefaultTrait_TypeDefinitionIndex = 78129;

	class GadgetDefaultTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::System::Boolean* StaticGet_IsOpenGadgetDefaultAsyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GadgetDefaultTrait_TypeDefinitionIndex)->GetStaticField(0xCEB0);
		}
		// static const ::System::String* DefaultPrefabPath; // 0x0
		::System::String* ShowName; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::Boolean EnableTimeSlow; // 0x28
		::System::Boolean EnableDither; // 0x29
		::System::String* DitherConfigKey; // 0x30
		::System::Boolean EnableMove; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CCTOR_OFFSET))();
		}

		::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsPrefabDefined()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_ISPREFABDEFINED_OFFSET))(this);
		}

		::System::String* get_FinalPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_FINALPREFABPATH_OFFSET))(this);
		}

		::System::Boolean Method_2_CD729A9634455FE2(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_CD729A9634455FE2_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean PostBuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTPROCESSENTITY_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::GadgetDefaultTrait* Method_2_7A8DC74ED3D40789(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::GadgetDefaultTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_7A8DC74ED3D40789_OFFSET))(a1, a2);
		}

		::System::Void Method_2_12258585B54C162D(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_12258585B54C162D_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::GadgetDefaultTrait* Method_2_BD31C97E6FF9EB6F(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::GadgetDefaultTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_BD31C97E6FF9EB6F_OFFSET))(a1);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Void Method_2_66DDCFACE808B0BA(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_66DDCFACE808B0BA_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_2_85B401BB8BA57AEA(::Foundation::ViewObject::ITraitEntityBuild* a1)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ITraitEntityBuild*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_85B401BB8BA57AEA_OFFSET))(a1);
		}

		::System::Void Method_2_E00E5E8C04C50887(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_E00E5E8C04C50887_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_FDFE9AC64A706A16(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_FDFE9AC64A706A16_OFFSET))(this, a1, a2);
		}
	};
}
