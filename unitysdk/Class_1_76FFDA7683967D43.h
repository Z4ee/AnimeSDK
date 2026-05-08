#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D8377DB91A00B0F;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_76FFDA7683967D43__CTOR_OFFSET UNITYSDK_OFFSET(0x105CF7A0)

inline static constexpr unsigned int Class_1_76FFDA7683967D43_TypeDefinitionIndex = 40319;

class Class_1_76FFDA7683967D43 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Action_2<::Class_2_6D8377DB91A00B0F*, ::MoleMole::HollowChessboard::HollowEntity*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FFDA7683967D43__CTOR_OFFSET))(this);
	}
};
