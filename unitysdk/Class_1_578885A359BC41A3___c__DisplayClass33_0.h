#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_578885A359BC41A3;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define CLASS_1_578885A359BC41A3___C__DISPLAYCLASS33_0__ASYNCLOADASSET_B__0_OFFSET UNITYSDK_OFFSET(0x10CB5A30)
#define CLASS_1_578885A359BC41A3___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB5870)

inline static constexpr unsigned int Class_1_578885A359BC41A3___c__DisplayClass33_0_TypeDefinitionIndex = 48442;

class Class_1_578885A359BC41A3___c__DisplayClass33_0 : public ::System::Object
{
public:
	::Class_1_578885A359BC41A3* __4__this; // 0x10
	::System::String* path; // 0x18
	::System::UInt32 groupID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoadAsset_b__0(::RPG::Client::IAssetOperation* opt)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_578885A359BC41A3___C__DISPLAYCLASS33_0__ASYNCLOADASSET_B__0_OFFSET))(this, opt);
	}
};
