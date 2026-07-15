#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A2BC57CDDA246645.h"

namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace System { class String; }

#define CLASS_4_B854313BD3E3D22D_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x16F29630)
#define CLASS_4_B854313BD3E3D22D__CTOR_OFFSET UNITYSDK_OFFSET(0x16F29800)
#define CLASS_4_B854313BD3E3D22D__ONBIND_OFFSET UNITYSDK_OFFSET(0x16F29750)

inline static constexpr unsigned int Class_4_B854313BD3E3D22D_TypeDefinitionIndex = 68081;

class Class_4_B854313BD3E3D22D : public ::Class_3_A2BC57CDDA246645
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	::RPG::Client::BattleSilverWolf999CustomUIData* Field_4_1; // 0x168

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B854313BD3E3D22D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B854313BD3E3D22D_METHOD_4_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B854313BD3E3D22D__ONBIND_OFFSET))(this);
	}
};
