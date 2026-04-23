#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1057;
class Class_1_BE0E97EFC15B9DBB;
class Class_1_C9755E532821B8B5;
class Class_1_FD0C1FDFC981C0D8;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeInfo; }
namespace RPG::GameCore { class LevelNavNodeTransitInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_04EEDB331274CC96_OFFSET UNITYSDK_OFFSET(0x12A7B9F0)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_457E58CBA89C9A1F_OFFSET UNITYSDK_OFFSET(0x12A7A650)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_4649371C2F4940AD_OFFSET UNITYSDK_OFFSET(0x12A7B550)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x12A7AA80)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_67E5C4A9887B65E0_OFFSET UNITYSDK_OFFSET(0x12A7A670)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x12A7AA20)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_9154909C0DA9C56E_OFFSET UNITYSDK_OFFSET(0x12A7BB20)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x12A7AD30)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x12A7B060)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x12A7BA50)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_FD509156BCE51F7E_OFFSET UNITYSDK_OFFSET(0x12A7A950)
#define CLASS_1_2F195C6D7F68FEBB__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7A810)

inline static constexpr unsigned int Class_1_2F195C6D7F68FEBB_TypeDefinitionIndex = 68843;

class Class_1_2F195C6D7F68FEBB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_FD0C1FDFC981C0D8*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C9755E532821B8B5*>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_5; // 0x30
	::Class_1_BE0E97EFC15B9DBB* Field_1_0; // 0x38

	::System::Void _ctor(::Class_1_BE0E97EFC15B9DBB* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE0E97EFC15B9DBB*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::NavMap::IMapDataSource* Method_1_457E58CBA89C9A1F()
	{
		return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_457E58CBA89C9A1F_OFFSET))(this);
	}

	static ::Class_1_2F195C6D7F68FEBB* Method_1_67E5C4A9887B65E0(::Class_1_BE0E97EFC15B9DBB* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>* a3)
	{
		return ((::Class_1_2F195C6D7F68FEBB*(*)(::Class_1_BE0E97EFC15B9DBB*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_67E5C4A9887B65E0_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 Method_1_FD509156BCE51F7E(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_FD509156BCE51F7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Void Method_1_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_1_4649371C2F4940AD(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_4649371C2F4940AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_C9755E532821B8B5*>* Method_1_04EEDB331274CC96()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_C9755E532821B8B5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_04EEDB331274CC96_OFFSET))(this);
	}

	::Class_1_C9755E532821B8B5* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_C9755E532821B8B5*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9154909C0DA9C56E(::UnityEngine::Vector3 a1, ::Class_0_16E4307DCC419505_1057*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_1057*&))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_9154909C0DA9C56E_OFFSET))(this, a1, a2);
	}
};
