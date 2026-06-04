#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4B1AB04F7469D57D_Class_1_172781B57C58AF96_1;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class NpcPossessionEffectConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_4B1AB04F7469D57D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A02BC0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_24E226FA10B25516_OFFSET UNITYSDK_OFFSET(0x13A05710)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13A055C0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x13A03080)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_749564053D241EFD_OFFSET UNITYSDK_OFFSET(0x13A03E80)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x13A058B0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_7DA630E417E15F3B_OFFSET UNITYSDK_OFFSET(0x13A05EC0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x13A053D0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_8DCD1FEC09DA5176_OFFSET UNITYSDK_OFFSET(0x13A045C0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x13A05930)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_9AAFD0AFB5C66BD7_OFFSET UNITYSDK_OFFSET(0x13A03F60)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x13A033B0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_9F8EF6EE79B16064_OFFSET UNITYSDK_OFFSET(0x13A03EF0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_A06AE91EE57C2733_OFFSET UNITYSDK_OFFSET(0x13A03890)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_A42DF918B496327B_OFFSET UNITYSDK_OFFSET(0x13A05980)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x13A032B0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_AE407B483ADFE68E_OFFSET UNITYSDK_OFFSET(0x13A03E00)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_B4FB8F0E42A77C76_OFFSET UNITYSDK_OFFSET(0x13A05380)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_BD6E20335853300E_OFFSET UNITYSDK_OFFSET(0x13A04B00)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_BD8F1D74F42FB3F7_OFFSET UNITYSDK_OFFSET(0x13A03780)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_CD11447B87E899D5_OFFSET UNITYSDK_OFFSET(0x13A054D0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_CEAE19FB97597820_OFFSET UNITYSDK_OFFSET(0x13A04EA0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13A05EB0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13A05EA0)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_FA51DF03FF096683_OFFSET UNITYSDK_OFFSET(0x13A02C20)
#define CLASS_2_4B1AB04F7469D57D_METHOD_2_FBFB1358CF02C487_OFFSET UNITYSDK_OFFSET(0x13A046E0)
#define CLASS_2_4B1AB04F7469D57D_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x13A03B50)
#define CLASS_2_4B1AB04F7469D57D_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13A03BA0)
#define CLASS_2_4B1AB04F7469D57D_TICK_OFFSET UNITYSDK_OFFSET(0x13A03BF0)
#define CLASS_2_4B1AB04F7469D57D__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A05FD0)
#define CLASS_2_4B1AB04F7469D57D__CTOR_OFFSET UNITYSDK_OFFSET(0x13A02BB0)
#define CLASS_2_4B1AB04F7469D57D___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13A05FF0)

inline static constexpr unsigned int Class_2_4B1AB04F7469D57D_TypeDefinitionIndex = 53560;

class Class_2_4B1AB04F7469D57D : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4B1AB04F7469D57D_TypeDefinitionIndex)->GetStaticField(0x67250);
	}
	::Class_2_4B1AB04F7469D57D_Class_1_172781B57C58AF96_1* Field_2_1; // 0x18
	::RPG::GameCore::CharacterVisibleComponent* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::Class_2_4B1AB04F7469D57D_Class_1_172781B57C58AF96_1*>* Field_2_3; // 0x28
	::System::Action_1<::UnityEngine::GameObject*>* Field_2_4; // 0x30
	::System::Boolean Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_BD8F1D74F42FB3F7(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_BD8F1D74F42FB3F7_OFFSET))(this, a1, a2);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE407B483ADFE68E(::System::Action_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_AE407B483ADFE68E_OFFSET))(this, a1);
	}

	::System::Void Method_2_749564053D241EFD(::System::Action_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_749564053D241EFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F8EF6EE79B16064(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_9F8EF6EE79B16064_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AAFD0AFB5C66BD7(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_9AAFD0AFB5C66BD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FBFB1358CF02C487(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_FBFB1358CF02C487_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD6E20335853300E(::System::String* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_BD6E20335853300E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CEAE19FB97597820(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_CEAE19FB97597820_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA51DF03FF096683(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_FA51DF03FF096683_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4FB8F0E42A77C76(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_B4FB8F0E42A77C76_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD11447B87E899D5(::RPG::GameCore::NpcPossessionEffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NpcPossessionEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_CD11447B87E899D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_24E226FA10B25516(::System::Int32 a1, ::RPG::GameCore::NpcPossessionEffectConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::NpcPossessionEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_24E226FA10B25516_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_77577333B4681208_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_2_A42DF918B496327B(::Il2CppArray<::System::Single>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Single>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_A42DF918B496327B_OFFSET))(a1, a2);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_A06AE91EE57C2733(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_A06AE91EE57C2733_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_8DCD1FEC09DA5176()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_8DCD1FEC09DA5176_OFFSET))(this);
	}

	::System::Void Method_2_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::Client::AttachPointMapping* Method_2_7DA630E417E15F3B()
	{
		return ((::RPG::Client::AttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_METHOD_2_7DA630E417E15F3B_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
