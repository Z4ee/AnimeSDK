#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_F65C29E3C44746DB;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_C06752CD2A701BDD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA1B7350)
#define CLASS_1_C06752CD2A701BDD_METHOD_1_559829BCC0084476_OFFSET UNITYSDK_OFFSET(0xA1B6ED0)
#define CLASS_1_C06752CD2A701BDD__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B6E50)

inline static constexpr unsigned int Class_1_C06752CD2A701BDD_TypeDefinitionIndex = 50425;

class Class_1_C06752CD2A701BDD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F65C29E3C44746DB*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C06752CD2A701BDD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_559829BCC0084476(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FloorCustomValueConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FloorCustomValueConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_C06752CD2A701BDD_METHOD_1_559829BCC0084476_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C06752CD2A701BDD_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
