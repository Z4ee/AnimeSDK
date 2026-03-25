#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define CLASS_1_CD3422E07545CF33_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1192F310)
#define CLASS_1_CD3422E07545CF33_METHOD_1_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x1192F0C0)
#define CLASS_1_CD3422E07545CF33_METHOD_1_FC1A7D63B49E1C58_OFFSET UNITYSDK_OFFSET(0x1192ECC0)
#define CLASS_1_CD3422E07545CF33_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1192F320)
#define CLASS_1_CD3422E07545CF33__CTOR_OFFSET UNITYSDK_OFFSET(0x1192EAD0)

inline static constexpr unsigned int Class_1_CD3422E07545CF33_TypeDefinitionIndex = 63888;

class Class_1_CD3422E07545CF33 : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x18
	::System::Single Field_1_0; // 0x20
	::System::Boolean _IsFinished_k__BackingField; // 0x24
	::System::Single Field_1_1; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor(::System::Single a1, ::System::Int32 a2, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CD3422E07545CF33__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FC1A7D63B49E1C58(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD3422E07545CF33_METHOD_1_FC1A7D63B49E1C58_OFFSET))(this, a1);
	}

	::System::Void Method_1_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD3422E07545CF33_METHOD_1_B235E757922104A8_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD3422E07545CF33_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CD3422E07545CF33_SET_ISFINISHED_OFFSET))(this, value);
	}
};
