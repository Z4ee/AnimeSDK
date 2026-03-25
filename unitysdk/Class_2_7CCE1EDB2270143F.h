#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_02D30900317D93FD;
class Class_2_D798F8FBCDD8B14D;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7CCE1EDB2270143F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D846D0)
#define CLASS_2_7CCE1EDB2270143F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8D84820)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_05BBB0377D1BC772_OFFSET UNITYSDK_OFFSET(0x8D83C50)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x8D82CC0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_2579B977859E46CE_1_OFFSET UNITYSDK_OFFSET(0x8D836C0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_2579B977859E46CE_OFFSET UNITYSDK_OFFSET(0x8D82E00)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x8D81FF0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x8D82610)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x8D83DE0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_4AD878BDCD4EC32C_OFFSET UNITYSDK_OFFSET(0x8D83460)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_525124EFF71D885C_OFFSET UNITYSDK_OFFSET(0x8D83390)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8D84B90)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8D84AD0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5BD63F9A6C66D209_OFFSET UNITYSDK_OFFSET(0x8D838F0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x8D82520)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_619D51B179243081_OFFSET UNITYSDK_OFFSET(0x8D84320)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x8D81DD0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_6C3C00382FD7383B_OFFSET UNITYSDK_OFFSET(0x8D83000)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_6EC0547AD7B0E9ED_OFFSET UNITYSDK_OFFSET(0x8D82AA0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_7109511B48FA4E9B_OFFSET UNITYSDK_OFFSET(0x8D83A10)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x8D83F60)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_737A3C1DC1CCCB7F_OFFSET UNITYSDK_OFFSET(0x8D842A0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_8D606B21B7CEC39E_OFFSET UNITYSDK_OFFSET(0x8D83960)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x8D84490)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x8D84550)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x8D84610)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8D843D0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x8D83BA0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8D821F0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_B4905F4DB60461E8_OFFSET UNITYSDK_OFFSET(0x8D84170)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_C365440D57901CE0_OFFSET UNITYSDK_OFFSET(0x8D820C0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x8D84A60)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8D822F0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x8D82290)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_E651E87D00D2520F_OFFSET UNITYSDK_OFFSET(0x8D83FE0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_EDE51B31CB05573F_OFFSET UNITYSDK_OFFSET(0x8D81E90)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_FD5A62D86DB6806C_OFFSET UNITYSDK_OFFSET(0x8D832F0)
#define CLASS_2_7CCE1EDB2270143F_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x8D81F00)
#define CLASS_2_7CCE1EDB2270143F_ONRETURN_OFFSET UNITYSDK_OFFSET(0x8D82040)
#define CLASS_2_7CCE1EDB2270143F__CTOR_OFFSET UNITYSDK_OFFSET(0x8D84940)
#define CLASS_2_7CCE1EDB2270143F__ONBIND_OFFSET UNITYSDK_OFFSET(0x8D82360)
#define CLASS_2_7CCE1EDB2270143F__ONTICK_OFFSET UNITYSDK_OFFSET(0x8D82BF0)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8D84C60)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8D84CC0)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8D84B30)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x8D84BF0)

inline static constexpr unsigned int Class_2_7CCE1EDB2270143F_TypeDefinitionIndex = 58603;

class Class_2_7CCE1EDB2270143F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_9 = 0x16; // 0x0
	// static const ::System::Int32 Field_2_10 = 0x2; // 0x0
	// static const ::System::Single Field_2_11; // 0x0
	::UnityEngine::Transform* Field_2_2; // 0x60
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_5; // 0x68
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_7; // 0x70
	::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>* Field_2_0; // 0x78
	::System::Collections::Generic::List_1<::Class_2_D798F8FBCDD8B14D*>* Field_2_4; // 0x80
	::RPG::Client::PrefabLoadMeta* Field_2_3; // 0x88
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_13; // 0x90
	::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_15; // 0x98
	::UnityEngine::Transform* Field_2_1; // 0xA0
	::RPG::GameCore::GameEntity* Field_2_12; // 0xA8
	::System::Int32 Field_2_8; // 0xB0
	::System::Boolean Field_2_16; // 0xB4
	::System::Boolean Field_2_6; // 0xB5
	::System::Int32 Field_2_14; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_CEE72EAC18ECC163(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_6EC0547AD7B0E9ED(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_6EC0547AD7B0E9ED_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2579B977859E46CE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_2579B977859E46CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD5A62D86DB6806C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_FD5A62D86DB6806C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4AD878BDCD4EC32C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_4AD878BDCD4EC32C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2579B977859E46CE_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_2579B977859E46CE_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7109511B48FA4E9B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_7109511B48FA4E9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE51B31CB05573F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_EDE51B31CB05573F_OFFSET))(this, a1);
	}

	::System::Void Method_2_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_2_525124EFF71D885C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_525124EFF71D885C_OFFSET))(this, a1);
	}

	::System::Void Method_2_5BD63F9A6C66D209(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5BD63F9A6C66D209_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6C3C00382FD7383B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_6C3C00382FD7383B_OFFSET))(this, a1);
	}

	::Class_2_D798F8FBCDD8B14D* Method_2_8D606B21B7CEC39E(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_2_D798F8FBCDD8B14D*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_8D606B21B7CEC39E_OFFSET))(this, a1);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::Class_2_D798F8FBCDD8B14D* Method_2_05BBB0377D1BC772(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_2_D798F8FBCDD8B14D*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_05BBB0377D1BC772_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Int32 Method_2_B4905F4DB60461E8(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_B4905F4DB60461E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C365440D57901CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_C365440D57901CE0_OFFSET))(this);
	}

	::System::Void Method_2_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_3B7145E79424FB75_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_737A3C1DC1CCCB7F(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_737A3C1DC1CCCB7F_OFFSET))(this, a1);
	}

	::System::Void Method_2_619D51B179243081(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_619D51B179243081_OFFSET))(this, a1);
	}

	::Class_1_02D30900317D93FD* Method_2_E651E87D00D2520F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_02D30900317D93FD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_E651E87D00D2520F_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
