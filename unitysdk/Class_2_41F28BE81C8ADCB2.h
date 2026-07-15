#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D22BBD5AAECFE505.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickSpecialViewType.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"

class Class_0_16E4307DCC419505_37;
class FiveDimRenderingItem;
class FiveDimRenderingPanelRuntime;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x15FF88D0)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_0986E23AB72F8F9A_OFFSET UNITYSDK_OFFSET(0x15FF8D00)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_0E6B796A28CF5EAE_OFFSET UNITYSDK_OFFSET(0x15FF6B20)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_1421F30E46CEF39B_OFFSET UNITYSDK_OFFSET(0x15FF8010)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_28F3AF2D57193AC1_OFFSET UNITYSDK_OFFSET(0x15FF67E0)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15FF8540)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_443A8FD387045C5D_OFFSET UNITYSDK_OFFSET(0x15FF6FB0)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x15FF8880)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_5E0DBF36D6013B7C_OFFSET UNITYSDK_OFFSET(0x15FF85A0)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_6D006271A1FDA1A1_OFFSET UNITYSDK_OFFSET(0x15FF7CB0)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_70A027EA0E44D24A_OFFSET UNITYSDK_OFFSET(0x15FF8B20)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x15FF73A0)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_953E49F323D92B59_OFFSET UNITYSDK_OFFSET(0x15FF6BF0)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_95C5D515D9C060E5_OFFSET UNITYSDK_OFFSET(0x15FF6E60)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_C27BE94DA25FDCAB_OFFSET UNITYSDK_OFFSET(0x15FF7BA0)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0x15FF7230)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_CD560E5BE4BF42A4_OFFSET UNITYSDK_OFFSET(0x15FF8C10)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_D6F475CD34D5DF6B_OFFSET UNITYSDK_OFFSET(0x15FF75A0)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_D8FD81FB74270BB0_OFFSET UNITYSDK_OFFSET(0x15FF6C90)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_E55CBA084335CA18_OFFSET UNITYSDK_OFFSET(0x15FF7C00)
#define CLASS_2_41F28BE81C8ADCB2_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x15FF8E80)
#define CLASS_2_41F28BE81C8ADCB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FF9030)
#define CLASS_2_41F28BE81C8ADCB2__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF9020)

inline static constexpr unsigned int Class_2_41F28BE81C8ADCB2_TypeDefinitionIndex = 75154;

class Class_2_41F28BE81C8ADCB2 : public ::Class_1_D22BBD5AAECFE505
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_41F28BE81C8ADCB2_TypeDefinitionIndex)->GetStaticField(0xDD40);
	}
	// static const ::System::Single Field_2_1; // 0x0
	::Class_0_16E4307DCC419505_37* Field_2_2; // 0x18
	::Il2CppArray<::FiveDimRenderingItem*>* Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* Field_2_5; // 0x30
	::FiveDimRenderingPanelRuntime* Field_2_6; // 0x38
	::System::Single Field_2_7; // 0x40
	::System::Boolean Field_2_8; // 0x44
	::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType Field_2_9; // 0x45
	::System::Boolean Field_2_10; // 0x46
	::RPG::GameCore::FDRIStateMaskEnum Field_2_11; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2__CCTOR_OFFSET))();
	}

	::System::Void Method_2_28F3AF2D57193AC1(::Class_0_16E4307DCC419505_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_28F3AF2D57193AC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_953E49F323D92B59(::Class_0_16E4307DCC419505_37* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_953E49F323D92B59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_443A8FD387045C5D(::Class_0_16E4307DCC419505_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_443A8FD387045C5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_D6F475CD34D5DF6B(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_D6F475CD34D5DF6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void Method_2_1421F30E46CEF39B(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_1421F30E46CEF39B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6D006271A1FDA1A1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_6D006271A1FDA1A1_OFFSET))(this, a1);
	}

	::System::String* Method_2_0986E23AB72F8F9A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_0986E23AB72F8F9A_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_5E0DBF36D6013B7C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_5E0DBF36D6013B7C_OFFSET))(this, a1);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_2_CD560E5BE4BF42A4(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_CD560E5BE4BF42A4_OFFSET))(this, a1);
	}

	::Il2CppArray<::FiveDimRenderingItem*>* Method_2_0E6B796A28CF5EAE()
	{
		return ((::Il2CppArray<::FiveDimRenderingItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_0E6B796A28CF5EAE_OFFSET))(this);
	}

	::System::Void Method_2_70A027EA0E44D24A(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_70A027EA0E44D24A_OFFSET))(this, a1);
	}

	::System::Void Method_2_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_2_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_2_E55CBA084335CA18(::RPG::GameCore::FDRIStateMaskEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FDRIStateMaskEnum))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_E55CBA084335CA18_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C27BE94DA25FDCAB(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a2, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_C27BE94DA25FDCAB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D8FD81FB74270BB0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_D8FD81FB74270BB0_OFFSET))(this);
	}

	::System::Void Method_2_95C5D515D9C060E5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_41F28BE81C8ADCB2_METHOD_2_95C5D515D9C060E5_OFFSET))(this, a1);
	}
};
