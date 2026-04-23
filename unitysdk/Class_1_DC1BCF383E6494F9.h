#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EParkourBuffFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_DC1BCF383E6494F9_Class_1_B11B152ED1C7543D;
class Class_2_F3F43255EC92B83B;
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_SuperStar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DC1BCF383E6494F9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DD99E0)
#define CLASS_1_DC1BCF383E6494F9_METHOD_1_0E039083B523AF86_OFFSET UNITYSDK_OFFSET(0x11DD9B50)
#define CLASS_1_DC1BCF383E6494F9_METHOD_1_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x11DD9D60)
#define CLASS_1_DC1BCF383E6494F9_METHOD_1_1D28870D3E90010B_OFFSET UNITYSDK_OFFSET(0x11DDA080)
#define CLASS_1_DC1BCF383E6494F9_METHOD_1_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x11DDA840)
#define CLASS_1_DC1BCF383E6494F9_METHOD_1_7F8118F318FBD2C2_1_OFFSET UNITYSDK_OFFSET(0x11DD9F00)
#define CLASS_1_DC1BCF383E6494F9_METHOD_1_7F8118F318FBD2C2_OFFSET UNITYSDK_OFFSET(0x11DD9EB0)
#define CLASS_1_DC1BCF383E6494F9_METHOD_1_C58A2F8056FFA161_OFFSET UNITYSDK_OFFSET(0x11DD9F50)
#define CLASS_1_DC1BCF383E6494F9__CTOR_OFFSET UNITYSDK_OFFSET(0x11DD9980)

inline static constexpr unsigned int Class_1_DC1BCF383E6494F9_TypeDefinitionIndex = 68280;

class Class_1_DC1BCF383E6494F9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_DC1BCF383E6494F9_Class_1_B11B152ED1C7543D*>* Field_1_2; // 0x10
	::Class_2_F3F43255EC92B83B* Field_1_0; // 0x18
	::RPG::Client::ParkourGame::EParkourBuffFlag Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_DC1BCF383E6494F9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1BCF383E6494F9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0E039083B523AF86(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC1BCF383E6494F9_METHOD_1_0E039083B523AF86_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7F8118F318FBD2C2(::RPG::Client::ParkourGame::EParkourBuffFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGame::EParkourBuffFlag))((::PBYTE)hIl2Cpp + CLASS_1_DC1BCF383E6494F9_METHOD_1_7F8118F318FBD2C2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7F8118F318FBD2C2_1(::RPG::Client::ParkourGame::EParkourBuffFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGame::EParkourBuffFlag))((::PBYTE)hIl2Cpp + CLASS_1_DC1BCF383E6494F9_METHOD_1_7F8118F318FBD2C2_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C58A2F8056FFA161(::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar*))((::PBYTE)hIl2Cpp + CLASS_1_DC1BCF383E6494F9_METHOD_1_C58A2F8056FFA161_OFFSET))(this, a1);
	}

	::System::Void Method_1_46DF29ACE60986D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC1BCF383E6494F9_METHOD_1_46DF29ACE60986D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1D28870D3E90010B(::RPG::Client::ParkourGame::EParkourBuffFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::EParkourBuffFlag))((::PBYTE)hIl2Cpp + CLASS_1_DC1BCF383E6494F9_METHOD_1_1D28870D3E90010B_OFFSET))(this, a1);
	}

	::System::Void Method_1_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1BCF383E6494F9_METHOD_1_14014646206E49EF_OFFSET))(this);
	}
};
