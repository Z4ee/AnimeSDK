#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }
namespace System { class Object; }

#define CLASS_2_F38F07BE555045AF_METHOD_2_1C4E950D51EA1469_OFFSET UNITYSDK_OFFSET(0xBE654B0)
#define CLASS_2_F38F07BE555045AF_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0xBE65E80)
#define CLASS_2_F38F07BE555045AF_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0xBE66170)
#define CLASS_2_F38F07BE555045AF_METHOD_2_4B0C05440201244A_OFFSET UNITYSDK_OFFSET(0xBE65AF0)
#define CLASS_2_F38F07BE555045AF_METHOD_2_5AAD8A621CCD075B_OFFSET UNITYSDK_OFFSET(0xBE66400)
#define CLASS_2_F38F07BE555045AF_METHOD_2_8E23425F959FF044_OFFSET UNITYSDK_OFFSET(0xBE65460)
#define CLASS_2_F38F07BE555045AF_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0xBE66340)
#define CLASS_2_F38F07BE555045AF_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBE66630)
#define CLASS_2_F38F07BE555045AF_METHOD_2_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0xBE65730)
#define CLASS_2_F38F07BE555045AF_METHOD_2_F2FE362E28DF9068_OFFSET UNITYSDK_OFFSET(0xBE66590)
#define CLASS_2_F38F07BE555045AF__CTOR_OFFSET UNITYSDK_OFFSET(0xBE653D0)
#define CLASS_2_F38F07BE555045AF___ONBATTLEFINISHED_B__10_0_OFFSET UNITYSDK_OFFSET(0xBE66850)
#define CLASS_2_F38F07BE555045AF___PLAYSIMPLIFIEDPERFORMANCE_B__7_0_OFFSET UNITYSDK_OFFSET(0xBE666B0)
#define CLASS_2_F38F07BE555045AF___STARTPREBATTLEPERFORMANCE_B__8_0_OFFSET UNITYSDK_OFFSET(0xBE66840)

inline static constexpr unsigned int Class_2_F38F07BE555045AF_TypeDefinitionIndex = 75035;

class Class_2_F38F07BE555045AF : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Boolean DBPCILLOFDP; // 0x28
	::System::Boolean DNGLACKLGBL; // 0x29
	::System::UInt32 EDAOBLALAEH; // 0x2C

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_8E23425F959FF044()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_8E23425F959FF044_OFFSET))(this);
	}

	::System::Void Method_2_1C4E950D51EA1469(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_1C4E950D51EA1469_OFFSET))(this, a1);
	}

	::System::Void Method_2_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_2_4B0C05440201244A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_4B0C05440201244A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void Method_2_2AA27BA1D6C33879(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_2AA27BA1D6C33879_OFFSET))(this, a1);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_2_5AAD8A621CCD075B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F38F07BE555045AF_METHOD_2_5AAD8A621CCD075B_OFFSET))(this, a1);
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
};
