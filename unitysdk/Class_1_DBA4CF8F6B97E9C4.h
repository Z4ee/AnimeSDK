#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_283;
class Class_1_0AEBFEBDADDA07AC;

#define CLASS_1_DBA4CF8F6B97E9C4_METHOD_1_3C78F415A9C03C4D_OFFSET UNITYSDK_OFFSET(0xD463960)
#define CLASS_1_DBA4CF8F6B97E9C4_METHOD_1_AAB958C808A9F6D2_OFFSET UNITYSDK_OFFSET(0xD463970)
#define CLASS_1_DBA4CF8F6B97E9C4_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xD463980)
#define CLASS_1_DBA4CF8F6B97E9C4_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xD463990)
#define CLASS_1_DBA4CF8F6B97E9C4__CTOR_OFFSET UNITYSDK_OFFSET(0xD463950)

inline static constexpr unsigned int Class_1_DBA4CF8F6B97E9C4_TypeDefinitionIndex = 51478;

class Class_1_DBA4CF8F6B97E9C4 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_DBA4CF8F6B97E9C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3C78F415A9C03C4D(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_DBA4CF8F6B97E9C4_METHOD_1_3C78F415A9C03C4D_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID Method_1_AAB958C808A9F6D2()
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBA4CF8F6B97E9C4_METHOD_1_AAB958C808A9F6D2_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DBA4CF8F6B97E9C4_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBA4CF8F6B97E9C4_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
