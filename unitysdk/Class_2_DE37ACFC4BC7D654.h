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

#define CLASS_2_DE37ACFC4BC7D654_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13502460)
#define CLASS_2_DE37ACFC4BC7D654_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x135025A0)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_1A053A5901DA1B29_OFFSET UNITYSDK_OFFSET(0x13501DD0)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_1D328271B82DC876_OFFSET UNITYSDK_OFFSET(0x13501BF0)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_24D89B5018061916_OFFSET UNITYSDK_OFFSET(0x13501650)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x135028F0)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x13502890)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x13502390)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0x13501B50)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x13501AC0)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_C6B4AC77A90D4D8F_OFFSET UNITYSDK_OFFSET(0x13502090)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x135019B0)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_C9F914864810A406_OFFSET UNITYSDK_OFFSET(0x13501420)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x13501A30)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x135022D0)
#define CLASS_2_DE37ACFC4BC7D654_METHOD_2_F6A2A0B1708327A8_OFFSET UNITYSDK_OFFSET(0x13501BA0)
#define CLASS_2_DE37ACFC4BC7D654__CTOR_OFFSET UNITYSDK_OFFSET(0x135026C0)
#define CLASS_2_DE37ACFC4BC7D654__ONBIND_OFFSET UNITYSDK_OFFSET(0x13501390)
#define CLASS_2_DE37ACFC4BC7D654___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13502950)
#define CLASS_2_DE37ACFC4BC7D654___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x135029B0)
#define CLASS_2_DE37ACFC4BC7D654___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13502830)

inline static constexpr unsigned int Class_2_DE37ACFC4BC7D654_TypeDefinitionIndex = 67498;

class Class_2_DE37ACFC4BC7D654 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::List_1<::Class_2_0C170AD5C4394FF1*>* Field_2_0; // 0x60
	::RPG::GameCore::BattleGridFightAvatarData* Field_2_1; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_2; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80
	::System::Boolean Field_2_5; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C9F914864810A406(::RPG::GameCore::BattleGridFightAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_C9F914864810A406_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A86A455D6AB5B836(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_A86A455D6AB5B836_OFFSET))(this, a1);
	}

	::System::Void Method_2_F6A2A0B1708327A8(::RPG::GameCore::BattleGridFightAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_F6A2A0B1708327A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_1D328271B82DC876(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_1D328271B82DC876_OFFSET))(this, a1);
	}

	::System::Void Method_2_1A053A5901DA1B29(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_1A053A5901DA1B29_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6B4AC77A90D4D8F(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_C6B4AC77A90D4D8F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_24D89B5018061916()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_24D89B5018061916_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
