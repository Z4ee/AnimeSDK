#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;

#define CLASS_4_FC97847CD21E343D_METHOD_4_25B9FA7D8C5654B1_OFFSET UNITYSDK_OFFSET(0x151F89A0)
#define CLASS_4_FC97847CD21E343D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x151F8B00)
#define CLASS_4_FC97847CD21E343D_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x151F8910)
#define CLASS_4_FC97847CD21E343D__CTOR_OFFSET UNITYSDK_OFFSET(0x151F8A60)

inline static constexpr unsigned int Class_4_FC97847CD21E343D_TypeDefinitionIndex = 40469;

class Class_4_FC97847CD21E343D : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_B51FB35349ACD175<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FC97847CD21E343D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FC97847CD21E343D_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_25B9FA7D8C5654B1(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_FC97847CD21E343D_METHOD_4_25B9FA7D8C5654B1_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FC97847CD21E343D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
