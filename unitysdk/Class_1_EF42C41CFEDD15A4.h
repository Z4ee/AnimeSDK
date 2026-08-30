#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define CLASS_1_EF42C41CFEDD15A4_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1A753B70)
#define CLASS_1_EF42C41CFEDD15A4_METHOD_1_25E18DDE0F75BD81_OFFSET UNITYSDK_OFFSET(0x1A7534F0)
#define CLASS_1_EF42C41CFEDD15A4_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x1A753920)
#define CLASS_1_EF42C41CFEDD15A4_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1A753B80)
#define CLASS_1_EF42C41CFEDD15A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7532F0)

inline static constexpr unsigned int Class_1_EF42C41CFEDD15A4_TypeDefinitionIndex = 77967;

class Class_1_EF42C41CFEDD15A4 : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x10
	::System::Action* MECKBKLEHAN; // 0x18
	::System::Single MFLNKDOADDG; // 0x20
	::System::Int32 GGDBFECPDPF; // 0x24
	::System::Single FOMCKBAHCFM; // 0x28
	::System::Boolean _IsFinished_k__BackingField; // 0x2C

	::System::Void _ctor(::System::Single a1, ::System::Int32 a2, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_EF42C41CFEDD15A4__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_25E18DDE0F75BD81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF42C41CFEDD15A4_METHOD_1_25E18DDE0F75BD81_OFFSET))(this, a1);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF42C41CFEDD15A4_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF42C41CFEDD15A4_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF42C41CFEDD15A4_SET_ISFINISHED_OFFSET))(this, a1);
	}
};
