#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_1_280047DF9F661B14;
class Class_1_68CF822132788D19_1;
class Class_1_8C3AC9786B6764EF;
class Class_2_1839CBD9000EAF30;
class Class_2_3278534A4F266074;
class Class_2_3C8C00F3F8D7A848;
class Class_2_3C8C00F3F8D7A848_1;
class Class_2_458E5D5F1916A1AE;
class Class_2_7B2C949E9A2AA065;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9642330)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS3_0__STARTFORMIDPACK_B__0_OFFSET UNITYSDK_OFFSET(0x9642340)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS3_0__STARTFORMIDPACK_B__1_OFFSET UNITYSDK_OFFSET(0x9643020)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS3_0__STARTFORMIDPACK_B__2_OFFSET UNITYSDK_OFFSET(0x9643040)

inline static constexpr unsigned int Class_1_280047DF9F661B14___c__DisplayClass3_0_TypeDefinitionIndex = 54901;

class Class_1_280047DF9F661B14___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_8C3AC9786B6764EF* queue; // 0x10
	::Class_1_68CF822132788D19_1* archiveData; // 0x18
	::Class_2_458E5D5F1916A1AE* luaData; // 0x20
	::Class_2_3278534A4F266074* startData; // 0x28
	::Class_2_1839CBD9000EAF30* rawData; // 0x30
	::System::Action_1<::Class_0_16E4307DCC419505_557*>* __9__1; // 0x38
	::Class_1_280047DF9F661B14* __4__this; // 0x40
	::Class_2_7B2C949E9A2AA065* blockData; // 0x48
	::Class_2_3C8C00F3F8D7A848_1* nativeData; // 0x50
	::Class_2_3C8C00F3F8D7A848* designData; // 0x58
	::RPG::Client::TextID progressDescText; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForMidPack_b__0(::Class_0_16E4307DCC419505_557* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS3_0__STARTFORMIDPACK_B__0_OFFSET))(this, progress);
	}

	::System::Void _StartForMidPack_b__1(::Class_0_16E4307DCC419505_557* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS3_0__STARTFORMIDPACK_B__1_OFFSET))(this, prog);
	}

	::System::Void _StartForMidPack_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS3_0__STARTFORMIDPACK_B__2_OFFSET))(this);
	}
};
