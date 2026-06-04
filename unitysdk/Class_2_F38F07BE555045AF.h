#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }
namespace System { class Object; }

#define CLASS_2_F38F07BE555045AF_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xABA08D0)
#define CLASS_2_F38F07BE555045AF_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0xABA0A20)
#define CLASS_2_F38F07BE555045AF_METHOD_2_0967101E100517FC_OFFSET UNITYSDK_OFFSET(0xABA02C0)
#define CLASS_2_F38F07BE555045AF_METHOD_2_1C4E950D51EA1469_OFFSET UNITYSDK_OFFSET(0xAB9FD00)
#define CLASS_2_F38F07BE555045AF_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0xABA05E0)
#define CLASS_2_F38F07BE555045AF_METHOD_2_3F80D57BE81BD898_OFFSET UNITYSDK_OFFSET(0xABA0EF0)
#define CLASS_2_F38F07BE555045AF_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0xAB9FF80)
#define CLASS_2_F38F07BE555045AF_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xABA0F50)
#define CLASS_2_F38F07BE555045AF_METHOD_2_6828BC9B9BA32F88_OFFSET UNITYSDK_OFFSET(0xABA0AE0)
#define CLASS_2_F38F07BE555045AF_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xABA0D40)
#define CLASS_2_F38F07BE555045AF_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0xAB9FCF0)
#define CLASS_2_F38F07BE555045AF_METHOD_2_F2FE362E28DF9068_OFFSET UNITYSDK_OFFSET(0xABA0CA0)
#define CLASS_2_F38F07BE555045AF__CTOR_OFFSET UNITYSDK_OFFSET(0xAB9FC60)
#define CLASS_2_F38F07BE555045AF___ONBATTLEFINISHED_B__10_0_OFFSET UNITYSDK_OFFSET(0xABA0EE0)
#define CLASS_2_F38F07BE555045AF___PLAYSIMPLIFIEDPERFORMANCE_B__7_0_OFFSET UNITYSDK_OFFSET(0xABA0DC0)
#define CLASS_2_F38F07BE555045AF___STARTPREBATTLEPERFORMANCE_B__8_0_OFFSET UNITYSDK_OFFSET(0xABA0ED0)

inline static constexpr unsigned int Class_2_F38F07BE555045AF_TypeDefinitionIndex = 69905;

class Class_2_F38F07BE555045AF : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Boolean Field_2_0; // 0x28
	::System::Boolean Field_2_1; // 0x29
	::System::UInt32 Field_2_2; // 0x2C

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_1C4E950D51EA1469(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_1C4E950D51EA1469_OFFSET))(this, a1);
	}

	::System::Void Method_2_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_2_0967101E100517FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_0967101E100517FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_2_2AA27BA1D6C33879(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_2AA27BA1D6C33879_OFFSET))(this, a1);
	}

	::System::Void Method_2_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_07E567B3C6C3D7D7_OFFSET))(this);
	}

	::System::Void Method_2_6828BC9B9BA32F88(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_6828BC9B9BA32F88_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2FE362E28DF9068(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_F2FE362E28DF9068_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void __PlaySimplifiedPerformance_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF___PLAYSIMPLIFIEDPERFORMANCE_B__7_0_OFFSET))(this);
	}

	::System::Void __StartPreBattlePerformance_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF___STARTPREBATTLEPERFORMANCE_B__8_0_OFFSET))(this);
	}

	::System::Void __OnBattleFinished_b__10_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF___ONBATTLEFINISHED_B__10_0_OFFSET))(this);
	}

	::System::Void Method_2_3F80D57BE81BD898(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_3F80D57BE81BD898_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
