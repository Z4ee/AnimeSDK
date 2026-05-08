#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

namespace MoleMole { class UserLocalDataItem; }
template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16B21020)
#define CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B210A0)

inline static constexpr unsigned int Class_2_085BB97B56356049_Class_2_24D4C3ABA06EE84C_TypeDefinitionIndex = 63376;

class Class_2_085BB97B56356049_Class_2_24D4C3ABA06EE84C : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::MoleMole::UserLocalDataItem*>* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C_ONCREATEPROPERTY_OFFSET))(this);
	}
};
