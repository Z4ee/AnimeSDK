#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90;
class Class_1_92178DBBCC977AF4_Class_1_AA042942F39155AF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92178DBBCC977AF4__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9B720)

inline static constexpr unsigned int Class_1_92178DBBCC977AF4_TypeDefinitionIndex = 37943;

class Class_1_92178DBBCC977AF4 : public ::System::Object
{
public:
	::Class_1_92178DBBCC977AF4_Class_1_AA042942F39155AF* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90*>* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92178DBBCC977AF4__CTOR_OFFSET))(this);
	}
};
