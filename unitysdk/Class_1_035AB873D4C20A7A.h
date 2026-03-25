#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_0_16E4307DCC419505_351;
class Class_0_16E4307DCC419505_369;
class Class_1_090AB0EAA610410E;
class Class_1_16D8E68BCE885505_1;
namespace RPG::AvatarSystem { template <typename T> class IPropertyModifierBuilder_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_035AB873D4C20A7A_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x1195F390)
#define CLASS_1_035AB873D4C20A7A_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0x1195FA50)
#define CLASS_1_035AB873D4C20A7A_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1195EF20)
#define CLASS_1_035AB873D4C20A7A_GET_MODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x1195EF00)
#define CLASS_1_035AB873D4C20A7A_GET_TRACENODEREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1195EEE0)
#define CLASS_1_035AB873D4C20A7A_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x1195EF40)
#define CLASS_1_035AB873D4C20A7A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1195FBB0)
#define CLASS_1_035AB873D4C20A7A_METHOD_1_2EACF0907C79EF83_OFFSET UNITYSDK_OFFSET(0x1195FC10)
#define CLASS_1_035AB873D4C20A7A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1195FFF0)
#define CLASS_1_035AB873D4C20A7A_METHOD_1_63882E0318B95793_OFFSET UNITYSDK_OFFSET(0x11960060)
#define CLASS_1_035AB873D4C20A7A_METHOD_1_6E10E5E631A25111_OFFSET UNITYSDK_OFFSET(0x1195F690)
#define CLASS_1_035AB873D4C20A7A_METHOD_1_7055ACA072EDB977_OFFSET UNITYSDK_OFFSET(0x1195FCF0)
#define CLASS_1_035AB873D4C20A7A_METHOD_1_7829C51DA0CC822B_OFFSET UNITYSDK_OFFSET(0x1195FE10)
#define CLASS_1_035AB873D4C20A7A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1195FD70)
#define CLASS_1_035AB873D4C20A7A_METHOD_1_97ECB5DC94762DE1_OFFSET UNITYSDK_OFFSET(0x1195F650)
#define CLASS_1_035AB873D4C20A7A_METHOD_1_AD6DA1DFA69DF1D0_OFFSET UNITYSDK_OFFSET(0x1195F560)
#define CLASS_1_035AB873D4C20A7A_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1195EF30)
#define CLASS_1_035AB873D4C20A7A_SET_MODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x1195EF10)
#define CLASS_1_035AB873D4C20A7A_SET_TRACENODEREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1195EEF0)
#define CLASS_1_035AB873D4C20A7A__CTOR_OFFSET UNITYSDK_OFFSET(0x11960210)

inline static constexpr unsigned int Class_1_035AB873D4C20A7A_TypeDefinitionIndex = 41990;

class Class_1_035AB873D4C20A7A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_369* _TraceNodeRepository_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_16D8E68BCE885505_1*>* Field_1_0; // 0x18
	::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* _ModifierBuilder_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x28
	::System::Boolean _IsDirty_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_369* get_TraceNodeRepository()
	{
		return ((::Class_0_16E4307DCC419505_369*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_GET_TRACENODEREPOSITORY_OFFSET))(this);
	}

	::System::Void set_TraceNodeRepository(::Class_0_16E4307DCC419505_369* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_369*))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_SET_TRACENODEREPOSITORY_OFFSET))(this, value);
	}

	::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* get_ModifierBuilder()
	{
		return ((::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_GET_MODIFIERBUILDER_OFFSET))(this);
	}

	::System::Void set_ModifierBuilder(::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_SET_MODIFIERBUILDER_OFFSET))(this, value);
	}

	::System::Boolean get_IsDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_GET_ISDIRTY_OFFSET))(this);
	}

	::System::Void set_IsDirty(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_SET_ISDIRTY_OFFSET))(this, value);
	}

	::System::Void ImportProfile(::Class_1_090AB0EAA610410E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_IMPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_341* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_EXPORTPROFILE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AD6DA1DFA69DF1D0(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_METHOD_1_AD6DA1DFA69DF1D0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_16D8E68BCE885505_1*>* Method_1_97ECB5DC94762DE1()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_16D8E68BCE885505_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_METHOD_1_97ECB5DC94762DE1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* Method_1_6E10E5E631A25111()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_METHOD_1_6E10E5E631A25111_OFFSET))(this);
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GetModifier(::Class_0_16E4307DCC419505_351* a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_0_16E4307DCC419505_351*))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_GETMODIFIER_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_2EACF0907C79EF83(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_METHOD_1_2EACF0907C79EF83_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_7055ACA072EDB977()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_METHOD_1_7055ACA072EDB977_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_7829C51DA0CC822B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_METHOD_1_7829C51DA0CC822B_OFFSET))(this);
	}

	::System::Void Method_1_63882E0318B95793(::Class_1_16D8E68BCE885505_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_16D8E68BCE885505_1*))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_METHOD_1_63882E0318B95793_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
