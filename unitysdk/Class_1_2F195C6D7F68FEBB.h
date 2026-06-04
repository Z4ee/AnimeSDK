#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1107;
class Class_1_3A123E9573CB8090;
class Class_1_4BC03BAAC61C4531;
class Class_1_FD0C1FDFC981C0D8;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeInfo; }
namespace RPG::GameCore { class LevelNavNodeTransitInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_457E58CBA89C9A1F_OFFSET UNITYSDK_OFFSET(0x112B0CC0)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_4649371C2F4940AD_OFFSET UNITYSDK_OFFSET(0x112B1C70)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x112B10E0)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_67E5C4A9887B65E0_OFFSET UNITYSDK_OFFSET(0x112B0CE0)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x112B13E0)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x112B1080)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_A29454F4348BF530_OFFSET UNITYSDK_OFFSET(0x112B2030)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0x112B2110)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_E9B8A590D11E394E_OFFSET UNITYSDK_OFFSET(0x112B21B0)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x112B16C0)
#define CLASS_1_2F195C6D7F68FEBB_METHOD_1_FD509156BCE51F7E_OFFSET UNITYSDK_OFFSET(0x112B0FC0)
#define CLASS_1_2F195C6D7F68FEBB__CTOR_OFFSET UNITYSDK_OFFSET(0x112B0E80)

inline static constexpr unsigned int Class_1_2F195C6D7F68FEBB_TypeDefinitionIndex = 69655;

class Class_1_2F195C6D7F68FEBB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x18
	::Class_1_4BC03BAAC61C4531* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3A123E9573CB8090*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_FD0C1FDFC981C0D8*>* Field_1_5; // 0x38

	::System::Void _ctor(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::NavMap::IMapDataSource* Method_1_457E58CBA89C9A1F()
	{
		return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_457E58CBA89C9A1F_OFFSET))(this);
	}

	static ::Class_1_2F195C6D7F68FEBB* Method_1_67E5C4A9887B65E0(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>* a3)
	{
		return ((::Class_1_2F195C6D7F68FEBB*(*)(::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_67E5C4A9887B65E0_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 Method_1_FD509156BCE51F7E(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_FD509156BCE51F7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_1_4649371C2F4940AD(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_4649371C2F4940AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_3A123E9573CB8090*>* Method_1_A29454F4348BF530()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_3A123E9573CB8090*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_A29454F4348BF530_OFFSET))(this);
	}

	::Class_1_3A123E9573CB8090* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_3A123E9573CB8090*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_A917AC671DF6CB2D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E9B8A590D11E394E(::UnityEngine::Vector3 a1, ::Class_0_16E4307DCC419505_1107*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_1107*&))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB_METHOD_1_E9B8A590D11E394E_OFFSET))(this, a1, a2);
	}
};
