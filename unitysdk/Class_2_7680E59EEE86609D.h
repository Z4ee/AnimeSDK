#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_0C170AD5C4394FF1;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7680E59EEE86609D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x99AFA50)
#define CLASS_2_7680E59EEE86609D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x99AFB60)
#define CLASS_2_7680E59EEE86609D_METHOD_2_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x99AF3C0)
#define CLASS_2_7680E59EEE86609D_METHOD_2_1A053A5901DA1B29_OFFSET UNITYSDK_OFFSET(0x99AF490)
#define CLASS_2_7680E59EEE86609D_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x99AF180)
#define CLASS_2_7680E59EEE86609D_METHOD_2_47624EB4BFC3CEEF_OFFSET UNITYSDK_OFFSET(0x99AECC0)
#define CLASS_2_7680E59EEE86609D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x99AFE80)
#define CLASS_2_7680E59EEE86609D_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x99AF200)
#define CLASS_2_7680E59EEE86609D_METHOD_2_81983145A945B3AB_OFFSET UNITYSDK_OFFSET(0x99AF370)
#define CLASS_2_7680E59EEE86609D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x99AF980)
#define CLASS_2_7680E59EEE86609D_METHOD_2_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0x99AF320)
#define CLASS_2_7680E59EEE86609D_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x99AF290)
#define CLASS_2_7680E59EEE86609D_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x99AFE10)
#define CLASS_2_7680E59EEE86609D_METHOD_2_CDC933BE90868E4F_OFFSET UNITYSDK_OFFSET(0x99AF6E0)
#define CLASS_2_7680E59EEE86609D_METHOD_2_D3FCAB3445070445_OFFSET UNITYSDK_OFFSET(0x99AEF20)
#define CLASS_2_7680E59EEE86609D_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x99AF8C0)
#define CLASS_2_7680E59EEE86609D__CTOR_OFFSET UNITYSDK_OFFSET(0x99AFC40)
#define CLASS_2_7680E59EEE86609D__ONBIND_OFFSET UNITYSDK_OFFSET(0x99AEC30)
#define CLASS_2_7680E59EEE86609D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x99AFEE0)
#define CLASS_2_7680E59EEE86609D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x99AFF40)
#define CLASS_2_7680E59EEE86609D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x99AFDB0)

inline static constexpr unsigned int Class_2_7680E59EEE86609D_TypeDefinitionIndex = 66559;

class Class_2_7680E59EEE86609D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_5; // 0x60
	::RPG::GameCore::BattleGridFightAvatarData* Field_2_1; // 0x68
	::UnityEngine::Transform* Field_2_0; // 0x70
	::System::Collections::Generic::List_1<::Class_2_0C170AD5C4394FF1*>* Field_2_3; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_4; // 0x80
	::System::Boolean Field_2_2; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_47624EB4BFC3CEEF(::RPG::GameCore::BattleGridFightAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_47624EB4BFC3CEEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A86A455D6AB5B836(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_A86A455D6AB5B836_OFFSET))(this, a1);
	}

	::System::Void Method_2_81983145A945B3AB(::RPG::GameCore::BattleGridFightAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_81983145A945B3AB_OFFSET))(this, a1);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_1A053A5901DA1B29(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_1A053A5901DA1B29_OFFSET))(this, a1);
	}

	::System::Void Method_2_CDC933BE90868E4F(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_CDC933BE90868E4F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_D3FCAB3445070445()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_D3FCAB3445070445_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7680E59EEE86609D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
