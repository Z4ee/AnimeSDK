#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
template <typename T> class Class_4_B51FB35349ACD175;

#define CLASS_4_5F2EBC8E34F566CB_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x142C71D0)
#define CLASS_4_5F2EBC8E34F566CB_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x142C7730)
#define CLASS_4_5F2EBC8E34F566CB_METHOD_4_53D5785ED835FF96_OFFSET UNITYSDK_OFFSET(0x142C7320)
#define CLASS_4_5F2EBC8E34F566CB__CTOR_OFFSET UNITYSDK_OFFSET(0x142C75A0)

inline static constexpr unsigned int Class_4_5F2EBC8E34F566CB_TypeDefinitionIndex = 83384;

class Class_4_5F2EBC8E34F566CB : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_B51FB35349ACD175<::MoleMole::EntityHandle>* Field_4_0; // 0x28
	::Class_3_B537A0AA78803363* Field_4_2; // 0x30
	::Class_3_B537A0AA78803363* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F2EBC8E34F566CB__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F2EBC8E34F566CB_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_53D5785ED835FF96(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_5F2EBC8E34F566CB_METHOD_4_53D5785ED835FF96_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F2EBC8E34F566CB_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
