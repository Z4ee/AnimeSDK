#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1382163A006DA4F3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x14033EA0)
#define CLASS_1_1382163A006DA4F3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x14033EC0)
#define CLASS_1_1382163A006DA4F3_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x14033EB0)
#define CLASS_1_1382163A006DA4F3_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14033ED0)
#define CLASS_1_1382163A006DA4F3__CTOR_OFFSET UNITYSDK_OFFSET(0x14033E90)

inline static constexpr unsigned int Class_1_1382163A006DA4F3_TypeDefinitionIndex = 50222;

class Class_1_1382163A006DA4F3 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
