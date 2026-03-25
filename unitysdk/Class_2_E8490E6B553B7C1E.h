#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E8490E6B553B7C1E_Class_1_172781B57C58AF96_1;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class NpcPossessionEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E8490E6B553B7C1E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4E1D50)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xC4E21D0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC4E41B0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_70689260313CEAD3_OFFSET UNITYSDK_OFFSET(0xC4E3700)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0xC4E3FB0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xC4E22D0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0xC4E4480)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_7DA630E417E15F3B_OFFSET UNITYSDK_OFFSET(0xC4E4AD0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_95107E77D3C72845_OFFSET UNITYSDK_OFFSET(0xC4E32F0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xC4E4500)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xC4E1DB0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_A06AE91EE57C2733_OFFSET UNITYSDK_OFFSET(0xC4E26A0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_A42DF918B496327B_OFFSET UNITYSDK_OFFSET(0xC4E4550)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_A61F78CE4F3CD4C0_OFFSET UNITYSDK_OFFSET(0xC4E2BD0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_AF092AA2EE3C89D8_OFFSET UNITYSDK_OFFSET(0xC4E4300)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_B526EBDCAF26B59C_OFFSET UNITYSDK_OFFSET(0xC4E2590)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_BCA00C4FB15DA1BD_OFFSET UNITYSDK_OFFSET(0xC4E3A70)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_CD11447B87E899D5_OFFSET UNITYSDK_OFFSET(0xC4E40D0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_D95535B895BF708F_OFFSET UNITYSDK_OFFSET(0xC4E31A0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_E767E6519295EBF5_OFFSET UNITYSDK_OFFSET(0xC4E3F60)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xC4E4AC0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xC4E4AB0)
#define CLASS_2_E8490E6B553B7C1E_METHOD_2_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0xC4E1FB0)
#define CLASS_2_E8490E6B553B7C1E_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xC4E2910)
#define CLASS_2_E8490E6B553B7C1E_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xC4E2960)
#define CLASS_2_E8490E6B553B7C1E_TICK_OFFSET UNITYSDK_OFFSET(0xC4E29B0)
#define CLASS_2_E8490E6B553B7C1E__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4E4BE0)
#define CLASS_2_E8490E6B553B7C1E__CTOR_OFFSET UNITYSDK_OFFSET(0xC4E1D40)
#define CLASS_2_E8490E6B553B7C1E___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC4E4C00)

inline static constexpr unsigned int Class_2_E8490E6B553B7C1E_TypeDefinitionIndex = 46185;

class Class_2_E8490E6B553B7C1E : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_5()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E8490E6B553B7C1E_TypeDefinitionIndex)->GetStaticField(0x44A80);
	}
	::System::Collections::Generic::List_1<::Class_2_E8490E6B553B7C1E_Class_1_172781B57C58AF96_1*>* Field_2_1; // 0x18
	::Class_2_E8490E6B553B7C1E_Class_1_172781B57C58AF96_1* Field_2_0; // 0x20
	::RPG::GameCore::CharacterVisibleComponent* Field_2_2; // 0x28
	::System::Boolean Field_2_4; // 0x30
	::System::Boolean Field_2_3; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_B526EBDCAF26B59C(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_B526EBDCAF26B59C_OFFSET))(this, a1, a2);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A61F78CE4F3CD4C0(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_A61F78CE4F3CD4C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_95107E77D3C72845(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_95107E77D3C72845_OFFSET))(this, a1);
	}

	::System::Void Method_2_70689260313CEAD3(::System::String* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_70689260313CEAD3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BCA00C4FB15DA1BD(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_BCA00C4FB15DA1BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_2_E767E6519295EBF5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_E767E6519295EBF5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD11447B87E899D5(::RPG::GameCore::NpcPossessionEffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NpcPossessionEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_CD11447B87E899D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF092AA2EE3C89D8(::System::Int32 a1, ::RPG::GameCore::NpcPossessionEffectConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::NpcPossessionEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_AF092AA2EE3C89D8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_77577333B4681208_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_2_A42DF918B496327B(::Il2CppArray<::System::Single>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Single>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_A42DF918B496327B_OFFSET))(a1, a2);
	}

	::System::Void Method_2_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Void Method_2_A06AE91EE57C2733(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_A06AE91EE57C2733_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_D95535B895BF708F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_D95535B895BF708F_OFFSET))(this);
	}

	::System::Void Method_2_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::Client::AttachPointMapping* Method_2_7DA630E417E15F3B()
	{
		return ((::RPG::Client::AttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E_METHOD_2_7DA630E417E15F3B_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8490E6B553B7C1E___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
