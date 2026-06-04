#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRightInfoSortType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1032;
class Class_1_DB2D61E7A20DFB38_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3688AAD4E87ED349_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA912C40)
#define CLASS_1_3688AAD4E87ED349_METHOD_1_09EAA747239B6FD9_OFFSET UNITYSDK_OFFSET(0xA912EB0)
#define CLASS_1_3688AAD4E87ED349_METHOD_1_2BCB84FD1D16B663_OFFSET UNITYSDK_OFFSET(0xA913620)
#define CLASS_1_3688AAD4E87ED349_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0xA913040)
#define CLASS_1_3688AAD4E87ED349__CTOR_OFFSET UNITYSDK_OFFSET(0xA9137E0)

inline static constexpr unsigned int Class_1_3688AAD4E87ED349_TypeDefinitionIndex = 67469;

class Class_1_3688AAD4E87ED349 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::BattleRightInfoSortType, ::Class_1_DB2D61E7A20DFB38_2*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3688AAD4E87ED349__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3688AAD4E87ED349_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_09EAA747239B6FD9(::Class_0_16E4307DCC419505_1032* a1, ::RPG::Client::BattleRightInfoSortType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1032*, ::RPG::Client::BattleRightInfoSortType))((::PBYTE)hIl2Cpp + CLASS_1_3688AAD4E87ED349_METHOD_1_09EAA747239B6FD9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3688AAD4E87ED349_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Int32 Method_1_2BCB84FD1D16B663()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3688AAD4E87ED349_METHOD_1_2BCB84FD1D16B663_OFFSET))(this);
	}
};
