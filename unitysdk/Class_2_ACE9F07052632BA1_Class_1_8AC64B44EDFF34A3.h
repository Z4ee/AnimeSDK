#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/System/Object.h"

class Class_1_73F7DED90F9FA901;
class Class_1_D65512A83CF70AB7;
class Class_2_ACE9F07052632BA1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_ACE9F07052632BA1_CLASS_1_8AC64B44EDFF34A3_METHOD_1_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x156DD140)
#define CLASS_2_ACE9F07052632BA1_CLASS_1_8AC64B44EDFF34A3__CTOR_OFFSET UNITYSDK_OFFSET(0x156DD130)

inline static constexpr unsigned int Class_2_ACE9F07052632BA1_Class_1_8AC64B44EDFF34A3_TypeDefinitionIndex = 53286;

class Class_2_ACE9F07052632BA1_Class_1_8AC64B44EDFF34A3 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_3; // 0x10
	::Class_2_ACE9F07052632BA1* Field_1_0; // 0x18
	::Class_1_73F7DED90F9FA901* Field_1_1; // 0x20
	::System::String* Field_1_5; // 0x28
	::MoleMole::Battle::Entity* Field_1_4; // 0x30
	::System::Int32 Field_1_2; // 0x38
	::System::Int32 Field_1_6; // 0x3C
	::Enum_3_F00DC819D834EFD2 Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_8AC64B44EDFF34A3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_8AC64B44EDFF34A3_METHOD_1_F1BB718E73080948_OFFSET))(this);
	}
};
