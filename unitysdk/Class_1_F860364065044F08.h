#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F860364065044F08_AssetPreloadState.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/System/Object.h"

class Class_1_2C2DA62D5BBB20B1;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define CLASS_1_F860364065044F08_CLEAR_OFFSET UNITYSDK_OFFSET(0x15A77420)
#define CLASS_1_F860364065044F08_METHOD_1_5FAB2B62AD176C63_OFFSET UNITYSDK_OFFSET(0x15A77480)
#define CLASS_1_F860364065044F08_METHOD_1_6F4A6B5CE800C615_OFFSET UNITYSDK_OFFSET(0x15A77310)
#define CLASS_1_F860364065044F08_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15A77320)
#define CLASS_1_F860364065044F08__CTOR_OFFSET UNITYSDK_OFFSET(0x15A77570)

inline static constexpr unsigned int Class_1_F860364065044F08_TypeDefinitionIndex = 59840;

class Class_1_F860364065044F08 : public ::System::Object
{
public:
	::Collections::Pooled::PooledList_1<::Class_1_2C2DA62D5BBB20B1*>* BDNPHHNGNOC; // 0x10
	::System::String* CDMFNHJGGKF; // 0x18
	::System::Type* EPGPJMHNBON; // 0x20
	::RPG::Client::IAssetOperation* PNFLPKJHFMF; // 0x28
	::UnityEngine::Object* CEFDDDAIMMD; // 0x30
	::RPG::Client::GameObjectPoolUsage GMCBFACPNJJ; // 0x38
	::System::Int32 DFHNBODEFNP; // 0x3C
	::System::Boolean IJPFEBAMFPM; // 0x40
	::Class_1_F860364065044F08_AssetPreloadState HGIEBOMEGPD; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F860364065044F08__CTOR_OFFSET))(this);
	}

	::RPG::Client::IAssetOperation* Method_1_6F4A6B5CE800C615()
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F860364065044F08_METHOD_1_6F4A6B5CE800C615_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F860364065044F08_TOSTRING_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F860364065044F08_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_5FAB2B62AD176C63(::System::Int32 a1, ::RPG::Client::GameObjectPoolUsage a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_F860364065044F08_METHOD_1_5FAB2B62AD176C63_OFFSET))(this, a1, a2);
	}
};
