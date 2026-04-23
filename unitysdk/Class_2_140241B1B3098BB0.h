#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_140241B1B3098BB0_Class_1_172781B57C58AF96_1;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class NpcPossessionEffectConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_140241B1B3098BB0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x997A290)
#define CLASS_2_140241B1B3098BB0_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x997A9B0)
#define CLASS_2_140241B1B3098BB0_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x997CBE0)
#define CLASS_2_140241B1B3098BB0_METHOD_2_3BCBFCB5E1DE174F_OFFSET UNITYSDK_OFFSET(0x997A2F0)
#define CLASS_2_140241B1B3098BB0_METHOD_2_70689260313CEAD3_OFFSET UNITYSDK_OFFSET(0x997C100)
#define CLASS_2_140241B1B3098BB0_METHOD_2_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x997C9E0)
#define CLASS_2_140241B1B3098BB0_METHOD_2_749564053D241EFD_OFFSET UNITYSDK_OFFSET(0x997B530)
#define CLASS_2_140241B1B3098BB0_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x997AAB0)
#define CLASS_2_140241B1B3098BB0_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x997CEB0)
#define CLASS_2_140241B1B3098BB0_METHOD_2_7DA630E417E15F3B_OFFSET UNITYSDK_OFFSET(0x997D500)
#define CLASS_2_140241B1B3098BB0_METHOD_2_95107E77D3C72845_OFFSET UNITYSDK_OFFSET(0x997BD10)
#define CLASS_2_140241B1B3098BB0_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x997CF30)
#define CLASS_2_140241B1B3098BB0_METHOD_2_A06AE91EE57C2733_OFFSET UNITYSDK_OFFSET(0x997AF70)
#define CLASS_2_140241B1B3098BB0_METHOD_2_A42DF918B496327B_OFFSET UNITYSDK_OFFSET(0x997CF80)
#define CLASS_2_140241B1B3098BB0_METHOD_2_A61F78CE4F3CD4C0_OFFSET UNITYSDK_OFFSET(0x997B600)
#define CLASS_2_140241B1B3098BB0_METHOD_2_AE407B483ADFE68E_OFFSET UNITYSDK_OFFSET(0x997B4B0)
#define CLASS_2_140241B1B3098BB0_METHOD_2_AF092AA2EE3C89D8_OFFSET UNITYSDK_OFFSET(0x997CD30)
#define CLASS_2_140241B1B3098BB0_METHOD_2_B526EBDCAF26B59C_OFFSET UNITYSDK_OFFSET(0x997AE60)
#define CLASS_2_140241B1B3098BB0_METHOD_2_BCA00C4FB15DA1BD_OFFSET UNITYSDK_OFFSET(0x997C470)
#define CLASS_2_140241B1B3098BB0_METHOD_2_CD11447B87E899D5_OFFSET UNITYSDK_OFFSET(0x997CB00)
#define CLASS_2_140241B1B3098BB0_METHOD_2_D95535B895BF708F_OFFSET UNITYSDK_OFFSET(0x997BBC0)
#define CLASS_2_140241B1B3098BB0_METHOD_2_E767E6519295EBF5_OFFSET UNITYSDK_OFFSET(0x997C990)
#define CLASS_2_140241B1B3098BB0_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x997D4F0)
#define CLASS_2_140241B1B3098BB0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x997D4E0)
#define CLASS_2_140241B1B3098BB0_METHOD_2_F127D0D5A4792016_OFFSET UNITYSDK_OFFSET(0x997B5A0)
#define CLASS_2_140241B1B3098BB0_METHOD_2_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x997A780)
#define CLASS_2_140241B1B3098BB0_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x997B1E0)
#define CLASS_2_140241B1B3098BB0_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x997B230)
#define CLASS_2_140241B1B3098BB0_TICK_OFFSET UNITYSDK_OFFSET(0x997B280)
#define CLASS_2_140241B1B3098BB0__CCTOR_OFFSET UNITYSDK_OFFSET(0x997D610)
#define CLASS_2_140241B1B3098BB0__CTOR_OFFSET UNITYSDK_OFFSET(0x997A280)
#define CLASS_2_140241B1B3098BB0___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x997D630)

inline static constexpr unsigned int Class_2_140241B1B3098BB0_TypeDefinitionIndex = 52851;

class Class_2_140241B1B3098BB0 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_6()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_140241B1B3098BB0_TypeDefinitionIndex)->GetStaticField(0x19D60);
	}
	::RPG::GameCore::CharacterVisibleComponent* Field_2_3; // 0x18
	::Class_2_140241B1B3098BB0_Class_1_172781B57C58AF96_1* Field_2_0; // 0x20
	::System::Action_1<::UnityEngine::GameObject*>* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_2_140241B1B3098BB0_Class_1_172781B57C58AF96_1*>* Field_2_1; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_B526EBDCAF26B59C(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_B526EBDCAF26B59C_OFFSET))(this, a1, a2);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE407B483ADFE68E(::System::Action_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_AE407B483ADFE68E_OFFSET))(this, a1);
	}

	::System::Void Method_2_749564053D241EFD(::System::Action_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_749564053D241EFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_F127D0D5A4792016(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_F127D0D5A4792016_OFFSET))(this, a1);
	}

	::System::Void Method_2_A61F78CE4F3CD4C0(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_A61F78CE4F3CD4C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_95107E77D3C72845(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_95107E77D3C72845_OFFSET))(this, a1);
	}

	::System::Void Method_2_70689260313CEAD3(::System::String* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_70689260313CEAD3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BCA00C4FB15DA1BD(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_BCA00C4FB15DA1BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3BCBFCB5E1DE174F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_3BCBFCB5E1DE174F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E767E6519295EBF5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_E767E6519295EBF5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD11447B87E899D5(::RPG::GameCore::NpcPossessionEffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NpcPossessionEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_CD11447B87E899D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF092AA2EE3C89D8(::System::Int32 a1, ::RPG::GameCore::NpcPossessionEffectConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::NpcPossessionEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_AF092AA2EE3C89D8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_77577333B4681208_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_2_A42DF918B496327B(::Il2CppArray<::System::Single>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Single>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_A42DF918B496327B_OFFSET))(a1, a2);
	}

	::System::Void Method_2_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Void Method_2_A06AE91EE57C2733(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_A06AE91EE57C2733_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_D95535B895BF708F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_D95535B895BF708F_OFFSET))(this);
	}

	::System::Void Method_2_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::Client::AttachPointMapping* Method_2_7DA630E417E15F3B()
	{
		return ((::RPG::Client::AttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0_METHOD_2_7DA630E417E15F3B_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_140241B1B3098BB0___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
