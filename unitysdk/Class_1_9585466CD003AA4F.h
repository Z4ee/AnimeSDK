#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5C34FDAF2CB731CC;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapNpcDef; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_9585466CD003AA4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141E70E0)
#define CLASS_1_9585466CD003AA4F_METHOD_1_1898CAA70FAAD329_OFFSET UNITYSDK_OFFSET(0x141E7A50)
#define CLASS_1_9585466CD003AA4F_METHOD_1_5E8E5F6EA920B476_OFFSET UNITYSDK_OFFSET(0x141E7700)
#define CLASS_1_9585466CD003AA4F_METHOD_1_765AABC85D3EB31F_OFFSET UNITYSDK_OFFSET(0x141E7D60)
#define CLASS_1_9585466CD003AA4F_METHOD_1_8143601C81689E26_OFFSET UNITYSDK_OFFSET(0x141E7130)
#define CLASS_1_9585466CD003AA4F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x141E87B0)
#define CLASS_1_9585466CD003AA4F_METHOD_1_8F394EA365AFB659_OFFSET UNITYSDK_OFFSET(0x141E7640)
#define CLASS_1_9585466CD003AA4F_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x141E7CD0)
#define CLASS_1_9585466CD003AA4F__CTOR_OFFSET UNITYSDK_OFFSET(0x141E7040)

inline static constexpr unsigned int Class_1_9585466CD003AA4F_TypeDefinitionIndex = 56913;

class Class_1_9585466CD003AA4F : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10
	::RPG::Client::MapDef* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5C34FDAF2CB731CC*>* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_9585466CD003AA4F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9585466CD003AA4F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8143601C81689E26(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_9585466CD003AA4F_METHOD_1_8143601C81689E26_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E8E5F6EA920B476(::RPG::Client::MapNpc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CLASS_1_9585466CD003AA4F_METHOD_1_5E8E5F6EA920B476_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1898CAA70FAAD329(::RPG::Client::MapNpc* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CLASS_1_9585466CD003AA4F_METHOD_1_1898CAA70FAAD329_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9585466CD003AA4F_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::System::Void Method_1_765AABC85D3EB31F(::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_9585466CD003AA4F_METHOD_1_765AABC85D3EB31F_OFFSET))(a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9585466CD003AA4F_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_1_8F394EA365AFB659(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_9585466CD003AA4F_METHOD_1_8F394EA365AFB659_OFFSET))(this, a1);
	}
};
