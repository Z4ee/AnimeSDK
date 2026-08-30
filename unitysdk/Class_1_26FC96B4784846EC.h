#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define CLASS_1_26FC96B4784846EC_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1765AA50)
#define CLASS_1_26FC96B4784846EC_METHOD_1_1C74751C0412CC90_OFFSET UNITYSDK_OFFSET(0x17659D50)
#define CLASS_1_26FC96B4784846EC_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1765A9E0)
#define CLASS_1_26FC96B4784846EC_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1765AA60)
#define CLASS_1_26FC96B4784846EC__CTOR_OFFSET UNITYSDK_OFFSET(0x17659D20)

inline static constexpr unsigned int Class_1_26FC96B4784846EC_TypeDefinitionIndex = 77968;

class Class_1_26FC96B4784846EC : public ::System::Object
{
public:
	::System::Action* MECKBKLEHAN; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x18
	::System::Int32 CPLLDEHNOHK; // 0x20
	::System::Single MFLNKDOADDG; // 0x24
	::System::Boolean _IsFinished_k__BackingField; // 0x28
	::System::Single FOMCKBAHCFM; // 0x2C
	::System::Int32 KFCHGADJONG; // 0x30

	::System::Void _ctor(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_26FC96B4784846EC__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_1C74751C0412CC90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_26FC96B4784846EC_METHOD_1_1C74751C0412CC90_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26FC96B4784846EC_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26FC96B4784846EC_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26FC96B4784846EC_SET_ISFINISHED_OFFSET))(this, a1);
	}
};
