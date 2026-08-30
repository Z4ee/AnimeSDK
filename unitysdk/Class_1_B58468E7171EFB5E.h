#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26;
class Class_1_43BD383C98B4C0C5_207;
class Class_1_A92BC063ED2379EB;
class Class_1_AA642DEE53091501;
class Class_2_B66C1067C0468FBB;
class Class_3_E6ABB31B8050F1C6;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B58468E7171EFB5E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC03A0C0)
#define CLASS_1_B58468E7171EFB5E_METHOD_1_35AE640B88B6A58B_1_OFFSET UNITYSDK_OFFSET(0xC039C00)
#define CLASS_1_B58468E7171EFB5E_METHOD_1_35AE640B88B6A58B_OFFSET UNITYSDK_OFFSET(0xC0395A0)
#define CLASS_1_B58468E7171EFB5E_METHOD_1_FD4F1BF86644918E_OFFSET UNITYSDK_OFFSET(0xC039DE0)
#define CLASS_1_B58468E7171EFB5E_METHOD_1_FFA6B2C6B2EE0037_OFFSET UNITYSDK_OFFSET(0xC039780)
#define CLASS_1_B58468E7171EFB5E__CTOR_OFFSET UNITYSDK_OFFSET(0xC039500)

inline static constexpr unsigned int Class_1_B58468E7171EFB5E_TypeDefinitionIndex = 76948;

class Class_1_B58468E7171EFB5E : public ::System::Object
{
public:
	::Class_3_E6ABB31B8050F1C6* PDENFEFCAGN; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelEffectType, ::Class_1_AA642DEE53091501*>* MGODECBMKNB; // 0x18
	::Class_1_3B1EA953A4067E26* FKINCGODJEP; // 0x20

	::System::Void _ctor(::Class_1_3B1EA953A4067E26* a1, ::Class_3_E6ABB31B8050F1C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*, ::Class_3_E6ABB31B8050F1C6*))((::PBYTE)hIl2Cpp + CLASS_1_B58468E7171EFB5E__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_43BD383C98B4C0C5_207* Method_1_35AE640B88B6A58B(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::Class_1_43BD383C98B4C0C5_207*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B58468E7171EFB5E_METHOD_1_35AE640B88B6A58B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_43BD383C98B4C0C5_207* Method_1_35AE640B88B6A58B_1(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::Class_1_43BD383C98B4C0C5_207*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B58468E7171EFB5E_METHOD_1_35AE640B88B6A58B_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_AA642DEE53091501* Method_1_FFA6B2C6B2EE0037(::RPG::GameCore::ChimeraDuelEffectType a1)
	{
		return ((::Class_1_AA642DEE53091501*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEffectType))((::PBYTE)hIl2Cpp + CLASS_1_B58468E7171EFB5E_METHOD_1_FFA6B2C6B2EE0037_OFFSET))(this, a1);
	}

	::Class_1_AA642DEE53091501* Method_1_FD4F1BF86644918E(::RPG::GameCore::ChimeraDuelEffectType a1)
	{
		return ((::Class_1_AA642DEE53091501*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEffectType))((::PBYTE)hIl2Cpp + CLASS_1_B58468E7171EFB5E_METHOD_1_FD4F1BF86644918E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B58468E7171EFB5E_DISPOSE_OFFSET))(this);
	}
};
