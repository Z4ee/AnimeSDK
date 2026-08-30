#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_DDDB57AA67C3A9EA;
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

#define CLASS_2_7CCE1EDB2270143F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x158227A0)
#define CLASS_2_7CCE1EDB2270143F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15822940)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_040B53CDFDDCEA9A_OFFSET UNITYSDK_OFFSET(0x158211A0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_2579B977859E46CE_OFFSET UNITYSDK_OFFSET(0x15821530)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_2779D76E9C9FA4B9_OFFSET UNITYSDK_OFFSET(0x1581FD40)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x15820230)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x15821AA0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1581FFE0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x15820AA0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x1581FC70)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_4AD878BDCD4EC32C_OFFSET UNITYSDK_OFFSET(0x158212D0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x15821E00)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5C3D695332368211_OFFSET UNITYSDK_OFFSET(0x15821BB0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x15820340)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x1581FA50)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_6C3C00382FD7383B_OFFSET UNITYSDK_OFFSET(0x15820E10)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_70F9CFE4F7ED39D2_OFFSET UNITYSDK_OFFSET(0x15820880)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_7109511B48FA4E9B_OFFSET UNITYSDK_OFFSET(0x15821910)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_7136DC8DFCDC2E24_1_OFFSET UNITYSDK_OFFSET(0x15821760)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_7136DC8DFCDC2E24_OFFSET UNITYSDK_OFFSET(0x15820C80)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_759A774D823F4596_OFFSET UNITYSDK_OFFSET(0x158222D0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_77DD69656A561147_OFFSET UNITYSDK_OFFSET(0x15821FB0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_78D06F75C9FCC8EE_OFFSET UNITYSDK_OFFSET(0x158217D0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x15821EF0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15821B60)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_ADAF3D8E40C25A96_OFFSET UNITYSDK_OFFSET(0x15822390)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1581FE80)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_B4905F4DB60461E8_OFFSET UNITYSDK_OFFSET(0x158221A0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_CEE72EAC18ECC163_1_OFFSET UNITYSDK_OFFSET(0x1581FF80)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x1581FF20)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_EDE51B31CB05573F_OFFSET UNITYSDK_OFFSET(0x1581FB10)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x15822560)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x15822620)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x158226E0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x158224A0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_FD5A62D86DB6806C_OFFSET UNITYSDK_OFFSET(0x15821100)
#define CLASS_2_7CCE1EDB2270143F_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1581FB80)
#define CLASS_2_7CCE1EDB2270143F_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1581FCC0)
#define CLASS_2_7CCE1EDB2270143F__CTOR_OFFSET UNITYSDK_OFFSET(0x15822AB0)
#define CLASS_2_7CCE1EDB2270143F__ONBIND_OFFSET UNITYSDK_OFFSET(0x15820070)
#define CLASS_2_7CCE1EDB2270143F__ONTICK_OFFSET UNITYSDK_OFFSET(0x158209D0)

inline static constexpr unsigned int Class_2_7CCE1EDB2270143F_TypeDefinitionIndex = 71476;

class Class_2_7CCE1EDB2270143F : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Int32 IAMOPAFEOKK = 0x16; // 0x0
	// static const ::System::Int32 NAKNHFPPBFH = 0x2; // 0x0
	// static const ::System::Single AGPPJJPOMBB; // 0x0
	::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>* CNEMHHIIKMB; // 0x60
	::System::Collections::Generic::List_1<::Class_2_D798F8FBCDD8B14D*>* GCIKKMGIPIO; // 0x68
	::RPG::Client::PrefabLoadMeta* BLHGCPAPAGF; // 0x70
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* JMFEAGMLOEA; // 0x78
	::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>* LIAJEEOFBFG; // 0x80
	::UnityEngine::Transform* DGNBGCHECOB; // 0x88
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x90
	::UnityEngine::Transform* KHKCFJKABEP; // 0x98
	::RPG::GameCore::TurnBasedAbilityComponent* PCDEEAAIFPK; // 0xA0
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* BEGBBPCIOCK; // 0xA8
	::System::Int32 HCLBBLEEOCN; // 0xB0
	::System::Int32 FLICDBGKDOC; // 0xB4
	::System::Boolean DPBGLCDBOED; // 0xB8
	::System::Boolean HCMICIBOCHC; // 0xB9
	::System::Int32 JGCCPBEDMDG; // 0xBC

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

	::System::Void Method_2_CEE72EAC18ECC163_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_CEE72EAC18ECC163_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void Method_2_70F9CFE4F7ED39D2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_70F9CFE4F7ED39D2_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7136DC8DFCDC2E24(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_7136DC8DFCDC2E24_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD5A62D86DB6806C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_FD5A62D86DB6806C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4AD878BDCD4EC32C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_4AD878BDCD4EC32C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2579B977859E46CE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_2579B977859E46CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_7109511B48FA4E9B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_7109511B48FA4E9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE51B31CB05573F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_EDE51B31CB05573F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_040B53CDFDDCEA9A(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_040B53CDFDDCEA9A_OFFSET))(this, a1);
	}

	::System::Void Method_2_7136DC8DFCDC2E24_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_7136DC8DFCDC2E24_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6C3C00382FD7383B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_6C3C00382FD7383B_OFFSET))(this, a1);
	}

	::Class_2_D798F8FBCDD8B14D* Method_2_78D06F75C9FCC8EE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_2_D798F8FBCDD8B14D*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_78D06F75C9FCC8EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::Class_2_D798F8FBCDD8B14D* Method_2_5C3D695332368211(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_2_D798F8FBCDD8B14D*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5C3D695332368211_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Int32 Method_2_B4905F4DB60461E8(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_B4905F4DB60461E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2779D76E9C9FA4B9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_2779D76E9C9FA4B9_OFFSET))(this);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_759A774D823F4596(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_759A774D823F4596_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADAF3D8E40C25A96(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_ADAF3D8E40C25A96_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_77DD69656A561147(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_77DD69656A561147_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
