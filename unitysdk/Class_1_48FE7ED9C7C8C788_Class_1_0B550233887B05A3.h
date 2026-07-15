#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveGearConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3_METHOD_1_0126EC166C1B1051_OFFSET UNITYSDK_OFFSET(0x1765C9D0)
#define CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1765CB30)
#define CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1765CC10)

inline static constexpr unsigned int Class_1_48FE7ED9C7C8C788_Class_1_0B550233887B05A3_TypeDefinitionIndex = 53554;

class Class_1_48FE7ED9C7C8C788_Class_1_0B550233887B05A3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveGearConfig*>* Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_0126EC166C1B1051()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3_METHOD_1_0126EC166C1B1051_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
