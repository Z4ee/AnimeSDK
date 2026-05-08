#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
class Class_2_ACE9F07052632BA1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_ACE9F07052632BA1_CLASS_1_17602A483FD8BCDD_METHOD_1_16A7A838275A61AE_OFFSET UNITYSDK_OFFSET(0x1038A1E0)
#define CLASS_2_ACE9F07052632BA1_CLASS_1_17602A483FD8BCDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1038A1D0)

inline static constexpr unsigned int Class_2_ACE9F07052632BA1_Class_1_17602A483FD8BCDD_TypeDefinitionIndex = 53293;

class Class_2_ACE9F07052632BA1_Class_1_17602A483FD8BCDD : public ::System::Object
{
public:
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_7; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_2; // 0x20
	::Class_2_ACE9F07052632BA1* Field_1_0; // 0x28
	::MoleMole::Battle::Entity* Field_1_3; // 0x30
	::Enum_3_F00DC819D834EFD2 Field_1_6; // 0x38
	::System::Int32 Field_1_5; // 0x3C
	::System::Int32 Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_17602A483FD8BCDD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_16A7A838275A61AE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_17602A483FD8BCDD_METHOD_1_16A7A838275A61AE_OFFSET))(this);
	}
};
