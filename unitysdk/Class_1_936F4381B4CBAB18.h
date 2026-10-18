#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_71DE60ADB4655B5B;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_936F4381B4CBAB18_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAC9510)
#define CLASS_1_936F4381B4CBAB18_METHOD_1_6632971549249DA6_OFFSET UNITYSDK_OFFSET(0x1CAC9A20)
#define CLASS_1_936F4381B4CBAB18_METHOD_1_82D6BFD01E43D4AF_OFFSET UNITYSDK_OFFSET(0x1CAC98D0)
#define CLASS_1_936F4381B4CBAB18_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CAC9820)
#define CLASS_1_936F4381B4CBAB18_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CAC9890)
#define CLASS_1_936F4381B4CBAB18__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC9AC0)

inline static constexpr unsigned int Class_1_936F4381B4CBAB18_TypeDefinitionIndex = 43358;

class Class_1_936F4381B4CBAB18 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::String*, ::RPG::PoolList_1<::System::UInt32>*>* IOBFEDODDGN; // 0x10
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolList_1<::System::UInt32>*>* HGJHCMAIBKI; // 0x18
	::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_71DE60ADB4655B5B*>* FJGGIKFIOOF; // 0x20
	::System::UInt32 OMLGICHPKON; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18_ONRECYCLE_OFFSET))(this);
	}

	::System::Boolean Method_1_82D6BFD01E43D4AF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18_METHOD_1_82D6BFD01E43D4AF_OFFSET))(this, a1, a2);
	}

	::Class_1_71DE60ADB4655B5B* Method_1_6632971549249DA6()
	{
		return ((::Class_1_71DE60ADB4655B5B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18_METHOD_1_6632971549249DA6_OFFSET))(this);
	}
};
