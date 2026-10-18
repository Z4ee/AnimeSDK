#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_140;
class Class_0_16E4307DCC419505_141;
class Class_0_16E4307DCC419505_1529;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_06AD331DBC210CEF_METHOD_1_156F7FF69C466855_OFFSET UNITYSDK_OFFSET(0xB590380)
#define CLASS_1_06AD331DBC210CEF_METHOD_1_5BDCB40128F0BA56_OFFSET UNITYSDK_OFFSET(0xB5901F0)
#define CLASS_1_06AD331DBC210CEF__CTOR_OFFSET UNITYSDK_OFFSET(0xB5900E0)

inline static constexpr unsigned int Class_1_06AD331DBC210CEF_TypeDefinitionIndex = 80128;

class Class_1_06AD331DBC210CEF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType>, ::Class_0_16E4307DCC419505_141*>* LHFHFJBKJDK; // 0x10
	::Class_0_16E4307DCC419505_1529* CEFLLELKFOP; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType>, ::Class_0_16E4307DCC419505_140*>* HJLKLEMKDNI; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_1529* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1529*))((::PBYTE)hIl2Cpp + CLASS_1_06AD331DBC210CEF__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_140* Method_1_5BDCB40128F0BA56(::System::UInt32 a1, ::RPG::Client::MechCraft::MechCraftPartType a2)
	{
		return ((::Class_0_16E4307DCC419505_140*(*)(::PVOID, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + CLASS_1_06AD331DBC210CEF_METHOD_1_5BDCB40128F0BA56_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_141* Method_1_156F7FF69C466855(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::UInt32 a2, ::RPG::Client::MechCraft::MechCraftPartType a3)
	{
		return ((::Class_0_16E4307DCC419505_141*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + CLASS_1_06AD331DBC210CEF_METHOD_1_156F7FF69C466855_OFFSET))(this, a1, a2, a3);
	}
};
