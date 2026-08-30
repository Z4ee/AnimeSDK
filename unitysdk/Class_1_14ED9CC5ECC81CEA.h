#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_61.h"
#include "unitysdk/System/Object.h"

class Class_1_07436FDB24BAF683_2;
class Class_1_2E64892306548DEA_4;
namespace RPG::Client { class IRogueTournGameLevelLayer; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_14ED9CC5ECC81CEA_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xD7FC690)
#define CLASS_1_14ED9CC5ECC81CEA_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xD7FC610)
#define CLASS_1_14ED9CC5ECC81CEA_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xD7FC6D0)
#define CLASS_1_14ED9CC5ECC81CEA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xD7FC5D0)
#define CLASS_1_14ED9CC5ECC81CEA_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xD7FC650)
#define CLASS_1_14ED9CC5ECC81CEA_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0xD7FC460)
#define CLASS_1_14ED9CC5ECC81CEA_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xD7FC530)
#define CLASS_1_14ED9CC5ECC81CEA_SYNCINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xD7FC580)
#define CLASS_1_14ED9CC5ECC81CEA__CTOR_OFFSET UNITYSDK_OFFSET(0xD7FC4F0)

inline static constexpr unsigned int Class_1_14ED9CC5ECC81CEA_TypeDefinitionIndex = 67644;

class Class_1_14ED9CC5ECC81CEA : public ::System::Object
{
public:
	static ::Class_1_14ED9CC5ECC81CEA** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_14ED9CC5ECC81CEA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14ED9CC5ECC81CEA_TypeDefinitionIndex)->GetStaticField(0x65760);
	}
	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>* _Layers_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14ED9CC5ECC81CEA__CTOR_OFFSET))(this);
	}

	static ::Class_1_14ED9CC5ECC81CEA* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_14ED9CC5ECC81CEA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_14ED9CC5ECC81CEA_METHOD_1_7E9AC3FFDA4606D5_OFFSET))();
	}

	::System::Void SyncFull(::Class_1_07436FDB24BAF683_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07436FDB24BAF683_2*))((::PBYTE)hIl2Cpp + CLASS_1_14ED9CC5ECC81CEA_SYNCFULL_OFFSET))(this, a1);
	}

	::System::Void SyncIncremental(::Class_1_2E64892306548DEA_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E64892306548DEA_4*))((::PBYTE)hIl2Cpp + CLASS_1_14ED9CC5ECC81CEA_SYNCINCREMENTAL_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_61 get_Status()
	{
		return ((::Enum_3_DB663931210BBC27_61(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14ED9CC5ECC81CEA_GET_STATUS_OFFSET))(this);
	}

	::System::UInt32 get_LayerCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14ED9CC5ECC81CEA_GET_LAYERCOUNT_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14ED9CC5ECC81CEA_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::RPG::Client::IRogueTournGameLevelLayer* get_CurLayer()
	{
		return ((::RPG::Client::IRogueTournGameLevelLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14ED9CC5ECC81CEA_GET_CURLAYER_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>* get_Layers()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14ED9CC5ECC81CEA_GET_LAYERS_OFFSET))(this);
	}
};
