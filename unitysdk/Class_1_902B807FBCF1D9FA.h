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

#define CLASS_1_902B807FBCF1D9FA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A449E0)
#define CLASS_1_902B807FBCF1D9FA_METHOD_1_04E13FEFA09A0F2F_OFFSET UNITYSDK_OFFSET(0x9A44A30)
#define CLASS_1_902B807FBCF1D9FA_METHOD_1_18F757A7FFADA8FD_OFFSET UNITYSDK_OFFSET(0x9A453D0)
#define CLASS_1_902B807FBCF1D9FA_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9A46080)
#define CLASS_1_902B807FBCF1D9FA_METHOD_1_53AD180E0475A671_OFFSET UNITYSDK_OFFSET(0x9A44F30)
#define CLASS_1_902B807FBCF1D9FA_METHOD_1_737098303F9E7E6C_OFFSET UNITYSDK_OFFSET(0x9A45720)
#define CLASS_1_902B807FBCF1D9FA_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9A45690)
#define CLASS_1_902B807FBCF1D9FA_METHOD_1_DB0616A004E1A5CA_OFFSET UNITYSDK_OFFSET(0x9A45060)
#define CLASS_1_902B807FBCF1D9FA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A44940)

inline static constexpr unsigned int Class_1_902B807FBCF1D9FA_TypeDefinitionIndex = 56151;

class Class_1_902B807FBCF1D9FA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5C34FDAF2CB731CC*>* Field_1_1; // 0x18
	::RPG::Client::MapDef* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_902B807FBCF1D9FA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_902B807FBCF1D9FA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04E13FEFA09A0F2F(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_902B807FBCF1D9FA_METHOD_1_04E13FEFA09A0F2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB0616A004E1A5CA(::RPG::Client::MapNpc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CLASS_1_902B807FBCF1D9FA_METHOD_1_DB0616A004E1A5CA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_18F757A7FFADA8FD(::RPG::Client::MapNpc* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CLASS_1_902B807FBCF1D9FA_METHOD_1_18F757A7FFADA8FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_902B807FBCF1D9FA_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::System::Void Method_1_737098303F9E7E6C(::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_902B807FBCF1D9FA_METHOD_1_737098303F9E7E6C_OFFSET))(a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_902B807FBCF1D9FA_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_53AD180E0475A671(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_902B807FBCF1D9FA_METHOD_1_53AD180E0475A671_OFFSET))(this, a1);
	}
};
