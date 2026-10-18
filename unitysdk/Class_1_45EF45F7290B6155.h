#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F1B5D6380BD40EB;
namespace RPG::Client { class TabView; }
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_45EF45F7290B6155_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8A7040)
#define CLASS_1_45EF45F7290B6155_METHOD_1_AD69C1A85F86BF14_OFFSET UNITYSDK_OFFSET(0xB8A6E20)
#define CLASS_1_45EF45F7290B6155_METHOD_1_BFFE0D476A0214C1_OFFSET UNITYSDK_OFFSET(0xB8A6C30)
#define CLASS_1_45EF45F7290B6155__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A67D0)

inline static constexpr unsigned int Class_1_45EF45F7290B6155_TypeDefinitionIndex = 49821;

class Class_1_45EF45F7290B6155 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_5F1B5D6380BD40EB*>* DFHDMFHHAOH; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_1_5F1B5D6380BD40EB*, ::System::IDisposable*>* LLOGGOIPHBC; // 0x18
	::System::Action_1<::Class_1_5F1B5D6380BD40EB*>* OHLCAJMAAKH; // 0x20
	::RPG::Client::TabView* PEOHNLJEFLJ; // 0x28

	::System::Void _ctor(::RPG::Client::TabView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TabView*))((::PBYTE)hIl2Cpp + CLASS_1_45EF45F7290B6155__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFFE0D476A0214C1(::Class_1_5F1B5D6380BD40EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + CLASS_1_45EF45F7290B6155_METHOD_1_BFFE0D476A0214C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD69C1A85F86BF14(::Class_1_5F1B5D6380BD40EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + CLASS_1_45EF45F7290B6155_METHOD_1_AD69C1A85F86BF14_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45EF45F7290B6155_DISPOSE_OFFSET))(this);
	}
};
