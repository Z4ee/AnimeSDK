#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"

class Class_1_9C1673530BBC4E15;
namespace RPG::Client::Prop { class ChimeraPreparationStateControllerBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6135324DB18E6F67_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FDBA80)
#define CLASS_1_6135324DB18E6F67_METHOD_1_1D44F502338E9435_OFFSET UNITYSDK_OFFSET(0x19FDB2A0)
#define CLASS_1_6135324DB18E6F67_METHOD_1_3E113CA4DD9458DF_OFFSET UNITYSDK_OFFSET(0x19FDB2F0)
#define CLASS_1_6135324DB18E6F67_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x19FDB990)
#define CLASS_1_6135324DB18E6F67_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19FDB260)
#define CLASS_1_6135324DB18E6F67__CTOR_OFFSET UNITYSDK_OFFSET(0x19FDB050)

inline static constexpr unsigned int Class_1_6135324DB18E6F67_TypeDefinitionIndex = 77999;

class Class_1_6135324DB18E6F67 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::UnityEngine::GameObject*>* MEELBMCGOFK; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* IAIHPPPOMFD; // 0x18
	::RPG::Client::Prop::ChimeraPreparationStateControllerBase* DDCEKHJGMMJ; // 0x20
	::Class_1_9C1673530BBC4E15* IPLGCJPLIKH; // 0x28
	::UnityEngine::Transform* GKNBCPMJHMN; // 0x30

	::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::UnityEngine::Transform* a2, ::Class_1_9C1673530BBC4E15* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::Class_1_9C1673530BBC4E15*))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_1D44F502338E9435(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67_METHOD_1_1D44F502338E9435_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E113CA4DD9458DF(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67_METHOD_1_3E113CA4DD9458DF_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6135324DB18E6F67_DISPOSE_OFFSET))(this);
	}
};
