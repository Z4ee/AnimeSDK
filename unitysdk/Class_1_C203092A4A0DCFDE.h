#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeEventPriorityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_C203092A4A0DCFDE_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1CCB6AD0)
#define CLASS_1_C203092A4A0DCFDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB6F10)

inline static constexpr unsigned int Class_1_C203092A4A0DCFDE_TypeDefinitionIndex = 13833;

class Class_1_C203092A4A0DCFDE : public ::System::Object
{
public:
	::System::String* AJGGLOMPFOJ; // 0x10
	::System::String* MPJLNHJIFIM; // 0x18
	::System::UInt32 DNOENIFOBLJ; // 0x20
	::RPG::GameCore::LimaoNewsOfficeEventPriorityType GMPGDEINODK; // 0x24
	::System::UInt32 GHOCDNJOCBH; // 0x28
	::System::UInt32 ELGNMHLEEEH; // 0x2C
	::RPG::Client::TextID LDBCBEDHFPD; // 0x30
	::System::UInt32 NALKJIAJIJK; // 0x40
	::System::UInt32 NMBKAIEIAPE; // 0x44
	::System::UInt32 CPCMBMBFBAI; // 0x48
	::System::UInt32 HPLHMBBGAOO; // 0x4C
	::RPG::Client::TextID JCAGGCBNNDL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C203092A4A0DCFDE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C203092A4A0DCFDE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C203092A4A0DCFDE*&))((::PBYTE)hIl2Cpp + CLASS_1_C203092A4A0DCFDE_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
