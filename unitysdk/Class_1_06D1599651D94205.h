#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_0E0403D2B5AD79E8;
namespace RPG::GameCore { class RtBattleMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_06D1599651D94205_METHOD_1_4578C763F24E833A_OFFSET UNITYSDK_OFFSET(0x15FCFF50)
#define CLASS_1_06D1599651D94205_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x15FD05A0)
#define CLASS_1_06D1599651D94205__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD0640)

inline static constexpr unsigned int Class_1_06D1599651D94205_TypeDefinitionIndex = 51739;

class Class_1_06D1599651D94205 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0E0403D2B5AD79E8*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::RPG::GameCore::FixPoint Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06D1599651D94205__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4578C763F24E833A(::RPG::GameCore::RtBattleMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + CLASS_1_06D1599651D94205_METHOD_1_4578C763F24E833A_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06D1599651D94205_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}
};
