#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyAllMapConfig; }
namespace RPG::GameCore { class MonopolyMapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_96419F04F23BCC39_GET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0xA3E03D0)
#define CLASS_1_96419F04F23BCC39_METHOD_1_059AEC8F6606B613_OFFSET UNITYSDK_OFFSET(0xA3E02F0)
#define CLASS_1_96419F04F23BCC39_METHOD_1_838727FF8E9B9687_OFFSET UNITYSDK_OFFSET(0xA3E03F0)
#define CLASS_1_96419F04F23BCC39_SET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0xA3E03E0)
#define CLASS_1_96419F04F23BCC39__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E0280)

inline static constexpr unsigned int Class_1_96419F04F23BCC39_TypeDefinitionIndex = 70563;

class Class_1_96419F04F23BCC39 : public ::System::Object
{
public:
	::RPG::GameCore::MonopolyAllMapConfig* Field_1_0; // 0x10
	::System::UInt32 _StartCellID_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96419F04F23BCC39__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::MonopolyMapConfig* Method_1_059AEC8F6606B613(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MonopolyMapConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_96419F04F23BCC39_METHOD_1_059AEC8F6606B613_OFFSET))(this, a1);
	}

	::System::UInt32 get_StartCellID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96419F04F23BCC39_GET_STARTCELLID_OFFSET))(this);
	}

	::System::Void set_StartCellID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_96419F04F23BCC39_SET_STARTCELLID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MonopolyMapConfig*>* Method_1_838727FF8E9B9687()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MonopolyMapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96419F04F23BCC39_METHOD_1_838727FF8E9B9687_OFFSET))(this);
	}
};
