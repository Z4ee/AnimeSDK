#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_43BD383C98B4C0C5_23;
class Class_1_F91ACF27C085FD90;
namespace MoleMole { class InteractTraitData; }
namespace MoleMole::Config { class ConfigInteractInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11CABDC0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11CAB730)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_EXCLUSIVEINTERACT_OFFSET UNITYSDK_OFFSET(0x11CAC2B0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_INTERACTPRIORITY_OFFSET UNITYSDK_OFFSET(0x11CAC310)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_ISONCEONLY_OFFSET UNITYSDK_OFFSET(0x11CAC250)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_0A3C11864695AF2A_OFFSET UNITYSDK_OFFSET(0x11CACD10)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x11CAB7B0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x11CAB4F0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x11CAD130)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_3662512A444949A2_OFFSET UNITYSDK_OFFSET(0x11CACB90)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x11CAC650)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x11CAB480)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x11CAD120)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_7BA8DD80C3AB9B17_OFFSET UNITYSDK_OFFSET(0x11CAC370)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_A85035B914D72E06_OFFSET UNITYSDK_OFFSET(0x11CAD300)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_C249FAD6F0D8AC50_OFFSET UNITYSDK_OFFSET(0x11CAD070)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x11CAB5E0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_E26438ED46F1AEB7_OFFSET UNITYSDK_OFFSET(0x11CAC810)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_E61D008B9DEA7DA2_OFFSET UNITYSDK_OFFSET(0x11CAD1C0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_F5A18F208C6EB219_OFFSET UNITYSDK_OFFSET(0x11CAC900)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_FDFE9AC64A706A16_OFFSET UNITYSDK_OFFSET(0x11CABE20)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x11CAB650)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x11CAC790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInteractTrait_TypeDefinitionIndex = 57355;

	class ConfigInteractTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* InteractName; // 0x18
		::Foundation::AssetPath ConfigDataPath; // 0x20
		::System::Int32 CoopInteractMaxCount; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>* InteractGroup; // 0x38
		::Class_1_43BD383C98B4C0C5_23* _mainInteractRunData; // 0x40
		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_23*>* _otherInteractRunDataList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsOnceOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_ISONCEONLY_OFFSET))(this);
		}

		::System::Boolean get_ExclusiveInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_EXCLUSIVEINTERACT_OFFSET))(this);
		}

		::System::Int32 get_InteractPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_INTERACTPRIORITY_OFFSET))(this);
		}

		::System::Boolean Method_2_7BA8DD80C3AB9B17(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_7BA8DD80C3AB9B17_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_2_E26438ED46F1AEB7(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2, ::MoleMole::InteractTraitData*& a3)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&, ::MoleMole::InteractTraitData*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_E26438ED46F1AEB7_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_2_51DEC44B986280C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_51DEC44B986280C0_OFFSET))(this);
		}

		static ::Class_1_43BD383C98B4C0C5_23* Method_2_F5A18F208C6EB219(::System::String*& a1, ::Foundation::AssetPath& a2, ::System::Action_1<::MoleMole::InteractTraitData*>* a3)
		{
			return ((::Class_1_43BD383C98B4C0C5_23*(*)(::System::String*&, ::Foundation::AssetPath&, ::System::Action_1<::MoleMole::InteractTraitData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_F5A18F208C6EB219_OFFSET))(a1, a2, a3);
		}

		static ::MoleMole::InteractTraitData* Method_2_C249FAD6F0D8AC50(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2)
		{
			return ((::MoleMole::InteractTraitData*(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_C249FAD6F0D8AC50_OFFSET))(a1, a2);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		static ::Class_1_43BD383C98B4C0C5_23* Method_2_0A3C11864695AF2A(::MoleMole::InteractTraitData*& a1, ::System::String*& a2)
		{
			return ((::Class_1_43BD383C98B4C0C5_23*(*)(::MoleMole::InteractTraitData*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_0A3C11864695AF2A_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_FDFE9AC64A706A16(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_FDFE9AC64A706A16_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_2_3662512A444949A2(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>*& a1, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_23*>*& a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>*&, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_23*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_3662512A444949A2_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::ConfigInteractTrait* Method_2_E61D008B9DEA7DA2(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigInteractTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_E61D008B9DEA7DA2_OFFSET))(a1);
		}

		::System::Boolean Method_2_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_0CB3D614A4DB34A1_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigInteractTrait* Method_2_A85035B914D72E06(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigInteractTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_A85035B914D72E06_OFFSET))(a1, a2);
		}
	};
}
