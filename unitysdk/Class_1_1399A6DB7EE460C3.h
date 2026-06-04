#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EParkourBuffFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_1399A6DB7EE460C3_Class_1_B11B152ED1C7543D;
class Class_2_F3F43255EC92B83B;
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_SuperStar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1399A6DB7EE460C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA716EB0)
#define CLASS_1_1399A6DB7EE460C3_METHOD_1_0516A6AD3A5634D3_OFFSET UNITYSDK_OFFSET(0xA717410)
#define CLASS_1_1399A6DB7EE460C3_METHOD_1_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0xA717230)
#define CLASS_1_1399A6DB7EE460C3_METHOD_1_24B2CA816EFA1FA5_OFFSET UNITYSDK_OFFSET(0xA717DE0)
#define CLASS_1_1399A6DB7EE460C3_METHOD_1_69D1A71FA8454BC8_OFFSET UNITYSDK_OFFSET(0xA717000)
#define CLASS_1_1399A6DB7EE460C3_METHOD_1_7F8118F318FBD2C2_1_OFFSET UNITYSDK_OFFSET(0xA7173C0)
#define CLASS_1_1399A6DB7EE460C3_METHOD_1_7F8118F318FBD2C2_OFFSET UNITYSDK_OFFSET(0xA717370)
#define CLASS_1_1399A6DB7EE460C3_METHOD_1_9206A977AE011C79_OFFSET UNITYSDK_OFFSET(0xA7175A0)
#define CLASS_1_1399A6DB7EE460C3__CTOR_OFFSET UNITYSDK_OFFSET(0xA716E50)

inline static constexpr unsigned int Class_1_1399A6DB7EE460C3_TypeDefinitionIndex = 69254;

class Class_1_1399A6DB7EE460C3 : public ::System::Object
{
public:
	::Class_2_F3F43255EC92B83B* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1399A6DB7EE460C3_Class_1_B11B152ED1C7543D*>* Field_1_1; // 0x18
	::RPG::Client::ParkourGame::EParkourBuffFlag Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_1399A6DB7EE460C3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1399A6DB7EE460C3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_69D1A71FA8454BC8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1399A6DB7EE460C3_METHOD_1_69D1A71FA8454BC8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7F8118F318FBD2C2(::RPG::Client::ParkourGame::EParkourBuffFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGame::EParkourBuffFlag))((::PBYTE)hIl2Cpp + CLASS_1_1399A6DB7EE460C3_METHOD_1_7F8118F318FBD2C2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7F8118F318FBD2C2_1(::RPG::Client::ParkourGame::EParkourBuffFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGame::EParkourBuffFlag))((::PBYTE)hIl2Cpp + CLASS_1_1399A6DB7EE460C3_METHOD_1_7F8118F318FBD2C2_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0516A6AD3A5634D3(::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar*))((::PBYTE)hIl2Cpp + CLASS_1_1399A6DB7EE460C3_METHOD_1_0516A6AD3A5634D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_24B2CA816EFA1FA5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1399A6DB7EE460C3_METHOD_1_24B2CA816EFA1FA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_9206A977AE011C79(::RPG::Client::ParkourGame::EParkourBuffFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::EParkourBuffFlag))((::PBYTE)hIl2Cpp + CLASS_1_1399A6DB7EE460C3_METHOD_1_9206A977AE011C79_OFFSET))(this, a1);
	}

	::System::Void Method_1_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1399A6DB7EE460C3_METHOD_1_11D5322717FDFD9D_OFFSET))(this);
	}
};
