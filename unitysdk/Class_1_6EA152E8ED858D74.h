#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6EA152E8ED858D74_METHOD_1_1738FE11B4451187_OFFSET UNITYSDK_OFFSET(0x10A92FD0)
#define CLASS_1_6EA152E8ED858D74__CTOR_OFFSET UNITYSDK_OFFSET(0x10A93120)

inline static constexpr unsigned int Class_1_6EA152E8ED858D74_TypeDefinitionIndex = 45124;

class Class_1_6EA152E8ED858D74 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* Field_1_3; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x1C
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA152E8ED858D74__CTOR_OFFSET))(this);
	}

	::Class_1_6EA152E8ED858D74* Method_1_1738FE11B4451187()
	{
		return ((::Class_1_6EA152E8ED858D74*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EA152E8ED858D74_METHOD_1_1738FE11B4451187_OFFSET))(this);
	}
};
