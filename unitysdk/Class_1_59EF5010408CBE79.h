#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_B224D8D429173940;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_59EF5010408CBE79_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8E0B270)
#define CLASS_1_59EF5010408CBE79_GET__CURFOGID_OFFSET UNITYSDK_OFFSET(0x8E0C240)
#define CLASS_1_59EF5010408CBE79_GET__UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0x8E0C260)
#define CLASS_1_59EF5010408CBE79_METHOD_1_76BC2C2CBE8585AC_OFFSET UNITYSDK_OFFSET(0x8E0BAD0)
#define CLASS_1_59EF5010408CBE79_METHOD_1_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x8E0B2C0)
#define CLASS_1_59EF5010408CBE79_METHOD_1_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x8E0B060)
#define CLASS_1_59EF5010408CBE79_METHOD_1_E5D433C7A574E387_OFFSET UNITYSDK_OFFSET(0x8E0BF50)
#define CLASS_1_59EF5010408CBE79_METHOD_1_FD083BB43B60F9FB_OFFSET UNITYSDK_OFFSET(0x8E0C100)
#define CLASS_1_59EF5010408CBE79_SET__CURFOGID_OFFSET UNITYSDK_OFFSET(0x8E0C250)
#define CLASS_1_59EF5010408CBE79_SET__UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0x8E0C270)
#define CLASS_1_59EF5010408CBE79__CTOR_OFFSET UNITYSDK_OFFSET(0x8E0B030)

inline static constexpr unsigned int Class_1_59EF5010408CBE79_TypeDefinitionIndex = 62645;

class Class_1_59EF5010408CBE79 : public ::System::Object
{
public:
	::Class_2_F47F7A3F5E97970D* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_B224D8D429173940*>* Field_1_2; // 0x18
	::Class_3_1A92845FAFA5EC77* Field_1_4; // 0x20
	::System::Int16 __UnitPixelCount_k__BackingField; // 0x28
	::System::UInt32 __CurFogID_k__BackingField; // 0x2C

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79_METHOD_1_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79_METHOD_1_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Method_1_E5D433C7A574E387(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79_METHOD_1_E5D433C7A574E387_OFFSET))(this, a1);
	}

	::Class_1_B224D8D429173940* Method_1_76BC2C2CBE8585AC(::System::UInt32 a1)
	{
		return ((::Class_1_B224D8D429173940*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79_METHOD_1_76BC2C2CBE8585AC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FD083BB43B60F9FB(::Class_1_B224D8D429173940* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B224D8D429173940*))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79_METHOD_1_FD083BB43B60F9FB_OFFSET))(this, a1);
	}

	::System::UInt32 get__CurFogID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79_GET__CURFOGID_OFFSET))(this);
	}

	::System::Void set__CurFogID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79_SET__CURFOGID_OFFSET))(this, value);
	}

	::System::Int16 get__UnitPixelCount()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79_GET__UNITPIXELCOUNT_OFFSET))(this);
	}

	::System::Void set__UnitPixelCount(::System::Int16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79_SET__UNITPIXELCOUNT_OFFSET))(this, value);
	}
};
