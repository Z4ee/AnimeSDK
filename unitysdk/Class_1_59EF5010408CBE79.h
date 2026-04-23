#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_B224D8D429173940;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_59EF5010408CBE79_EXECUTE_OFFSET UNITYSDK_OFFSET(0xAA3F2F0)
#define CLASS_1_59EF5010408CBE79_GET__CURFOGID_OFFSET UNITYSDK_OFFSET(0xAA402C0)
#define CLASS_1_59EF5010408CBE79_GET__UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0xAA402E0)
#define CLASS_1_59EF5010408CBE79_METHOD_1_76BC2C2CBE8585AC_OFFSET UNITYSDK_OFFSET(0xAA3FB60)
#define CLASS_1_59EF5010408CBE79_METHOD_1_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0xAA3F0E0)
#define CLASS_1_59EF5010408CBE79_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0xAA3F340)
#define CLASS_1_59EF5010408CBE79_METHOD_1_E5D433C7A574E387_OFFSET UNITYSDK_OFFSET(0xAA3FFE0)
#define CLASS_1_59EF5010408CBE79_METHOD_1_FD083BB43B60F9FB_OFFSET UNITYSDK_OFFSET(0xAA40180)
#define CLASS_1_59EF5010408CBE79_SET__CURFOGID_OFFSET UNITYSDK_OFFSET(0xAA402D0)
#define CLASS_1_59EF5010408CBE79_SET__UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0xAA402F0)
#define CLASS_1_59EF5010408CBE79__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3F0B0)

inline static constexpr unsigned int Class_1_59EF5010408CBE79_TypeDefinitionIndex = 70659;

class Class_1_59EF5010408CBE79 : public ::System::Object
{
public:
	::Class_2_F47F7A3F5E97970D* Field_1_3; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B224D8D429173940*>* Field_1_2; // 0x20
	::System::UInt32 __CurFogID_k__BackingField; // 0x28
	::System::Int16 __UnitPixelCount_k__BackingField; // 0x2C

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

	::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59EF5010408CBE79_METHOD_1_D308836DB54415C3_OFFSET))(this);
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
