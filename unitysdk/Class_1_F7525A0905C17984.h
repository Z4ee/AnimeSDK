#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AtmosphereData; }
namespace MoleMole::Config { class ConfigHollowChessboardBGVideo; }
namespace System { class String; }

#define CLASS_1_F7525A0905C17984_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12A6E850)
#define CLASS_1_F7525A0905C17984_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x12A6E890)
#define CLASS_1_F7525A0905C17984_METHOD_1_59B983EA7C6731DB_OFFSET UNITYSDK_OFFSET(0x12A6E870)
#define CLASS_1_F7525A0905C17984_METHOD_1_E7569A482716035E_OFFSET UNITYSDK_OFFSET(0x12A6E830)
#define CLASS_1_F7525A0905C17984_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x12A6E810)
#define CLASS_1_F7525A0905C17984__CTOR_OFFSET UNITYSDK_OFFSET(0x12A6E800)

inline static constexpr unsigned int Class_1_F7525A0905C17984_TypeDefinitionIndex = 62025;

class Class_1_F7525A0905C17984 : public ::System::Object
{
public:
	::MoleMole::Config::AtmosphereData* Field_1_0; // 0x10
	::System::Nullable_1<::System::Int32> Field_1_2; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_1; // 0x20

	::System::Void _ctor(::MoleMole::Config::AtmosphereData* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AtmosphereData*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_F7525A0905C17984__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7525A0905C17984_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowChessboardBGVideo* Method_1_E7569A482716035E()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardBGVideo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7525A0905C17984_METHOD_1_E7569A482716035E_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7525A0905C17984_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID Method_1_59B983EA7C6731DB()
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7525A0905C17984_METHOD_1_59B983EA7C6731DB_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7525A0905C17984_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}
};
