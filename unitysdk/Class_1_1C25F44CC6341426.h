#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13256E311AF13FFD.h"
#include "unitysdk/Struct_2_7BD06DA7B946DCA5.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_484;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1C25F44CC6341426_METHOD_1_9821AB47C3AE2A06_OFFSET UNITYSDK_OFFSET(0x1176D160)
#define CLASS_1_1C25F44CC6341426_METHOD_1_C66F733D8D73A486_OFFSET UNITYSDK_OFFSET(0x1176CD90)
#define CLASS_1_1C25F44CC6341426_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1176CD80)
#define CLASS_1_1C25F44CC6341426__CTOR_OFFSET UNITYSDK_OFFSET(0x1176D5C0)

inline static constexpr unsigned int Class_1_1C25F44CC6341426_TypeDefinitionIndex = 55400;

class Class_1_1C25F44CC6341426 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C25F44CC6341426__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C25F44CC6341426_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::Enum_3_13256E311AF13FFD Method_1_C66F733D8D73A486(::MoleMole::Battle::Entity* a1, ::Struct_2_7BD06DA7B946DCA5 a2, ::Class_0_16E4307DCC419505_484* a3)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_7BD06DA7B946DCA5, ::Class_0_16E4307DCC419505_484*))((::PBYTE)hIl2Cpp + CLASS_1_1C25F44CC6341426_METHOD_1_C66F733D8D73A486_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_13256E311AF13FFD Method_1_9821AB47C3AE2A06(::MoleMole::Battle::Entity* a1, ::Struct_2_7BD06DA7B946DCA5 a2, ::Class_0_16E4307DCC419505_484* a3)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_7BD06DA7B946DCA5, ::Class_0_16E4307DCC419505_484*))((::PBYTE)hIl2Cpp + CLASS_1_1C25F44CC6341426_METHOD_1_9821AB47C3AE2A06_OFFSET))(this, a1, a2, a3);
	}
};
